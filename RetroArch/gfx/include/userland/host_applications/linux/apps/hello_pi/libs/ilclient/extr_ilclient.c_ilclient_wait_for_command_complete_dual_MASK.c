
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int VCOS_UNSIGNED ;
struct TYPE_9__ {TYPE_1__* event_list; } ;
struct TYPE_8__ {struct TYPE_8__* related; int event; TYPE_5__* client; TYPE_1__* list; } ;
struct TYPE_7__ {int eEvent; int nData1; int nData2; struct TYPE_7__* next; } ;
typedef int OMX_U32 ;
typedef int OMX_COMMANDTYPE ;
typedef TYPE_1__ ILEVENT_T ;
typedef TYPE_2__ COMPONENT_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (int *,int,int ,int ,int *) ;

int FUNC_3(COMPONENT_T *VAR_9, OMX_COMMANDTYPE VAR_10, OMX_U32 VAR_11, COMPONENT_T *VAR_12)
{
   OMX_U32 VAR_13 = VAR_0;
   int VAR_14 = 0;

   switch(VAR_10) {
   case 128: VAR_13 |= VAR_3; break;
   case 130: VAR_13 |= VAR_1; break;
   case 129: VAR_13 |= VAR_2; break;
   default: return -1;
   }

   if(VAR_12)
      VAR_12->related = VAR_9;

   while(1)
   {
      ILEVENT_T *VAR_15, *VAR_16 = ((void*)0);
      VCOS_UNSIGNED VAR_17;

      FUNC_0(VAR_9->client);

      VAR_15 = VAR_9->list;
      while(VAR_15 &&
            !(VAR_15->eEvent == VAR_5 && VAR_15->nData1 == VAR_10 && VAR_15->nData2 == VAR_11) &&
            !(VAR_15->eEvent == VAR_6 && VAR_15->nData2 == 1))
      {
         VAR_16 = VAR_15;
         VAR_15 = VAR_15->next;
      }

      if(VAR_15)
      {
         if(VAR_16 == ((void*)0))
            VAR_9->list = VAR_15->next;
         else
            VAR_16->next = VAR_15->next;


         VAR_14 = VAR_15->eEvent == VAR_5 || VAR_15->nData1 == VAR_4 ? 0 : -1;

         if(VAR_15->eEvent == VAR_6)
            FUNC_2(&VAR_9->event, VAR_0, VAR_7, 0, &VAR_17);


         VAR_15->next = VAR_9->client->event_list;
         VAR_9->client->event_list = VAR_15;
         VAR_15->eEvent = -1;

         FUNC_1(VAR_9->client);
         break;
      }
      else if(VAR_12 != ((void*)0))
      {

         VAR_15 = VAR_12->list;
         while(VAR_15 && !(VAR_15->eEvent == VAR_6 && VAR_15->nData2 == 1))
            VAR_15 = VAR_15->next;

         if(VAR_15)
         {




            VAR_14 = -2;
            FUNC_1(VAR_9->client);
            break;
         }
      }

      FUNC_1(VAR_9->client);

      FUNC_2(&VAR_9->event, VAR_13, VAR_7, VAR_8, &VAR_17);
   }

   if(VAR_12)
      VAR_12->related = ((void*)0);

   return VAR_14;
}
