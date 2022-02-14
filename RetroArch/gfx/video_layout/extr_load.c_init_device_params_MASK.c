
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int scope_t ;


 size_t FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ) ;
 int * VAR_0 ;

__attribute__((used)) static void FUNC_2(scope_t *VAR_1)
{
   size_t VAR_2;

   for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2 += 2)
   {
      FUNC_1(VAR_1, VAR_0[VAR_2], VAR_0[VAR_2 + 1]);
   }
}
