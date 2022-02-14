
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int * next; struct TYPE_8__* prev; } ;
struct TYPE_7__ {int * first; TYPE_2__* last; int length; } ;
typedef TYPE_1__ MMAL_LIST_T ;
typedef TYPE_2__ MMAL_LIST_ELEMENT_T ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

MMAL_LIST_ELEMENT_T* FUNC_2(MMAL_LIST_T *VAR_0)
{
   MMAL_LIST_ELEMENT_T *VAR_1;

   FUNC_0(VAR_0);

   VAR_1 = VAR_0->last;
   if (VAR_1 != ((void*)0))
   {
      VAR_0->length--;

      VAR_0->last = VAR_1->prev;
      if (VAR_0->last)
         VAR_0->last->next = ((void*)0);
      else
         VAR_0->first = ((void*)0);

      VAR_1->prev = ((void*)0);
      VAR_1->next = ((void*)0);
   }

   FUNC_1(VAR_0);

   return VAR_1;
}
