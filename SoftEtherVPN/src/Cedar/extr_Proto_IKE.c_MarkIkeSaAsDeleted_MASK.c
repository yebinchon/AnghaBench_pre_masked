
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int Deleting; int ResponderCookie; int InitiatorCookie; int IkeClient; } ;
struct TYPE_8__ {int StateHasChanged; } ;
typedef TYPE_1__ IKE_SERVER ;
typedef TYPE_2__ IKE_SA ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (TYPE_1__*,int *,TYPE_2__*,int *,char*) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int ) ;

void FUNC_3(IKE_SERVER *VAR_0, IKE_SA *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 if (VAR_1->Deleting)
 {
  return;
 }

 VAR_0->StateHasChanged = 1;

 VAR_1->Deleting = 1;

 FUNC_0("IKE SA %I64u - %I64u has been marked as being deleted.\n", VAR_1->InitiatorCookie, VAR_1->ResponderCookie);

 FUNC_2(VAR_0, VAR_1->IkeClient, VAR_1->InitiatorCookie, VAR_1->ResponderCookie);

 FUNC_1(VAR_0, ((void*)0), VAR_1, ((void*)0), "LI_DELETE_IKE_SA");
}
