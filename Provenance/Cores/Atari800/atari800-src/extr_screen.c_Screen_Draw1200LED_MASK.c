
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UBYTE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int*,int,int,int) ;

void FUNC_1(void)
{
 if (VAR_8 && VAR_0) {
  UBYTE *VAR_11 = (UBYTE *) VAR_7 + VAR_9 + VAR_5 * 10
   + (VAR_10 - VAR_3) * VAR_6;
  UBYTE VAR_12 = VAR_1 | VAR_2;
  if ((VAR_12 & 0x04) == 0) {
   FUNC_0(VAR_11, VAR_4, 0x00, 0x36);
   FUNC_0(VAR_11 + VAR_5, 1, 0x00, 0x36);
  }
  VAR_11 += VAR_5 * 3;
  if ((VAR_12 & 0x08) == 0) {
   FUNC_0(VAR_11, VAR_4, 0x00, 0x36);
   FUNC_0(VAR_11 + VAR_5, 2, 0x00, 0x36);
  }
 }
}
