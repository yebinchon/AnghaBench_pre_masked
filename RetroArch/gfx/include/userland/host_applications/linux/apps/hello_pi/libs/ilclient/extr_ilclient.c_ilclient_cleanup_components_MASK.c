
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int sema; int event; scalar_t__ comp; } ;
typedef scalar_t__ OMX_ERRORTYPE ;
typedef TYPE_1__ COMPONENT_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *) ;

void FUNC_6(COMPONENT_T *VAR_1[])
{
   int VAR_2;
   OMX_ERRORTYPE VAR_3;

   VAR_2=0;
   while (VAR_1[VAR_2])
   {
      FUNC_1(VAR_1[VAR_2]);
      if (VAR_1[VAR_2]->comp)
      {
         VAR_3 = FUNC_0(VAR_1[VAR_2]->comp);

         FUNC_2(VAR_3 == VAR_0);
      }
      VAR_2++;
   }

   VAR_2=0;
   while (VAR_1[VAR_2])
   {
      FUNC_3(&VAR_1[VAR_2]->event);
      FUNC_5(&VAR_1[VAR_2]->sema);
      FUNC_4(VAR_1[VAR_2]);
      VAR_1[VAR_2] = ((void*)0);
      VAR_2++;
   }
}
