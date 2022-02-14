
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long u32 ;


 int FUNC_0 (int*) ;
 long* VAR_0 ;

__attribute__((used)) static void FUNC_1(void)
{
 u32 VAR_1;
 u32 VAR_2 = 0;
 int VAR_3;
 int VAR_4;

 static int VAR_5[] = { 0, 1, 2, 4, 5, 7, 8, 10, 11, 12, 16, 22, 23, 26 };

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_5); VAR_3++)
  VAR_2 |= 1L << (31 - VAR_5[VAR_3]);

 for (VAR_3 = 1; VAR_3 < 256; VAR_3++) {
  VAR_1 = VAR_3;
  for (VAR_4 = 8; VAR_4; VAR_4--)
   VAR_1 = VAR_1 & 1 ? (VAR_1 >> 1) ^ VAR_2 : VAR_1 >> 1;
  VAR_0[VAR_3] = VAR_1;
 }
}
