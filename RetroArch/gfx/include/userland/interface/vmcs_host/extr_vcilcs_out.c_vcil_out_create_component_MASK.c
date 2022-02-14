
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_12__ ;


typedef int resp ;
typedef int gresp ;
typedef int exe ;
typedef int dresp ;
typedef int dexe ;
struct TYPE_20__ {int dir; int port; } ;
typedef TYPE_2__ VC_PRIVATE_PORT_T ;
struct TYPE_21__ {int numPorts; struct TYPE_21__* next; TYPE_2__* port; int reference; TYPE_5__* comp; } ;
typedef TYPE_3__ VC_PRIVATE_COMPONENT_T ;
struct TYPE_25__ {int param; int index; int reference; TYPE_5__* mark; int name; } ;
struct TYPE_24__ {scalar_t__ err; int numPorts; int portDir; int * portIndex; int param; int reference; } ;
struct TYPE_23__ {int ComponentRoleEnum; int UseEGLImage; int GetExtensionIndex; int ComponentTunnelRequest; int FillThisBuffer; int EmptyThisBuffer; int FreeBuffer; int AllocateBuffer; int UseBuffer; int SendCommand; int SetConfig; int GetConfig; int SetParameter; int GetParameter; int GetState; int SetCallbacks; int ComponentDeInit; int GetComponentVersion; TYPE_12__* pApplicationPrivate; TYPE_3__* pComponentPrivate; } ;
struct TYPE_19__ {int nVersion; } ;
struct TYPE_22__ {int nSize; int reqSet; int portDir; int portIndex; TYPE_1__ nVersion; } ;
struct TYPE_18__ {int component_lock; TYPE_3__* component_list; int ilcs; } ;
typedef int OMX_U32 ;
typedef int OMX_STRING ;
typedef TYPE_4__ OMX_PARAM_PORTSUMMARYTYPE ;
typedef scalar_t__ OMX_HANDLETYPE ;
typedef scalar_t__ OMX_ERRORTYPE ;
typedef TYPE_5__ OMX_COMPONENTTYPE ;
typedef TYPE_6__ IL_RESPONSE_HEADER_T ;
typedef TYPE_6__ IL_GET_RESPONSE_T ;
typedef TYPE_8__ IL_GET_EXECUTE_T ;
typedef TYPE_8__ IL_EXECUTE_HEADER_T ;
typedef TYPE_6__ IL_CREATE_COMPONENT_RESPONSE_T ;
typedef TYPE_8__ IL_CREATE_COMPONENT_EXECUTE_T ;
typedef TYPE_12__ ILCS_COMMON_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (int ,int ,TYPE_8__*,int,TYPE_6__*,int*) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (TYPE_3__*,int ,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 TYPE_3__* FUNC_5 (int,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

OMX_ERRORTYPE FUNC_8(ILCS_COMMON_T *VAR_30, OMX_HANDLETYPE VAR_31, OMX_STRING VAR_32)
{
   OMX_COMPONENTTYPE *VAR_33 = (OMX_COMPONENTTYPE *) VAR_31;
   IL_CREATE_COMPONENT_EXECUTE_T VAR_34;
   IL_CREATE_COMPONENT_RESPONSE_T VAR_35;
   VC_PRIVATE_COMPONENT_T *VAR_36;
   OMX_U32 VAR_37;
   int VAR_38 = sizeof(VAR_35);

   if (FUNC_4(VAR_32) >= sizeof(VAR_34.name))
      return VAR_8;

   FUNC_3(VAR_34.name, VAR_32);
   VAR_34.mark = VAR_33;

   if(FUNC_0(VAR_30->ilcs, VAR_1, &VAR_34, sizeof(VAR_34), &VAR_35, &VAR_38) < 0 || VAR_38 != sizeof(VAR_35))
      return VAR_6;

   if (VAR_35.err != VAR_9)
      return VAR_35.err;

   VAR_36 = FUNC_5(sizeof(VC_PRIVATE_COMPONENT_T) + (sizeof(VC_PRIVATE_PORT_T) * VAR_35.numPorts), "ILCS Host Comp");
   if (!VAR_36)
   {
      IL_EXECUTE_HEADER_T VAR_39;
      IL_RESPONSE_HEADER_T VAR_40;
      int VAR_41 = sizeof(VAR_40);

      VAR_39.reference = VAR_35.reference;

      FUNC_0(VAR_30->ilcs, VAR_0, &VAR_39, sizeof(VAR_39), &VAR_40, &VAR_41);
      return VAR_7;
   }

   FUNC_2(VAR_36, 0, sizeof(VC_PRIVATE_COMPONENT_T) + (sizeof(VC_PRIVATE_PORT_T) * VAR_35.numPorts));

   VAR_36->reference = VAR_35.reference;
   VAR_36->comp = VAR_33;
   VAR_36->numPorts = VAR_35.numPorts;
   VAR_36->port = (VC_PRIVATE_PORT_T *) ((unsigned char *) VAR_36 + sizeof(VC_PRIVATE_COMPONENT_T));

   for (VAR_37=0; VAR_37<VAR_36->numPorts; VAR_37++)
   {
      if (VAR_37 && !(VAR_37&0x1f))
      {
         IL_GET_EXECUTE_T VAR_42;
         IL_GET_RESPONSE_T VAR_43;
         OMX_PARAM_PORTSUMMARYTYPE *VAR_44;
         int VAR_45 = sizeof(VAR_43);

         VAR_42.reference = VAR_36->reference;
         VAR_42.index = VAR_10;

         VAR_44 = (OMX_PARAM_PORTSUMMARYTYPE *) &VAR_42.param;
         VAR_44->nSize = sizeof(OMX_PARAM_PORTSUMMARYTYPE);
         VAR_44->nVersion.nVersion = VAR_11;
         VAR_44->reqSet = VAR_37>>5;

         FUNC_0(VAR_30->ilcs, VAR_3, &VAR_42,
                               sizeof(OMX_PARAM_PORTSUMMARYTYPE)+VAR_2,
                               &VAR_43, &VAR_45);

         VAR_44 = (OMX_PARAM_PORTSUMMARYTYPE *) &VAR_43.param;
         VAR_35.portDir = VAR_44->portDir;
         FUNC_1(VAR_35.portIndex, VAR_44->portIndex, sizeof(OMX_U32) * 32);
      }

      VAR_36->port[VAR_37].port = VAR_35.portIndex[VAR_37&0x1f];
      VAR_36->port[VAR_37].dir = ((VAR_35.portDir >> (VAR_37&0x1f)) & 1) ? VAR_5 : VAR_4;
   }

   FUNC_7(&VAR_30->component_lock);

   VAR_36->next = VAR_30->component_list;
   VAR_30->component_list = VAR_36;
   FUNC_6(&VAR_30->component_lock);

   VAR_33->pComponentPrivate = VAR_36;
   VAR_33->pApplicationPrivate = VAR_30;

   VAR_33->GetComponentVersion = VAR_19;
   VAR_33->ComponentDeInit = VAR_13;
   VAR_33->SetCallbacks = VAR_25;
   VAR_33->GetState = VAR_23;
   VAR_33->GetParameter = VAR_22;
   VAR_33->SetParameter = VAR_27;
   VAR_33->GetConfig = VAR_20;
   VAR_33->SetConfig = VAR_26;
   VAR_33->SendCommand = VAR_24;
   VAR_33->UseBuffer = VAR_28;
   VAR_33->AllocateBuffer = VAR_12;
   VAR_33->FreeBuffer = VAR_18;
   VAR_33->EmptyThisBuffer = VAR_16;
   VAR_33->FillThisBuffer = VAR_17;
   VAR_33->ComponentTunnelRequest = VAR_15;
   VAR_33->GetExtensionIndex = VAR_21;
   VAR_33->UseEGLImage = VAR_29;
   VAR_33->ComponentRoleEnum = VAR_14;

   return VAR_35.err;
}
