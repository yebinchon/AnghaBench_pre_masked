
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double FUNC_0 (double) ;

__attribute__((used)) static unsigned int
FUNC_1(double VAR_0, unsigned int VAR_1)
{
   VAR_0 = FUNC_0(VAR_0 * VAR_1 + .5);


   if (!(VAR_0 > 0))
      VAR_0 = 0;
   else if (VAR_0 > VAR_1)
      VAR_0 = VAR_1;

   return (unsigned int)VAR_0;
}
