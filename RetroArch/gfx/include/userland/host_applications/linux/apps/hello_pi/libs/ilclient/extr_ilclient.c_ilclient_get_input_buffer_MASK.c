
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int VCOS_UNSIGNED ;
struct TYPE_6__ {int event; int sema; TYPE_1__* in_list; } ;
struct TYPE_5__ {int nInputPortIndex; struct TYPE_5__* pAppPrivate; } ;
typedef TYPE_1__ OMX_BUFFERHEADERTYPE ;
typedef TYPE_2__ COMPONENT_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

OMX_BUFFERHEADERTYPE *FUNC_3(COMPONENT_T *VAR_2, int VAR_3, int VAR_4)
{
   OMX_BUFFERHEADERTYPE *VAR_5 = ((void*)0), *VAR_6 = ((void*)0);

   do {
      VCOS_UNSIGNED VAR_7;

      FUNC_2(&VAR_2->sema);
      VAR_5 = VAR_2->in_list;
      while(VAR_5 != ((void*)0) && VAR_5->nInputPortIndex != VAR_3)
      {
         VAR_6 = VAR_5;
         VAR_5 = VAR_5->pAppPrivate;
      }

      if(VAR_5)
      {
         if(VAR_6 == ((void*)0))
            VAR_2->in_list = VAR_5->pAppPrivate;
         else
            VAR_6->pAppPrivate = VAR_5->pAppPrivate;

         VAR_5->pAppPrivate = ((void*)0);
      }
      FUNC_1(&VAR_2->sema);

      if(VAR_4 && !VAR_5)
         FUNC_0(&VAR_2->event, VAR_0, VAR_1, -1, &VAR_7);

   } while(VAR_4 && !VAR_5);

   return VAR_5;
}
