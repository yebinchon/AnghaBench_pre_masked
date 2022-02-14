
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_16__ {struct TYPE_16__* next; struct TYPE_16__* prev; } ;
struct TYPE_15__ {TYPE_2__* first; int length; } ;
typedef TYPE_1__ MMAL_LIST_T ;
typedef TYPE_2__ MMAL_LIST_ELEMENT_T ;
typedef scalar_t__ (* MMAL_LIST_COMPARE_T ) (TYPE_2__*,TYPE_2__*) ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*) ;

void FUNC_4(MMAL_LIST_T *VAR_0, MMAL_LIST_ELEMENT_T *VAR_1, MMAL_LIST_COMPARE_T VAR_2)
{
   MMAL_LIST_ELEMENT_T *VAR_3;

   FUNC_0(VAR_0);

   if (VAR_0->first == ((void*)0))
   {

      FUNC_3(VAR_0);
      FUNC_2(VAR_0, VAR_1);
      return;
   }

   VAR_3 = VAR_0->first;
   while (VAR_3)
   {
      if (VAR_2(VAR_1, VAR_3))
      {

         VAR_0->length++;
         if (VAR_3 == VAR_0->first)
            VAR_0->first = VAR_1;
         else
            VAR_3->prev->next = VAR_1;
         VAR_1->prev = VAR_3->prev;
         VAR_1->next = VAR_3;
         VAR_3->prev = VAR_1;
         FUNC_3(VAR_0);
         return;
      }

      VAR_3 = VAR_3->next;
   }



   FUNC_3(VAR_0);
   FUNC_1(VAR_0, VAR_1);
}
