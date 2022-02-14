
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;


 int VAR_0 ;
 scalar_t__* VAR_1 ;
 size_t* VAR_2 ;
 int* VAR_3 ;
 size_t* VAR_4 ;
 size_t* VAR_5 ;
 int VAR_6 ;

void
FUNC_0(void)
{
 int VAR_7, VAR_8, VAR_9;
 u8 VAR_10;
 u8 VAR_11[256];


 for (VAR_7 = 0; VAR_7 < 256; VAR_7++) {
  VAR_8 = 0;
  for (VAR_9 = 0; VAR_9 < 256; VAR_9++) {
   if (VAR_1[VAR_9]
       < VAR_1[VAR_7])
    VAR_8++;
  }
  VAR_11[VAR_8] = VAR_7;
 }


 for (VAR_7 = 0; VAR_7 < 256; VAR_7++) {

  VAR_10 = VAR_7;
  if (VAR_6 & VAR_0)
   VAR_10 = VAR_5[VAR_7];

  for (VAR_8 = 0; VAR_8 < 256; VAR_8++) {
   if (VAR_11[VAR_8] == VAR_10)
    break;
  }

  VAR_3[VAR_7] = VAR_8 >> 1;
 }
 for (VAR_7 = 0; VAR_7 < 128; VAR_7++) {
  VAR_10 = VAR_11[VAR_7 << 1];
  if (VAR_6 & VAR_0)
   VAR_10 = VAR_2[VAR_10];
  VAR_4[VAR_7] = VAR_10;
 }
}
