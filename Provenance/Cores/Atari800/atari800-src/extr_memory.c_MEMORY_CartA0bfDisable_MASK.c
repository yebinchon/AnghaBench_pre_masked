
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UBYTE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__* VAR_4 ;
 scalar_t__* VAR_5 ;
 int FUNC_0 (int,int) ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int,int,int) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int * FUNC_2 (int) ;
 int FUNC_3 (scalar_t__,int const*,int) ;
 int const* VAR_11 ;

void FUNC_4(void)
{
 if (VAR_6) {


  UBYTE const *VAR_12 = FUNC_2(VAR_9 | VAR_10);
  if (VAR_12 == ((void*)0)) {
   if (VAR_8 > 40) {
    FUNC_3(VAR_7 + 0xa000, VAR_11, 0x2000);
    FUNC_0(0xa000, 0xbfff);
   }
   else
    FUNC_1(0xa000, 0xff, 0x2000);
  }
  else
   FUNC_3(VAR_7 + 0xa000, VAR_12, 0x2000);
  VAR_6 = VAR_2;
  if (VAR_1 == VAR_0) {
   VAR_4[3] = 0;
   if (VAR_3 & 4)
    VAR_5[3] = 0;
  }
 }
}
