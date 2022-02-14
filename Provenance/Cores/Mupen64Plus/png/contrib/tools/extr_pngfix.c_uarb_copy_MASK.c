
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * uarb ;



__attribute__((used)) static int
FUNC_0(uarb VAR_0, uarb VAR_1, int VAR_2)

{
   int VAR_3, VAR_4;

   for (VAR_3=VAR_4=0; VAR_3<VAR_2; ++VAR_3)
      if ((VAR_0[VAR_3] = VAR_1[VAR_3]) != 0)
         VAR_4 = VAR_3+1;

   return VAR_4;
}
