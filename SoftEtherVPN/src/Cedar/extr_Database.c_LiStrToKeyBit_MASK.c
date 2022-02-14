
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int UCHAR ;


 char* FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int*,int) ;
 scalar_t__* VAR_1 ;

bool FUNC_6(UCHAR *VAR_2, char *VAR_3)
{
 UINT VAR_4[36];
 UINT VAR_5, VAR_6;
 char *VAR_7;

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return 0;
 }

 VAR_7 = FUNC_0(VAR_3);
 FUNC_4(VAR_7);

 VAR_6 = 0;
 if (FUNC_2(VAR_7) != 41)
 {
  FUNC_1(VAR_7);
  return 0;
 }

 for (VAR_5 = 0;VAR_5 < 36;VAR_5++)
 {
  char VAR_8 = VAR_7[VAR_6++];
  UINT VAR_9;

  if (((VAR_5 % 6) == 5) && (VAR_5 != 35))
  {
   if (VAR_7[VAR_6++] != '-')
   {
    FUNC_1(VAR_7);
    return 0;
   }
  }

  VAR_4[VAR_5] = VAR_0;
  for (VAR_9 = 0;VAR_9 < 32;VAR_9++)
  {
   if (FUNC_3(VAR_8) == VAR_1[VAR_9])
   {
    VAR_4[VAR_5] = VAR_9;
   }
  }

  if (VAR_4[VAR_5] == VAR_0)
  {
   FUNC_1(VAR_7);
   return 0;
  }
 }

 FUNC_5(VAR_2, 23);

 VAR_2[0] = VAR_4[0] << 1 | VAR_4[1] >> 4;
 VAR_2[1] = VAR_4[1] << 4 | VAR_4[2] >> 1;
 VAR_2[2] = VAR_4[2] << 7 | VAR_4[3] << 2 | VAR_4[4] >> 3;
 VAR_2[3] = VAR_4[4] << 5 | VAR_4[5];

 VAR_2[4] = VAR_4[6] << 3 | VAR_4[7] >> 2;
 VAR_2[5] = VAR_4[7] << 6 | VAR_4[8] << 1 | VAR_4[9] >> 4;
 VAR_2[6] = VAR_4[9] << 4 | VAR_4[10] >> 1;
 VAR_2[7] = VAR_4[10] << 7 | VAR_4[11] << 2 | VAR_4[12] >> 3;
 VAR_2[8] = VAR_4[12] << 5 | VAR_4[13];

 VAR_2[9] = VAR_4[14] << 3 | VAR_4[15] >> 2;
 VAR_2[10] = VAR_4[15] << 6 | VAR_4[16] << 1 | VAR_4[17] >> 4;
 VAR_2[11] = VAR_4[17] << 4 | VAR_4[18] >> 1;
 VAR_2[12] = VAR_4[18] << 7 | VAR_4[19] << 2 | VAR_4[20] >> 3;
 VAR_2[13] = VAR_4[20] << 5 | VAR_4[21];

 VAR_2[14] = VAR_4[22] << 3 | VAR_4[23] >> 2;
 VAR_2[15] = VAR_4[23] << 6 | VAR_4[24] << 1 | VAR_4[25] >> 4;
 VAR_2[16] = VAR_4[25] << 4 | VAR_4[26] >> 1;
 VAR_2[17] = VAR_4[26] << 7 | VAR_4[27] << 2 | VAR_4[28] >> 3;
 VAR_2[18] = VAR_4[28] << 5 | VAR_4[29];

 VAR_2[19] = VAR_4[30] << 3 | VAR_4[31] >> 2;
 VAR_2[20] = VAR_4[31] << 6 | VAR_4[32] << 1 | VAR_4[33] >> 4;
 VAR_2[21] = VAR_4[33] << 4 | VAR_4[34] >> 1;
 VAR_2[22] = VAR_4[34] << 7 | VAR_4[35] << 2;

 FUNC_1(VAR_7);

 return 1;
}
