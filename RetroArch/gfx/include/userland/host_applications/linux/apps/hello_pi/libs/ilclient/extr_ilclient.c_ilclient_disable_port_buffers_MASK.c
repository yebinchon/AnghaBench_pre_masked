
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int VCOS_UNSIGNED ;
struct TYPE_15__ {int event; int comp; int sema; TYPE_3__* out_list; TYPE_3__* in_list; } ;
struct TYPE_14__ {int nInputPortIndex; int nOutputPortIndex; struct TYPE_14__* pAppPrivate; void* pBuffer; } ;
struct TYPE_12__ {int nVersion; } ;
struct TYPE_13__ {int nSize; int nPortIndex; scalar_t__ bEnabled; int nBufferCountActual; scalar_t__ nBufferSize; scalar_t__ eDir; TYPE_1__ nVersion; } ;
typedef int OMX_U32 ;
typedef TYPE_2__ OMX_PARAM_PORTDEFINITIONTYPE ;
typedef scalar_t__ OMX_ERRORTYPE ;
typedef TYPE_3__ OMX_BUFFERHEADERTYPE ;
typedef int (* ILCLIENT_FREE_T ) (void*,void*) ;
typedef TYPE_4__ COMPONENT_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int ,int,TYPE_3__*) ;
 scalar_t__ FUNC_1 (int ,int ,TYPE_2__*) ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (int ,int ,int,int *) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_3 (TYPE_4__*,int ,int ,int,int,int ) ;
 scalar_t__ FUNC_4 (TYPE_4__*,int ,int) ;
 int FUNC_5 (TYPE_2__*,int ,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *,int,int ,int,int*) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

void FUNC_11(COMPONENT_T *VAR_13, int VAR_14,
                                   OMX_BUFFERHEADERTYPE *VAR_15,
                                   ILCLIENT_FREE_T VAR_16,
                                   void *VAR_17)
{
   OMX_ERRORTYPE VAR_18;
   OMX_BUFFERHEADERTYPE *VAR_19 = VAR_15;
   OMX_BUFFERHEADERTYPE **VAR_20, *VAR_21, *VAR_22;
   OMX_PARAM_PORTDEFINITIONTYPE VAR_23;
   int VAR_24;


   FUNC_5(&VAR_23, 0, sizeof(OMX_PARAM_PORTDEFINITIONTYPE));
   VAR_23.nSize = sizeof(OMX_PARAM_PORTDEFINITIONTYPE);
   VAR_23.nVersion.nVersion = VAR_11;
   VAR_23.nPortIndex = VAR_14;


   VAR_18 = FUNC_1(VAR_13->comp, VAR_9, &VAR_23);
   if(VAR_18 != VAR_6 || VAR_23.bEnabled != VAR_10 || VAR_23.nBufferCountActual == 0 || VAR_23.nBufferSize == 0)
      return;

   VAR_24 = VAR_23.nBufferCountActual;

   VAR_18 = FUNC_2(VAR_13->comp, VAR_4, VAR_14, ((void*)0));
   FUNC_6(VAR_18 == VAR_6);

   while(VAR_24 > 0)
   {
      VCOS_UNSIGNED VAR_25;

      if(VAR_19 == ((void*)0))
      {
         FUNC_10(&VAR_13->sema);


         VAR_20 = VAR_23.eDir == VAR_5 ? &VAR_13->in_list : &VAR_13->out_list;
         VAR_21 = *VAR_20;
         VAR_22 = ((void*)0);

         while(VAR_21)
         {
            if((VAR_23.eDir == VAR_5 ? VAR_21->nInputPortIndex : VAR_21->nOutputPortIndex) == VAR_14)
            {
               OMX_BUFFERHEADERTYPE *VAR_26 = VAR_21;

               if(!VAR_22)
                  VAR_21 = *VAR_20 = (OMX_BUFFERHEADERTYPE *) VAR_26->pAppPrivate;
               else
                  VAR_21 = VAR_22->pAppPrivate = (OMX_BUFFERHEADERTYPE *) VAR_26->pAppPrivate;

               VAR_26->pAppPrivate = VAR_19;
               VAR_19 = VAR_26;
            }
            else
            {
               VAR_22 = VAR_21;
               VAR_21 = (OMX_BUFFERHEADERTYPE *) &(VAR_21->pAppPrivate);
            }
         }

         FUNC_9(&VAR_13->sema);
      }

      while(VAR_19)
      {
         void *VAR_27 = VAR_19->pBuffer;
         OMX_BUFFERHEADERTYPE *VAR_28 = VAR_19->pAppPrivate;

         VAR_18 = FUNC_0(VAR_13->comp, VAR_14, VAR_19);
         FUNC_6(VAR_18 == VAR_6);

         if(VAR_16)
            VAR_16(VAR_17, VAR_27);
         else
            FUNC_8(VAR_27);

         VAR_24--;
         VAR_19 = VAR_28;
      }

      if(VAR_24)
      {
         OMX_U32 VAR_29 = VAR_3 | VAR_1;
         VAR_29 |= (VAR_23.eDir == VAR_5 ? VAR_0 : VAR_2);


         FUNC_7(&VAR_13->event, VAR_29, VAR_12, -1, &VAR_25);

         if((VAR_25 & VAR_1) && FUNC_3(VAR_13, VAR_8, 0, 1, 1, 0) >= 0)
            return;

         if((VAR_25 & VAR_3) && FUNC_3(VAR_13, VAR_7, VAR_4, 0, VAR_14, 0) >= 0)
            return;
      }
   }

   if(FUNC_4(VAR_13, VAR_4, VAR_14) < 0)
      FUNC_6(0);
}
