
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_driver {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (char const*,char*,int) ;
 int FUNC_3 (char*,char const*,int) ;
 int FUNC_4 (char const*,int) ;
 int FUNC_5 (char*,char*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device_driver *VAR_4, const char *VAR_5,
  size_t VAR_6)
{
 int VAR_7;
 char VAR_8[VAR_0];

 if (VAR_6 < 5)
  return -VAR_1;


 VAR_7 = FUNC_4(VAR_5 + 4, VAR_0);


 if (!(VAR_7 < VAR_0))
  return -VAR_1;

 FUNC_3(VAR_8, VAR_5 + 4, VAR_0);


 if (!FUNC_2(VAR_5, "add ", 4)) {
  if (FUNC_0(VAR_8) < 0)
   return -VAR_3;
  else {
   FUNC_5("add busid %s\n", VAR_8);
   return VAR_6;
  }
 } else if (!FUNC_2(VAR_5, "del ", 4)) {
  if (FUNC_1(VAR_8) < 0)
   return -VAR_2;
  else {
   FUNC_5("del busid %s\n", VAR_8);
   return VAR_6;
  }
 } else
  return -VAR_1;
}
