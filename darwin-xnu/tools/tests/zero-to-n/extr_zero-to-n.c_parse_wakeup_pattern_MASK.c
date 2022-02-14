
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wake_type_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,char const*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;

__attribute__((used)) static wake_type_t
FUNC_2(const char *VAR_5)
{
 if (FUNC_1(VAR_5, "chain") == 0) {
  return VAR_3;
 } else if (FUNC_1(VAR_5, "hop") == 0) {
  return VAR_4;
 } else if (FUNC_1(VAR_5, "broadcast-single-sem") == 0) {
  return VAR_1;
 } else if (FUNC_1(VAR_5, "broadcast-per-thread") == 0) {
  return VAR_2;
 } else {
  FUNC_0(VAR_0, "Invalid wakeup pattern \"%s\"", VAR_5);
 }
}
