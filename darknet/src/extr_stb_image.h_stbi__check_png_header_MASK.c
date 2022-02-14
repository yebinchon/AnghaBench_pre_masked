
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stbi_uc ;
typedef int stbi__context ;


 int FUNC_0 (char*,char*) ;
 int const FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(stbi__context *VAR_0)
{
   static const stbi_uc VAR_1[8] = { 137,80,78,71,13,10,26,10 };
   int VAR_2;
   for (VAR_2=0; VAR_2 < 8; ++VAR_2)
      if (FUNC_1(VAR_0) != VAR_1[VAR_2]) return FUNC_0("bad png sig","Not a PNG");
   return 1;
}
