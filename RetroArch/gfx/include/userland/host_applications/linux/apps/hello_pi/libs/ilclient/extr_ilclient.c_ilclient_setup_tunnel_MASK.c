
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_15__ {int * comp; } ;
struct TYPE_12__ {int nVersion; } ;
struct TYPE_14__ {int nSize; unsigned int nU32; int nPortIndex; TYPE_1__ nVersion; } ;
struct TYPE_13__ {TYPE_4__* source; TYPE_4__* sink; int sink_port; int source_port; } ;
typedef TYPE_2__ TUNNEL_T ;
typedef scalar_t__ OMX_STATETYPE ;
typedef TYPE_3__ OMX_PARAM_U32TYPE ;
typedef scalar_t__ OMX_ERRORTYPE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *,int ,TYPE_3__*) ;
 scalar_t__ FUNC_1 (int *,scalar_t__*) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int *,int ,TYPE_3__*) ;
 scalar_t__ FUNC_3 (int *,int ,int *,int ) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_4 (TYPE_4__*,int ) ;
 int FUNC_5 (char*,scalar_t__,...) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_4__*,int ,int ,int,int ,int) ;
 scalar_t__ FUNC_9 (TYPE_4__*,int ,int ,int ,int,int,int,int) ;
 int FUNC_10 (int) ;

int FUNC_11(TUNNEL_T *VAR_10, unsigned int VAR_11, int VAR_12)
{
   OMX_ERRORTYPE VAR_13;
   OMX_PARAM_U32TYPE VAR_14;
   OMX_STATETYPE VAR_15;
   int32_t VAR_16;
   int VAR_17;


   VAR_13 = FUNC_1(VAR_10->source->comp, &VAR_15);
   FUNC_10(VAR_13 == VAR_2);
   if (VAR_15 == VAR_8 && FUNC_4(VAR_10->source, VAR_7) < 0)
      return -2;


   if(VAR_12)
   {
      VAR_16 = FUNC_9(VAR_10->source, VAR_4,
                                       VAR_10->source_port, 0, -1, 1,
                                       VAR_1 | VAR_0, VAR_12);

      if (VAR_16 < 0)
      {
         FUNC_5(
            "ilclient: timed out waiting for port settings changed on port %d", VAR_10->source_port);
         return VAR_16;
      }
   }


   FUNC_6(VAR_10);



   VAR_14.nSize = sizeof(OMX_PARAM_U32TYPE);
   VAR_14.nVersion.nVersion = VAR_9;
   VAR_14.nPortIndex = VAR_10->source_port;
   if (FUNC_0(VAR_10->source->comp, VAR_6, &VAR_14) == VAR_2)
   {
      if (VAR_14.nU32 == 0)
      {


         return -3;
      }
      if (VAR_14.nU32 <= VAR_11)
      {



         return -4;
      }

      VAR_14.nU32 = VAR_11;
      VAR_13 = FUNC_2(VAR_10->source->comp, VAR_5, &VAR_14);
      FUNC_10(VAR_13 == VAR_2);
   }


   VAR_13 = FUNC_3(VAR_10->source->comp, VAR_10->source_port, VAR_10->sink->comp, VAR_10->sink_port);

   VAR_17 = 0;

   if (VAR_13 != VAR_2 || (VAR_17=FUNC_7(VAR_10)) < 0)
   {

      VAR_13 = FUNC_3(VAR_10->source->comp, VAR_10->source_port, ((void*)0), 0);
      FUNC_10(VAR_13 == VAR_2);
      VAR_13 = FUNC_3(VAR_10->sink->comp, VAR_10->sink_port, ((void*)0), 0);
      FUNC_10(VAR_13 == VAR_2);

      if(VAR_17)
      {

         FUNC_8(VAR_10->sink, VAR_3, 0, 1, 0, 1);
         FUNC_8(VAR_10->source, VAR_3, 0, 1, 0, 1);
      }

      FUNC_5("ilclient: could not setup/enable tunnel (setup=0x%x,enable=%d)",
                             VAR_13, VAR_17);
      return -5;
   }

   return 0;
}
