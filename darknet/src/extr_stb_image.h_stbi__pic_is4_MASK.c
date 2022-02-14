
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ stbi_uc ;
typedef int stbi__context ;


 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(stbi__context *VAR_0,const char *VAR_1)
{
   int VAR_2;
   for (VAR_2=0; VAR_2<4; ++VAR_2)
      if (FUNC_0(VAR_0) != (stbi_uc)VAR_1[VAR_2])
         return 0;

   return 1;
}
