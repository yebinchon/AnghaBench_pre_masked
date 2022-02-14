
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* next; } ;
struct TYPE_6__ {int lock; int length; TYPE_2__* first; TYPE_2__** last; } ;
typedef TYPE_1__ MMAL_QUEUE_T ;
typedef TYPE_2__ MMAL_BUFFER_HEADER_T ;


 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static MMAL_BUFFER_HEADER_T *FUNC_4(MMAL_QUEUE_T *VAR_0)
{
   MMAL_BUFFER_HEADER_T * VAR_1;

   FUNC_2(&VAR_0->lock);
   FUNC_0(VAR_0, ((void*)0));
   VAR_1 = VAR_0->first;
   FUNC_1(VAR_1 != ((void*)0));

   VAR_0->first = VAR_1->next;
   if(!VAR_0->first) VAR_0->last = &VAR_0->first;

   VAR_0->length--;
   FUNC_3(&VAR_0->lock);

   return VAR_1;
}
