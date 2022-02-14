
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int udigit ;
typedef unsigned long* uarb ;
typedef int FILE ;


 int FUNC_0 (int *,char*,unsigned long) ;
 int FUNC_1 (unsigned long*,int,int *) ;

__attribute__((used)) static void
FUNC_2(uarb VAR_0, int VAR_1, FILE *VAR_2)
{
   if (VAR_1 * sizeof (udigit) > sizeof (unsigned long))
      FUNC_1(VAR_0, VAR_1, VAR_2);

   else
   {
      unsigned long VAR_3 = 0;

      while (VAR_1 > 0)
         VAR_3 = (VAR_3 << 16) + VAR_0[--VAR_1];

      FUNC_0(VAR_2, "%lu", VAR_3);
   }
}
