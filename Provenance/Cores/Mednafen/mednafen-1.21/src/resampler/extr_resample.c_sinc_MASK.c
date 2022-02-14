
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct FuncDef {int dummy; } ;
typedef float spx_word16_t ;


 float VAR_0 ;
 float FUNC_0 (double,struct FuncDef*) ;
 double FUNC_1 (int) ;
 float FUNC_2 (float) ;

__attribute__((used)) static spx_word16_t FUNC_3(float VAR_1, float VAR_2, int VAR_3, struct FuncDef *VAR_4)
{

   float VAR_5 = VAR_2 * VAR_1;
   if (FUNC_1(VAR_2)<1e-6)
      return VAR_1;
   else if (FUNC_1(VAR_2) > .5*VAR_3)
      return 0;

   return VAR_1*FUNC_2(VAR_0*VAR_5)/(VAR_0*VAR_5) * FUNC_0(FUNC_1(2.*VAR_2/VAR_3), VAR_4);
}
