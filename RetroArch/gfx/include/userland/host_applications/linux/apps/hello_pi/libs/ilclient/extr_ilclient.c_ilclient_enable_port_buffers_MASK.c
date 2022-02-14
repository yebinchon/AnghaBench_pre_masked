
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {int sema; TYPE_3__* out_list; TYPE_3__* in_list; int comp; int bufname; } ;
struct TYPE_14__ {int pAppPrivate; } ;
struct TYPE_12__ {int nVersion; } ;
struct TYPE_13__ {int nSize; int nPortIndex; scalar_t__ bEnabled; int nBufferCountActual; scalar_t__ nBufferSize; scalar_t__ eDir; int nBufferAlignment; TYPE_1__ nVersion; } ;
typedef scalar_t__ OMX_STATETYPE ;
typedef TYPE_2__ OMX_PARAM_PORTDEFINITIONTYPE ;
typedef scalar_t__ OMX_ERRORTYPE ;
typedef TYPE_3__ OMX_BUFFERHEADERTYPE ;
typedef unsigned char* (* ILCLIENT_MALLOC_T ) (void*,scalar_t__,int ,int ) ;
typedef int (* ILCLIENT_FREE_T ) (void*,unsigned char*) ;
typedef TYPE_4__ COMPONENT_T ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ,int ,TYPE_2__*) ;
 scalar_t__ FUNC_1 (int ,scalar_t__*) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int ,int ,int,int *) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_3 (int ,TYPE_3__**,int,int *,scalar_t__,unsigned char*) ;
 int VAR_9 ;
 int FUNC_4 (TYPE_4__*,int,int *,int (*) (void*,unsigned char*),void*) ;
 int FUNC_5 (TYPE_4__*,int ,int ,int,int,int ) ;
 scalar_t__ FUNC_6 (TYPE_4__*,int ,int) ;
 int FUNC_7 (TYPE_2__*,int ,int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (unsigned char*) ;
 unsigned char* FUNC_10 (scalar_t__,int ,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

int FUNC_13(COMPONENT_T *VAR_10, int VAR_11,
                                 ILCLIENT_MALLOC_T VAR_12,
                                 ILCLIENT_FREE_T VAR_13,
                                 void *VAR_14)
{
   OMX_ERRORTYPE VAR_15;
   OMX_PARAM_PORTDEFINITIONTYPE VAR_16;
   OMX_BUFFERHEADERTYPE *VAR_17 = ((void*)0), **VAR_18 = &VAR_17;
   OMX_STATETYPE VAR_19;
   int VAR_20;

   FUNC_7(&VAR_16, 0, sizeof(OMX_PARAM_PORTDEFINITIONTYPE));
   VAR_16.nSize = sizeof(OMX_PARAM_PORTDEFINITIONTYPE);
   VAR_16.nVersion.nVersion = VAR_9;
   VAR_16.nPortIndex = VAR_11;


   VAR_15 = FUNC_0(VAR_10->comp, VAR_5, &VAR_16);
   if(VAR_15 != VAR_2 || VAR_16.bEnabled != VAR_4 || VAR_16.nBufferCountActual == 0 || VAR_16.nBufferSize == 0)
      return -1;


   VAR_15 = FUNC_1(VAR_10->comp, &VAR_19);
   if (VAR_15 != VAR_2 || !(VAR_19 == VAR_7 || VAR_19 == VAR_6 || VAR_19 == VAR_8))
      return -1;


   VAR_15 = FUNC_2(VAR_10->comp, VAR_0, VAR_11, ((void*)0));
   FUNC_8(VAR_15 == VAR_2);

   for (VAR_20=0; VAR_20 != VAR_16.nBufferCountActual; VAR_20++)
   {
      unsigned char *VAR_21;
      if(VAR_12)
         VAR_21 = VAR_12(VAR_14, VAR_16.nBufferSize, VAR_16.nBufferAlignment, VAR_10->bufname);
      else
         VAR_21 = FUNC_10(VAR_16.nBufferSize, VAR_16.nBufferAlignment, VAR_10->bufname);

      if(!VAR_21)
         break;

      VAR_15 = FUNC_3(VAR_10->comp, VAR_18, VAR_11, ((void*)0), VAR_16.nBufferSize, VAR_21);
      if(VAR_15 != VAR_2)
      {
         if(VAR_13)
            VAR_13(VAR_14, VAR_21);
         else
            FUNC_9(VAR_21);

         break;
      }
      VAR_18 = (OMX_BUFFERHEADERTYPE **) &((*VAR_18)->pAppPrivate);
   }


   FUNC_12(&VAR_10->sema);

   if(VAR_16.eDir == VAR_1)
   {
      *VAR_18 = VAR_10->in_list;
      VAR_10->in_list = VAR_17;
   }
   else
   {
      *VAR_18 = VAR_10->out_list;
      VAR_10->out_list = VAR_17;
   }

   FUNC_11(&VAR_10->sema);

   if(VAR_20 != VAR_16.nBufferCountActual ||
      FUNC_6(VAR_10, VAR_0, VAR_11) < 0)
   {
      FUNC_4(VAR_10, VAR_11, ((void*)0), VAR_13, VAR_14);




      FUNC_5(VAR_10, VAR_3, 0, 1, 1, 0);

      return -1;
   }


   return 0;
}
