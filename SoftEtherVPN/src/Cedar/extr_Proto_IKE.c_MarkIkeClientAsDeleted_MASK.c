
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int server_ip_str ;
typedef int client_ip_str ;
struct TYPE_9__ {int Deleting; int ServerPort; int ClientPort; int ServerIP; int ClientIP; } ;
struct TYPE_8__ {int StateHasChanged; } ;
typedef TYPE_1__ IKE_SERVER ;
typedef TYPE_2__ IKE_CLIENT ;


 int FUNC_0 (char*,TYPE_2__*,char*,int ,char*,int ) ;
 int FUNC_1 (char*,int,int *) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*,int *,int *,char*) ;
 int VAR_0 ;

void FUNC_3(IKE_SERVER *VAR_1, IKE_CLIENT *VAR_2)
{
 char VAR_3[VAR_0];
 char VAR_4[VAR_0];

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 if (VAR_2->Deleting)
 {
  return;
 }

 VAR_1->StateHasChanged = 1;

 VAR_2->Deleting = 1;

 FUNC_1(VAR_3, sizeof(VAR_3), &VAR_2->ClientIP);
 FUNC_1(VAR_4, sizeof(VAR_4), &VAR_2->ServerIP);

 FUNC_0("Deleting IKE_CLIENT: %p: %s:%u -> %s:%u\n", VAR_2, VAR_3, VAR_2->ClientPort, VAR_4, VAR_2->ServerPort);

 FUNC_2(VAR_1, VAR_2, ((void*)0), ((void*)0), "LI_DELETE_IKE_CLIENT");
}
