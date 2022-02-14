
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ int32_t ;
typedef int component_name ;
struct TYPE_18__ {int flags; int sema; int event; int comp; scalar_t__* bufname; scalar_t__* name; int * client; } ;
struct TYPE_17__ {int FillBufferDone; int EmptyBufferDone; int EventHandler; } ;
struct TYPE_15__ {void* nVersion; } ;
struct TYPE_16__ {int nSize; scalar_t__ nPorts; scalar_t__ nStartPortNumber; scalar_t__ eDir; scalar_t__ nBufferCountActual; scalar_t__ nPortIndex; TYPE_1__ nVersion; } ;
typedef int OMX_VERSIONTYPE ;
typedef scalar_t__ OMX_UUIDTYPE ;
typedef TYPE_2__ OMX_PORT_PARAM_TYPE ;
typedef TYPE_2__ OMX_PARAM_PORTDEFINITIONTYPE ;
typedef int OMX_INDEXTYPE ;
typedef scalar_t__ OMX_ERRORTYPE ;
typedef TYPE_4__ OMX_CALLBACKTYPE ;
typedef int ILCLIENT_T ;
typedef int ILCLIENT_CREATE_FLAGS_T ;
typedef TYPE_5__ COMPONENT_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int ,char*,int *,int *,scalar_t__*) ;
 scalar_t__ FUNC_1 (int *,char*,TYPE_5__*,TYPE_4__*) ;
 scalar_t__ FUNC_2 (int ,int ,TYPE_2__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int ,int ,TYPE_2__*) ;
 void* VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_4 (TYPE_5__*,scalar_t__) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_5 (TYPE_5__*,int ,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int *,char*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_5__*) ;
 TYPE_5__* FUNC_11 (int,char*) ;
 scalar_t__ FUNC_12 (int *,char*,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (char*,int,char*,char*,...) ;

int FUNC_15(ILCLIENT_T *VAR_19, COMPONENT_T **VAR_20, char *VAR_21,
                              ILCLIENT_CREATE_FLAGS_T VAR_22)
{
   OMX_CALLBACKTYPE VAR_23;
   OMX_ERRORTYPE VAR_24;
   char VAR_25[128];
   int32_t VAR_26;

   *VAR_20 = FUNC_11(sizeof(COMPONENT_T), "il:comp");
   if(!*VAR_20)
      return -1;

   FUNC_5(*VAR_20, 0, sizeof(COMPONENT_T));



   VAR_26 = FUNC_8(&(*VAR_20)->event,"il:comp");
   FUNC_7(VAR_26 == VAR_13);
   VAR_26 = FUNC_12(&(*VAR_20)->sema, "il:comp", 1);
   FUNC_7(VAR_26 == VAR_13);
   (*VAR_20)->client = VAR_19;

   FUNC_14((*VAR_20)->name, sizeof((*VAR_20)->name), "cl:%s", VAR_21);
   FUNC_14((*VAR_20)->bufname, sizeof((*VAR_20)->bufname), "cl:%s buffer", VAR_21);
   FUNC_14(VAR_25, sizeof(VAR_25), "%s%s", "OMX.broadcom.", VAR_21);

   (*VAR_20)->flags = VAR_22;

   VAR_23.EventHandler = VAR_16;
   VAR_23.EmptyBufferDone = VAR_22 & VAR_2 ? VAR_14 : VAR_15;
   VAR_23.FillBufferDone = VAR_22 & VAR_3 ? VAR_17 : VAR_18;

   VAR_24 = FUNC_1(&(*VAR_20)->comp, VAR_25, *VAR_20, &VAR_23);

   if (VAR_24 == VAR_6)
   {
      OMX_UUIDTYPE VAR_27;
      char VAR_28[128];
      OMX_VERSIONTYPE VAR_29, VAR_30;

      if(FUNC_0((*VAR_20)->comp, VAR_28, &VAR_29, &VAR_30, &VAR_27) == VAR_6)
      {
         char *VAR_31 = (char *) VAR_27 + FUNC_6("OMX.broadcom.");

         FUNC_14((*VAR_20)->name, sizeof((*VAR_20)->name), "cl:%s", VAR_31);
         (*VAR_20)->name[sizeof((*VAR_20)->name)-1] = 0;
         FUNC_14((*VAR_20)->bufname, sizeof((*VAR_20)->bufname), "cl:%s buffer", VAR_31);
         (*VAR_20)->bufname[sizeof((*VAR_20)->bufname)-1] = 0;
      }

      if(VAR_22 & (VAR_1 | VAR_4))
      {
         OMX_PORT_PARAM_TYPE VAR_32;
         OMX_INDEXTYPE VAR_33[] = {VAR_7, VAR_11, VAR_8, VAR_9};
         int VAR_34;

         VAR_32.nSize = sizeof(OMX_PORT_PARAM_TYPE);
         VAR_32.nVersion.nVersion = VAR_12;

         for(VAR_34=0; VAR_34<4; VAR_34++)
         {
            OMX_ERRORTYPE VAR_35 = FUNC_2((*VAR_20)->comp, VAR_33[VAR_34], &VAR_32);
            if(VAR_35 == VAR_6)
            {
               uint32_t VAR_36;
               for(VAR_36=0; VAR_36<VAR_32.nPorts; VAR_36++)
               {
                  if(VAR_22 & VAR_1)
                     FUNC_4(*VAR_20, VAR_32.nStartPortNumber+VAR_36);

                  if(VAR_22 & VAR_4)
                  {
                     OMX_PARAM_PORTDEFINITIONTYPE VAR_37;
                     VAR_37.nSize = sizeof(OMX_PARAM_PORTDEFINITIONTYPE);
                     VAR_37.nVersion.nVersion = VAR_12;
                     VAR_37.nPortIndex = VAR_32.nStartPortNumber+VAR_36;
                     if(FUNC_2((*VAR_20)->comp, VAR_10, &VAR_37) == VAR_6)
                     {
                        if(VAR_37.eDir == VAR_5 && VAR_37.nBufferCountActual > 0)
                        {
                           VAR_37.nBufferCountActual = 0;
                           FUNC_3((*VAR_20)->comp, VAR_10, &VAR_37);
                        }
                     }
                  }
               }
            }
         }
      }
      return 0;
   }
   else
   {
      FUNC_9(&(*VAR_20)->event);
      FUNC_13(&(*VAR_20)->sema);
      FUNC_10(*VAR_20);
      *VAR_20 = ((void*)0);
      return -1;
   }
}
