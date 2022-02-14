
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int private; int error_mask; int comp; int event; } ;
typedef scalar_t__ OMX_STATETYPE ;
typedef scalar_t__ OMX_ERRORTYPE ;
typedef TYPE_1__ COMPONENT_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ,scalar_t__,int *) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ,scalar_t__) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,int ,int ,int ,int *) ;

void FUNC_6(COMPONENT_T *VAR_6[], OMX_STATETYPE VAR_7)
{
   OMX_ERRORTYPE VAR_8;
   int VAR_9, VAR_10;
   uint32_t VAR_11;

   VAR_10=0;
   while (VAR_6[VAR_10])
      VAR_10++;




   if (VAR_7 == VAR_4)
      for (VAR_9=0; VAR_9<VAR_10; VAR_9++)
         VAR_6[VAR_9]->error_mask |= VAR_0;
   for (VAR_9=0; VAR_9<VAR_10; VAR_9++)
      VAR_6[VAR_9]->private = ((FUNC_2() >> 13) & 0xff)+1;

   for (VAR_9=0; VAR_9<VAR_10; VAR_9++)
   {

      int VAR_12, VAR_13 = -1;
      for (VAR_12=0; VAR_12<VAR_10; VAR_12++)
         if (VAR_6[VAR_12]->private && (VAR_13 == -1 || VAR_6[VAR_13]->private > VAR_6[VAR_12]->private))
            VAR_13 = VAR_12;

      VAR_6[VAR_13]->private = 0;

      FUNC_3();

      FUNC_5(&VAR_6[VAR_13]->event, VAR_1, VAR_5, 0, &VAR_11);

      VAR_8 = FUNC_0(VAR_6[VAR_13]->comp, VAR_2, VAR_7, ((void*)0));
      FUNC_4(VAR_8 == VAR_3);
   }

   FUNC_3();

   for (VAR_9=0; VAR_9<VAR_10; VAR_9++)
      if(FUNC_1(VAR_6[VAR_9], VAR_2, VAR_7) < 0)
         FUNC_4(0);

   if (VAR_7 == VAR_4)
      for (VAR_9=0; VAR_9<VAR_10; VAR_9++)
         VAR_6[VAR_9]->error_mask &= ~VAR_0;
}
