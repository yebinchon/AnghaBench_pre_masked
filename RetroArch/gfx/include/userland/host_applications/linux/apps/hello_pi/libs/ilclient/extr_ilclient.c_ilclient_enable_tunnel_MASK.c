
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int comp; } ;
struct TYPE_8__ {int sink_port; TYPE_2__* sink; int source_port; TYPE_2__* source; } ;
typedef TYPE_1__ TUNNEL_T ;
typedef scalar_t__ OMX_STATETYPE ;
typedef scalar_t__ OMX_ERRORTYPE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,scalar_t__*) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int *) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int ,int ) ;
 int FUNC_5 (TYPE_2__*,int ,int ,TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,int ,int ,int ,int ,int ,int,int ) ;
 int FUNC_7 (int) ;

int FUNC_8(TUNNEL_T *VAR_9)
{
   OMX_STATETYPE VAR_10;
   OMX_ERRORTYPE VAR_11;

   FUNC_2("ilclient: enable tunnel from %x/%d to %x/%d",
                         VAR_9->source, VAR_9->source_port,
                         VAR_9->sink, VAR_9->sink_port);

   VAR_11 = FUNC_1(VAR_9->source->comp, VAR_2, VAR_9->source_port, ((void*)0));
   FUNC_7(VAR_11 == VAR_4);

   VAR_11 = FUNC_1(VAR_9->sink->comp, VAR_2, VAR_9->sink_port, ((void*)0));
   FUNC_7(VAR_11 == VAR_4);


   VAR_11 = FUNC_0(VAR_9->sink->comp, &VAR_10);
   FUNC_7(VAR_11 == VAR_4);
   if (VAR_10 == VAR_7)
   {
      int VAR_12 = 0;

      if(FUNC_4(VAR_9->sink, VAR_2, VAR_9->sink_port) != 0 ||
         FUNC_1(VAR_9->sink->comp, VAR_3, VAR_6, ((void*)0)) != VAR_4 ||
         (VAR_12 = FUNC_5(VAR_9->sink, VAR_3, VAR_6, VAR_9->source)) < 0)
      {
         if(VAR_12 == -2)
         {

            FUNC_4(VAR_9->source, VAR_2, VAR_9->source_port);
            FUNC_3(VAR_9->sink, VAR_9->sink_port);
         }

         FUNC_2("ilclient: could not change component state to IDLE");
         FUNC_3(VAR_9->source, VAR_9->source_port);
         return -1;
      }
   }
   else
   {
      if (FUNC_4(VAR_9->sink, VAR_2, VAR_9->sink_port) != 0)
      {
         FUNC_2("ilclient: could not change sink port %d to enabled", VAR_9->sink_port);


         FUNC_3(VAR_9->source, VAR_9->source_port);

         FUNC_6(VAR_9->source, VAR_5,
                                 VAR_2, 0, VAR_9->source_port, 0,
                                 VAR_1 | VAR_0, VAR_8);
         return -1;
      }
   }

   if(FUNC_4(VAR_9->source, VAR_2, VAR_9->source_port) != 0)
   {
      FUNC_2("ilclient: could not change source port %d to enabled", VAR_9->source_port);


      FUNC_3(VAR_9->sink, VAR_9->sink_port);
      return -1;
   }

   return 0;
}
