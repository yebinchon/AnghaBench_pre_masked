
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int access_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static const char *
FUNC_0(access_t VAR_3)
{
 if (VAR_3 & VAR_1) {
  return "load from";
 } else if (VAR_3 & VAR_2) {
  return "store to";
 } else if (VAR_3 & VAR_0) {
  return "free of";
 } else {
  return "access of";
 }
}
