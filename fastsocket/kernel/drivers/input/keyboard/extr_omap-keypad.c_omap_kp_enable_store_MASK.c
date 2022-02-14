
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char const*,char*,int*) ;
 int FUNC_5 (char const*,size_t) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_4, struct device_attribute *VAR_5,
        const char *VAR_6, size_t VAR_7)
{
 int VAR_8;

 if (FUNC_4(VAR_6, "%u", &VAR_8) != 1)
  return -VAR_0;

 if ((VAR_8 != 1) && (VAR_8 != 0))
  return -VAR_0;

 FUNC_2(&VAR_3);
 if (VAR_8 != VAR_2) {
  if (VAR_8)
   FUNC_1(VAR_1);
  else
   FUNC_0(VAR_1);
  VAR_2 = VAR_8;
 }
 FUNC_3(&VAR_3);

 return FUNC_5(VAR_6, VAR_7);
}
