
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stbi_uc ;



__attribute__((used)) static stbi_uc FUNC_0(stbi_uc VAR_0, stbi_uc VAR_1)
{
   unsigned int VAR_2 = VAR_0*VAR_1 + 128;
   return (stbi_uc) ((VAR_2 + (VAR_2 >>8)) >> 8);
}
