
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int my_policy_type_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char const*) ;
 scalar_t__ FUNC_2 (char const*,char*) ;

my_policy_type_t
FUNC_3(const char *VAR_3)
{
 if (FUNC_2(VAR_3, "timeshare") == 0) {
  return VAR_2;
 } else if (FUNC_2(VAR_3, "realtime") == 0) {
  return VAR_1;
 } else if (FUNC_2(VAR_3, "fixed") == 0) {
  return VAR_0;
 } else {
  FUNC_1("Invalid thread policy %s\n", VAR_3);
  FUNC_0(1);
 }
}
