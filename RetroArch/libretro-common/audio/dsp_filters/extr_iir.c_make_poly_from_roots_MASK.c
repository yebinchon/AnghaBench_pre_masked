
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (float*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_1(
      const double *VAR_0, unsigned VAR_1, float *VAR_2)
{
   unsigned VAR_3, VAR_4;

   VAR_2[0] = 1;
   VAR_2[1] = -VAR_0[0];
   FUNC_0(VAR_2 + 2, 0, (VAR_1 + 1 - 2) * sizeof(*VAR_2));

   for (VAR_3 = 1; VAR_3 < VAR_1; VAR_3++)
      for (VAR_4 = VAR_1; VAR_4 > 0; VAR_4--)
         VAR_2[VAR_4] -= VAR_2[VAR_4 - 1] * VAR_0[VAR_3];
}
