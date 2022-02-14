
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct display {unsigned int nsp; int best_size; } ;


 int VAR_0 ;
 int FUNC_0 (struct display*) ;

__attribute__((used)) static void
FUNC_1(struct display *VAR_1, unsigned int VAR_2)
{

   if (VAR_1->nsp <= VAR_2)
   {
      FUNC_0(VAR_1);

      VAR_1->best_size = VAR_0;
   }
}
