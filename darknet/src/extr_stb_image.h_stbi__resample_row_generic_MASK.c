
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stbi_uc ;


 int FUNC_0 (int *) ;

__attribute__((used)) static stbi_uc *FUNC_1(stbi_uc *VAR_0, stbi_uc *VAR_1, stbi_uc *VAR_2, int VAR_3, int VAR_4)
{

   int VAR_5,VAR_6;
   FUNC_0(VAR_2);
   for (VAR_5=0; VAR_5 < VAR_3; ++VAR_5)
      for (VAR_6=0; VAR_6 < VAR_4; ++VAR_6)
         VAR_0[VAR_5*VAR_4+VAR_6] = VAR_1[VAR_5];
   return VAR_0;
}
