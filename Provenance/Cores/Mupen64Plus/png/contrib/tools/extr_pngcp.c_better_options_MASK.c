
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct display {unsigned int csp; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct display const*,unsigned int) ;

__attribute__((used)) static int
FUNC_2(const struct display *VAR_0)
{
   unsigned int VAR_1;

   for (VAR_1=0; VAR_1<VAR_0->csp; ++VAR_1)
   {
      int VAR_2 = FUNC_1(VAR_0, VAR_1);

      if (VAR_2 < 0)
         return 0;

      else if (VAR_2 > 0)
         return 1;
   }

   FUNC_0(0 && "unreached");
}
