
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ipath_devdata {int* ipath_statusp; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct ipath_devdata* FUNC_0 (struct device*) ;
 char** VAR_2 ;
 scalar_t__ FUNC_1 (char*,char*,scalar_t__) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_3,
          struct device_attribute *VAR_4,
          char *VAR_5)
{
 struct ipath_devdata *VAR_6 = FUNC_0(VAR_3);
 int VAR_7, VAR_8;
 u64 VAR_9;
 ssize_t VAR_10;

 if (!VAR_6->ipath_statusp) {
  VAR_10 = -VAR_0;
  goto bail;
 }

 VAR_9 = *(VAR_6->ipath_statusp);
 *VAR_5 = '\0';
 for (VAR_8 = VAR_7 = 0; VAR_9 && VAR_2[VAR_7]; VAR_7++) {
  if (VAR_9 & 1) {
   if (VAR_8 && FUNC_1(VAR_5, " ", VAR_1) >=
       VAR_1)

    break;
   if (FUNC_1(VAR_5, VAR_2[VAR_7],
        VAR_1) >= VAR_1)
    break;
   VAR_8 = 1;
  }
  VAR_9 >>= 1;
 }
 if (VAR_8)
  FUNC_1(VAR_5, "\n", VAR_1);

 VAR_10 = FUNC_2(VAR_5);

bail:
 return VAR_10;
}
