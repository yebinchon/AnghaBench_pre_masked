
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* sy; int* sx; int* dy; int* dx; } ;
typedef TYPE_1__ ccv_scd_stump_feature_t ;


 int VAR_0 ;
 float FUNC_0 (float,float,float) ;
 int FUNC_1 (float) ;

__attribute__((used)) static inline void FUNC_2(float* VAR_1, int VAR_2, ccv_scd_stump_feature_t* VAR_3, float VAR_4[32])
{
 int VAR_5, VAR_6;

 for (VAR_5 = 0; VAR_5 < 4; VAR_5++)
 {
  float* VAR_7 = VAR_1 + (VAR_2 * VAR_3->sy[VAR_5] + VAR_3->sx[VAR_5]) * VAR_0;
  float* VAR_8 = VAR_1 + (VAR_2 * VAR_3->dy[VAR_5] + VAR_3->sx[VAR_5]) * VAR_0;
  float* VAR_9 = VAR_1 + (VAR_2 * VAR_3->sy[VAR_5] + VAR_3->dx[VAR_5]) * VAR_0;
  float* VAR_10 = VAR_1 + (VAR_2 * VAR_3->dy[VAR_5] + VAR_3->dx[VAR_5]) * VAR_0;
  for (VAR_6 = 0; VAR_6 < 8; VAR_6++)
   VAR_4[VAR_5 * 8 + VAR_6] = VAR_10[VAR_6] - VAR_8[VAR_6] + VAR_7[VAR_6] - VAR_9[VAR_6];
 }

 float VAR_11 = 0;
 for (VAR_5 = 0; VAR_5 < 32; VAR_5++)
  VAR_11 += VAR_4[VAR_5] * VAR_4[VAR_5];
 VAR_11 = 1.0 / (FUNC_1(VAR_11) + 1e-6);
 static float VAR_12 = 2.0 / 5.65685424949;
 float VAR_13 = 0;
 for (VAR_5 = 0; VAR_5 < 32; VAR_5++)
 {
  VAR_4[VAR_5] = VAR_4[VAR_5] * VAR_11;
  VAR_4[VAR_5] = FUNC_0(VAR_4[VAR_5], -VAR_12, VAR_12);
  VAR_13 += VAR_4[VAR_5] * VAR_4[VAR_5];
 }
 VAR_13 = 1.0 / (FUNC_1(VAR_13) + 1e-6);
 for (VAR_5 = 0; VAR_5 < 32; VAR_5++)
  VAR_4[VAR_5] = VAR_4[VAR_5] * VAR_13;
}
