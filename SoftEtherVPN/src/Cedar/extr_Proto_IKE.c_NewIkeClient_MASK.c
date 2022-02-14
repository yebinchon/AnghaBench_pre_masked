
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int server_ip_str ;
typedef int client_ip_str ;
typedef void* UINT ;
struct TYPE_10__ {int FirstCommTick; int LastCommTick; void* ServerPort; int TransportModeClientIP; int TransportModeServerIP; int ServerIP; void* ClientPort; int ClientIP; scalar_t__ Id; } ;
struct TYPE_9__ {int Now; scalar_t__ CurrentIkeClientId; } ;
typedef int IP ;
typedef TYPE_1__ IKE_SERVER ;
typedef TYPE_2__ IKE_CLIENT ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (char*,TYPE_2__*,char*,void*,char*,void*) ;
 int FUNC_2 (char*,int,int *) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*,int *,int *,char*) ;
 int VAR_0 ;
 TYPE_2__* FUNC_4 (int) ;

IKE_CLIENT *FUNC_5(IKE_SERVER *VAR_1, IP *VAR_2, UINT VAR_3, IP *VAR_4, UINT VAR_5)
{
 IKE_CLIENT *VAR_6;
 char VAR_7[VAR_0];
 char VAR_8[VAR_0];

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_4 == ((void*)0) || VAR_3 == 0 || VAR_5 == 0)
 {
  return ((void*)0);
 }

 VAR_6 = FUNC_4(sizeof(IKE_CLIENT));

 VAR_6->Id = ++VAR_1->CurrentIkeClientId;

 FUNC_0(&VAR_6->ClientIP, VAR_2, sizeof(IP));
 VAR_6->ClientPort = VAR_3;

 FUNC_0(&VAR_6->ServerIP, VAR_4, sizeof(IP));
 FUNC_0(&VAR_6->TransportModeServerIP, VAR_4, sizeof(IP));
 FUNC_0(&VAR_6->TransportModeClientIP, VAR_2, sizeof(IP));
 VAR_6->ServerPort = VAR_5;

 VAR_6->LastCommTick = VAR_1->Now;
 VAR_6->FirstCommTick = VAR_1->Now;

 FUNC_2(VAR_7, sizeof(VAR_7), VAR_2);
 FUNC_2(VAR_8, sizeof(VAR_8), VAR_4);

 FUNC_1("New IKE_CLIENT: %p: %s:%u -> %s:%u\n", VAR_6, VAR_7, VAR_3, VAR_8, VAR_5);

 FUNC_3(VAR_1, VAR_6, ((void*)0), ((void*)0), "LI_NEW_IKE_CLIENT");

 return VAR_6;
}
