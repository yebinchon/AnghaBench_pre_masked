
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UBYTE ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int* VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_2 (int*,int,int,int) ;
 int* FUNC_3 (int,int ,int,int) ;

void FUNC_4(void)
{
 if (VAR_6 > 0) {
  UBYTE *VAR_19;
  if (VAR_4 != 0x60)
   VAR_6--;
  VAR_19 = (UBYTE *) VAR_14 + VAR_17 - VAR_12
   + (VAR_18 - VAR_10) * VAR_13;
  if (VAR_4 == 0x60 || VAR_4 == 0x61) {
   if (VAR_2 != VAR_0) {
    if (VAR_15)
     FUNC_2(VAR_19, VAR_8, 0x00, (UBYTE) (VAR_1 ? 0x2b : 0xac));

    if (VAR_16) {


     if (!VAR_1) {
      VAR_19 = FUNC_3(VAR_19 - VAR_12, FUNC_1(), 0x00, 0x88);
      FUNC_2(VAR_19, VAR_11, 0x00, 0x88);
     }
     FUNC_3(VAR_19 - VAR_12, FUNC_0(), 0x00, 0x88);
    }
   }
  }
  else {
   if (VAR_15) {
    FUNC_2(VAR_19, VAR_4, 0x00, (UBYTE) (VAR_5 == VAR_3 ? 0xac : 0x2b));
    FUNC_2(VAR_19 -= VAR_12, VAR_9, 0x00, (UBYTE) (VAR_5 == VAR_3 ? 0xac : 0x2b));
   }

   if (VAR_16)
    FUNC_3(VAR_19 - VAR_12, VAR_7, 0x00, 0x88);
  }
 }
}
