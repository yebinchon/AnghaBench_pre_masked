
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int my_policy_type_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,char const*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;

__attribute__((used)) static my_policy_type_t
FUNC_2(const char *VAR_4)
{
 if (FUNC_1(VAR_4, "timeshare") == 0) {
  return VAR_3;
 } else if (FUNC_1(VAR_4, "realtime") == 0) {
  return VAR_2;
 } else if (FUNC_1(VAR_4, "fixed") == 0) {
  return VAR_1;
 } else {
  FUNC_0(VAR_0, "Invalid thread policy \"%s\"", VAR_4);
 }
}
