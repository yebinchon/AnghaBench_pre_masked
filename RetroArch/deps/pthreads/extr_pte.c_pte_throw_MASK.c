
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int start_mark; int exitStatus; scalar_t__ implicit; } ;
typedef TYPE_1__ pte_thread_t ;




 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ) ;

void FUNC_6 (unsigned int VAR_2)
{




   pte_thread_t * VAR_3 = (pte_thread_t *) FUNC_5 (VAR_1);



   if (VAR_2 != 129 && VAR_2 != 128)
      FUNC_0 (1);

   if (((void*)0) == VAR_3 || VAR_3->implicit)
   {






      unsigned VAR_4 = 0;

      switch (VAR_2)
      {
         case 129:
            VAR_4 = (unsigned) VAR_0;
            break;
         case 128:
            VAR_4 = (unsigned) VAR_3->exitStatus;;
            break;
      }

      FUNC_4 ();




   }

   FUNC_3 (1);
   FUNC_1 (VAR_3->start_mark, VAR_2);


}
