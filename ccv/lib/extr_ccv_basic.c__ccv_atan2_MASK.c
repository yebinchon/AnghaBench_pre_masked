
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __m128 ;


 double VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (float*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (float) ;
 int FUNC_11 () ;
 int FUNC_12 (int ) ;
 int FUNC_13 (float*,int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,int ) ;
 float FUNC_16 (float) ;

__attribute__((used)) static void FUNC_17(float* VAR_1, float* VAR_2, float* VAR_3, float* VAR_4, int VAR_5)
{
 int VAR_6 = 0;
 float VAR_7 = (float)(180.0 / VAR_0);
 for(; VAR_6 < VAR_5; VAR_6++)
 {
  float VAR_8 = VAR_1[VAR_6], VAR_9 = VAR_2[VAR_6];
  float VAR_10, VAR_11 = VAR_8 * VAR_8, VAR_12 = VAR_9 * VAR_9;
  if(VAR_12 <= VAR_11)
   VAR_10 = VAR_8 * VAR_9 / (VAR_11 + 0.28f * VAR_12 + (float)1e-6) + (float)(VAR_8 < 0 ? VAR_0 : VAR_9 >= 0 ? 0 : VAR_0 * 2);
  else
   VAR_10 = (float)(VAR_9 >= 0 ? VAR_0 * 0.5 : VAR_0 * 1.5) - VAR_8 * VAR_9 / (VAR_12 + 0.28f * VAR_11 + (float)1e-6);
  VAR_3[VAR_6] = VAR_10 * VAR_7;
  VAR_4[VAR_6] = FUNC_16(VAR_11 + VAR_12);
 }
}
