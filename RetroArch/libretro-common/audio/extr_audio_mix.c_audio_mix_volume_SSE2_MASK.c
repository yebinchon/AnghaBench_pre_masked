
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __m128 ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (float const*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (float) ;
 int FUNC_4 (float*,int ) ;
 int FUNC_5 (float*,float const*,float,size_t) ;

void FUNC_6(float *VAR_0, const float *VAR_1, float VAR_2, size_t VAR_3)
{
   size_t VAR_4;
   __m128 VAR_5 = FUNC_3(VAR_2);

   for (VAR_4 = 0; VAR_4 + 16 <= VAR_3; VAR_4 += 16, VAR_0 += 16, VAR_1 += 16)
   {
      unsigned VAR_6;
      __m128 VAR_7[4];
      __m128 VAR_8[4];

      VAR_7[0] = FUNC_1(VAR_0 + 0);
      VAR_7[1] = FUNC_1(VAR_0 + 4);
      VAR_7[2] = FUNC_1(VAR_0 + 8);
      VAR_7[3] = FUNC_1(VAR_0 + 12);

      VAR_8[0] = FUNC_2(VAR_5, FUNC_1(VAR_1 + 0));
      VAR_8[1] = FUNC_2(VAR_5, FUNC_1(VAR_1 + 4));
      VAR_8[2] = FUNC_2(VAR_5, FUNC_1(VAR_1 + 8));
      VAR_8[3] = FUNC_2(VAR_5, FUNC_1(VAR_1 + 12));

      for (VAR_6 = 0; VAR_6 < 4; VAR_6++)
         FUNC_4(VAR_0 + 4 * VAR_6, FUNC_0(VAR_7[VAR_6], VAR_8[VAR_6]));
   }

   FUNC_5(VAR_0, VAR_1, VAR_2, VAR_3 - VAR_4);
}
