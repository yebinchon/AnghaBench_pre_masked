
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ipath_devdata {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct ipath_devdata* FUNC_0 (struct device*) ;
 int FUNC_1 (struct ipath_devdata*,int) ;
 int FUNC_2 (char*,int ,char*,char,char,int,int,char,char) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2,
         struct device_attribute *VAR_3,
         char *VAR_4)
{
 struct ipath_devdata *VAR_5 = FUNC_0(VAR_2);
 int VAR_6;
 int VAR_7;
 u8 VAR_8[8];

 VAR_6 = -VAR_0;
 for (VAR_7 = 0; VAR_7 < 8; ++VAR_7) {
  if (VAR_7 == 6)
   continue;
  VAR_6 = FUNC_1(VAR_5, VAR_7);
  if (VAR_6 < 0)
   break;
  VAR_8[VAR_7] = VAR_6;
 }
 if (VAR_7 == 8)
  VAR_6 = FUNC_2(VAR_4, VAR_1, "%d %d %02X %02X %d %d\n",
   *(signed char *)(VAR_8),
   *(signed char *)(VAR_8 + 1),
   VAR_8[2], VAR_8[3],
   *(signed char *)(VAR_8 + 5),
   *(signed char *)(VAR_8 + 7));
 return VAR_6;
}
