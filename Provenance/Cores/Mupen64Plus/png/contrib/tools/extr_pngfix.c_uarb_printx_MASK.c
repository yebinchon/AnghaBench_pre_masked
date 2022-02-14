
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__* uarb ;
typedef int FILE ;


 int FUNC_0 (int *,char*,scalar_t__) ;
 int FUNC_1 (char*,int *) ;

__attribute__((used)) static void
FUNC_2(uarb VAR_0, int VAR_1, FILE *VAR_2)

{
   while (VAR_1 > 0)
      if (VAR_0[--VAR_1] > 0)
      {
         FUNC_0(VAR_2, "0x%x", VAR_0[VAR_1]);

         while (VAR_1 > 0)
            FUNC_0(VAR_2, "%.4x", VAR_0[--VAR_1]);
      }

      else if (VAR_1 == 0)
         FUNC_1("0x0", VAR_2);
}
