
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct FuncDef {float oversample; double* table; } ;


 scalar_t__ FUNC_0 (float) ;

__attribute__((used)) static double FUNC_1(float VAR_0, struct FuncDef *VAR_1)
{
   float VAR_2, VAR_3;
   double VAR_4[4];
   int VAR_5;
   VAR_2 = VAR_0*VAR_1->oversample;
   VAR_5 = (int)FUNC_0(VAR_2);
   VAR_3 = (VAR_2-VAR_5);

   VAR_4[3] = -0.1666666667*VAR_3 + 0.1666666667*(VAR_3*VAR_3*VAR_3);
   VAR_4[2] = VAR_3 + 0.5*(VAR_3*VAR_3) - 0.5*(VAR_3*VAR_3*VAR_3);

   VAR_4[0] = -0.3333333333*VAR_3 + 0.5*(VAR_3*VAR_3) - 0.1666666667*(VAR_3*VAR_3*VAR_3);

   VAR_4[1] = 1.f-VAR_4[3]-VAR_4[2]-VAR_4[0];


   return VAR_4[0]*VAR_1->table[VAR_5] + VAR_4[1]*VAR_1->table[VAR_5+1] + VAR_4[2]*VAR_1->table[VAR_5+2] + VAR_4[3]*VAR_1->table[VAR_5+3];
}
