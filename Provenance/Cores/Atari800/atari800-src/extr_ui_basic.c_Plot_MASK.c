
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UBYTE ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int* VAR_2 ;
 scalar_t__* VAR_3 ;
 int FUNC_1 (int,int,int,int,int) ;

__attribute__((used)) static void FUNC_2(int VAR_4, int VAR_5, int VAR_6, int VAR_7, int VAR_8)
{



 const UBYTE *VAR_9 = VAR_2 + (VAR_6 & 0x7f) * 8;
 UBYTE *VAR_10 = (UBYTE *) VAR_1 + 24 * VAR_0 + 32 + VAR_8 * (8 * VAR_0) + VAR_7 * 8;
 int VAR_11;
 int VAR_12;

 for (VAR_11 = 0; VAR_11 < 8; VAR_11++) {
  UBYTE VAR_13 = *VAR_9++;
  for (VAR_12 = 0; VAR_12 < 8; VAR_12++) {



   FUNC_0(VAR_10++, (UBYTE) (VAR_13 & 0x80 ? VAR_4 : VAR_5));

   VAR_13 <<= 1;
  }
  VAR_10 += VAR_0 - 8;
 }

}
