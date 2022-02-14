
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int req ;
typedef int UINT ;
struct TYPE_10__ {int RequestedIp; int Hostname; int Opcode; } ;
struct TYPE_9__ {int ClientIPAddress; int ClientHostname; } ;
typedef TYPE_1__ IPC ;
typedef int IP ;
typedef TYPE_2__ DHCP_OPTION_LIST ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*,int *,int ,TYPE_2__*,int ,int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int,int ) ;
 int FUNC_6 (TYPE_2__*,int) ;

void FUNC_7(IPC *VAR_1, IP *VAR_2)
{
 DHCP_OPTION_LIST VAR_3;
 UINT VAR_4 = FUNC_4();

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }


 FUNC_6(&VAR_3, sizeof(VAR_3));
 VAR_3.Opcode = VAR_0;
 FUNC_5(VAR_3.Hostname, sizeof(VAR_3.Hostname), VAR_1->ClientHostname);
 VAR_3.RequestedIp = FUNC_3(&VAR_1->ClientIPAddress);
 FUNC_1(VAR_1, &VAR_3);

 FUNC_0(FUNC_2(VAR_1, VAR_2, VAR_4, &VAR_3, 0, 0, ((void*)0)));
}
