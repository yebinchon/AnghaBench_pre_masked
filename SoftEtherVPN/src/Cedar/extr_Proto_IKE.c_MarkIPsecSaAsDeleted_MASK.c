
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int StateHasChanged; } ;
struct TYPE_8__ {int Deleting; int Spi; int IkeClient; } ;
typedef TYPE_1__ IPSECSA ;
typedef TYPE_2__ IKE_SERVER ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (TYPE_2__*,int *,int *,TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;

void FUNC_3(IKE_SERVER *VAR_0, IPSECSA *VAR_1)
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

 FUNC_0("IPsec SA 0x%X has been marked as being deleted.\n", VAR_1->Spi);

 FUNC_2(VAR_0, VAR_1->IkeClient, VAR_1->Spi);

 FUNC_1(VAR_0, ((void*)0), ((void*)0), VAR_1, "LI_DELETE_IPSEC_SA");
}
