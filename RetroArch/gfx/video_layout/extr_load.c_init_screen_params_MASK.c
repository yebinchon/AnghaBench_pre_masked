
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int scope_t ;


 size_t FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (char*,int ) ;
 int * VAR_0 ;

__attribute__((used)) static void FUNC_3(scope_t *VAR_1, int VAR_2)
{
   char VAR_3[64];
   size_t VAR_4;

   for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4 += 2)
   {
      FUNC_2(VAR_3, VAR_0[VAR_4 + 1]);
      VAR_3[3] = '0' + VAR_2;

      FUNC_1(VAR_1, VAR_0[VAR_4], VAR_3);
   }
}
