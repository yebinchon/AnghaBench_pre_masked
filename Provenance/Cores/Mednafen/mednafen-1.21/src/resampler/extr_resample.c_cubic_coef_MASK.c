
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float spx_word16_t ;



__attribute__((used)) static void FUNC_0(spx_word16_t VAR_0, spx_word16_t VAR_1[4])
{


   VAR_1[0] = -0.16667f*VAR_0 + 0.16667f*VAR_0*VAR_0*VAR_0;
   VAR_1[1] = VAR_0 + 0.5f*VAR_0*VAR_0 - 0.5f*VAR_0*VAR_0*VAR_0;

   VAR_1[3] = -0.33333f*VAR_0 + 0.5f*VAR_0*VAR_0 - 0.16667f*VAR_0*VAR_0*VAR_0;

   VAR_1[2] = 1.-VAR_1[0]-VAR_1[1]-VAR_1[3];
}
