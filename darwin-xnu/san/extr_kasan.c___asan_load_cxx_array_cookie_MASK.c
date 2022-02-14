
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uptr ;
typedef scalar_t__ uint8_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__* FUNC_0 (int ) ;

uptr
FUNC_1(uptr *VAR_2)
{
 uint8_t *VAR_3 = FUNC_0((uptr)VAR_2);
 if (*VAR_3 == VAR_0) {
  return *VAR_2;
 } else if (*VAR_3 == VAR_1) {
  return 0;
 } else {
  return *VAR_2;
 }
}
