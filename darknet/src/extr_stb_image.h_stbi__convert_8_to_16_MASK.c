
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stbi_uc ;
typedef scalar_t__ stbi__uint16 ;


 int FUNC_0 (int*) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static stbi__uint16 *FUNC_3(stbi_uc *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
   int VAR_4;
   int VAR_5 = VAR_1 * VAR_2 * VAR_3;
   stbi__uint16 *VAR_6;

   VAR_6 = (stbi__uint16 *) FUNC_2(VAR_5*2);
   if (VAR_6 == ((void*)0)) return (stbi__uint16 *) FUNC_1("outofmem", "Out of memory");

   for (VAR_4 = 0; VAR_4 < VAR_5; ++VAR_4)
      VAR_6[VAR_4] = (stbi__uint16)((VAR_0[VAR_4] << 8) + VAR_0[VAR_4]);

   FUNC_0(VAR_0);
   return VAR_6;
}
