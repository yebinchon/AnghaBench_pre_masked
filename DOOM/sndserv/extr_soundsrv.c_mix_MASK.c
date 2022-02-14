
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__** VAR_1 ;
 scalar_t__** VAR_2 ;
 unsigned int** VAR_3 ;
 unsigned int** VAR_4 ;
 scalar_t__* VAR_5 ;
 int* VAR_6 ;
 short* VAR_7 ;

int FUNC_0(void)
{

    register int VAR_8;
    register int VAR_9;
    register unsigned int VAR_10;

    signed short* VAR_11;
    signed short* VAR_12;
    signed short* VAR_13;

    int VAR_14;

    VAR_11 = VAR_7;
    VAR_12 = VAR_7+1;
    VAR_14 = 2;

    VAR_13 = VAR_7 + VAR_0*VAR_14;


    while (VAR_11 != VAR_13)
    {

 VAR_8 = 0;
 VAR_9 = 0;

 if (VAR_3[0])
 {
     VAR_10 = *VAR_3[0];
     VAR_8 += VAR_1[0][VAR_10];
     VAR_9 += VAR_2[0][VAR_10];
     VAR_6[0] += VAR_5[0];
     VAR_3[0] += VAR_6[0] >> 16;
     VAR_6[0] &= 65536-1;

     if (VAR_3[0] >= VAR_4[0])
  VAR_3[0] = 0;
 }

 if (VAR_3[1])
 {
     VAR_10 = *VAR_3[1];
     VAR_8 += VAR_1[1][VAR_10];
     VAR_9 += VAR_2[1][VAR_10];
     VAR_6[1] += VAR_5[1];
     VAR_3[1] += VAR_6[1] >> 16;
     VAR_6[1] &= 65536-1;

     if (VAR_3[1] >= VAR_4[1])
  VAR_3[1] = 0;
 }

 if (VAR_3[2])
 {
     VAR_10 = *VAR_3[2];
     VAR_8 += VAR_1[2][VAR_10];
     VAR_9 += VAR_2[2][VAR_10];
     VAR_6[2] += VAR_5[2];
     VAR_3[2] += VAR_6[2] >> 16;
     VAR_6[2] &= 65536-1;

     if (VAR_3[2] >= VAR_4[2])
  VAR_3[2] = 0;
 }

 if (VAR_3[3])
 {
     VAR_10 = *VAR_3[3];
     VAR_8 += VAR_1[3][VAR_10];
     VAR_9 += VAR_2[3][VAR_10];
     VAR_6[3] += VAR_5[3];
     VAR_3[3] += VAR_6[3] >> 16;
     VAR_6[3] &= 65536-1;

     if (VAR_3[3] >= VAR_4[3])
  VAR_3[3] = 0;
 }

 if (VAR_3[4])
 {
     VAR_10 = *VAR_3[4];
     VAR_8 += VAR_1[4][VAR_10];
     VAR_9 += VAR_2[4][VAR_10];
     VAR_6[4] += VAR_5[4];
     VAR_3[4] += VAR_6[4] >> 16;
     VAR_6[4] &= 65536-1;

     if (VAR_3[4] >= VAR_4[4])
  VAR_3[4] = 0;
 }

 if (VAR_3[5])
 {
     VAR_10 = *VAR_3[5];
     VAR_8 += VAR_1[5][VAR_10];
     VAR_9 += VAR_2[5][VAR_10];
     VAR_6[5] += VAR_5[5];
     VAR_3[5] += VAR_6[5] >> 16;
     VAR_6[5] &= 65536-1;

     if (VAR_3[5] >= VAR_4[5])
  VAR_3[5] = 0;
 }

 if (VAR_3[6])
 {
     VAR_10 = *VAR_3[6];
     VAR_8 += VAR_1[6][VAR_10];
     VAR_9 += VAR_2[6][VAR_10];
     VAR_6[6] += VAR_5[6];
     VAR_3[6] += VAR_6[6] >> 16;
     VAR_6[6] &= 65536-1;

     if (VAR_3[6] >= VAR_4[6])
  VAR_3[6] = 0;
 }
 if (VAR_3[7])
 {
     VAR_10 = *VAR_3[7];
     VAR_8 += VAR_1[7][VAR_10];
     VAR_9 += VAR_2[7][VAR_10];
     VAR_6[7] += VAR_5[7];
     VAR_3[7] += VAR_6[7] >> 16;
     VAR_6[7] &= 65536-1;

     if (VAR_3[7] >= VAR_4[7])
  VAR_3[7] = 0;
 }
 if (VAR_8 > 0x7fff)
     *VAR_11 = 0x7fff;
 else if (VAR_8 < -0x8000)
     *VAR_11 = -0x8000;
 else
     *VAR_11 = VAR_8;

 if (VAR_9 > 0x7fff)
     *VAR_12 = 0x7fff;
 else if (VAR_9 < -0x8000)
     *VAR_12 = -0x8000;
 else
     *VAR_12 = VAR_9;

 VAR_11 += VAR_14;
 VAR_12 += VAR_14;

    }
    return 1;
}
