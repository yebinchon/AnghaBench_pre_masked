
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int const) ;
 scalar_t__ FUNC_1 (int const) ;

void FUNC_2(const uint8_t *VAR_1, unsigned int *VAR_2)
{

 int VAR_3 = 4;


 for (; FUNC_0(*VAR_1); ++VAR_1) {
  if (*VAR_1 == 0x66)
   VAR_3 = 2;
 }


 if (FUNC_1(*VAR_1)) {
  uint8_t VAR_4 = *VAR_1;

  ++VAR_1;
  if (VAR_4 & VAR_0) {
   switch (*VAR_1) {
   case 0x63:
    *VAR_2 = 4;
    return;
   case 0x0f:
    ++VAR_1;

    switch (*VAR_1) {
    case 0xb6:
    case 0xbe:
     *VAR_2 = 1;
     return;
    case 0xb7:
    case 0xbf:
     *VAR_2 = 2;
     return;
    }

    break;
   }

   *VAR_2 = 8;
   return;
  }
 }


 if (*VAR_1 == 0x0f) {
  ++VAR_1;






  if (*VAR_1 == 0xb7 || *VAR_1 == 0xbf)
   VAR_3 = 2;
 }

 *VAR_2 = (*VAR_1 & 1) ? VAR_3 : 1;
}
