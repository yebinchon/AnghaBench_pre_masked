
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_14__ ;


typedef int req ;
typedef int UINT ;
struct TYPE_18__ {TYPE_14__* ParsedOptionList; } ;
struct TYPE_17__ {int Hostname; int ClientAddress; int Opcode; } ;
struct TYPE_16__ {int ClientHostname; } ;
struct TYPE_15__ {scalar_t__ SubnetMask; } ;
typedef int TUBE ;
typedef TYPE_1__ IPC ;
typedef int IP ;
typedef TYPE_2__ DHCP_OPTION_LIST ;
typedef TYPE_3__ DHCPV4_DATA ;


 int FUNC_0 (TYPE_2__*,TYPE_14__*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*) ;
 TYPE_3__* FUNC_3 (TYPE_1__*,int *,int ,TYPE_2__*,int ,int ,int *) ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int,int ) ;
 int FUNC_7 (TYPE_2__*,int) ;

bool FUNC_8(IPC *VAR_3, DHCP_OPTION_LIST *VAR_4, TUBE *VAR_5, IP *VAR_6)
{
 DHCP_OPTION_LIST VAR_7;
 DHCPV4_DATA *VAR_8;
 UINT VAR_9 = FUNC_5();
 bool VAR_10;

 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0) || VAR_6 == ((void*)0))
 {
  return 0;
 }


 FUNC_7(&VAR_7, sizeof(VAR_7));
 VAR_7.Opcode = VAR_1;
 VAR_7.ClientAddress = FUNC_4(VAR_6);
 FUNC_6(VAR_7.Hostname, sizeof(VAR_7.Hostname), VAR_3->ClientHostname);
 FUNC_2(VAR_3, &VAR_7);

 VAR_8 = FUNC_3(VAR_3, ((void*)0), VAR_9, &VAR_7, VAR_0, VAR_2, VAR_5);
 if (VAR_8 == ((void*)0))
 {
  return 0;
 }


 VAR_10 = 1;
 if (VAR_8->ParsedOptionList->SubnetMask == 0)
 {
  VAR_10 = 0;
 }

 if (VAR_10 == 0)
 {
  FUNC_1(VAR_8);
  return 0;
 }

 FUNC_0(VAR_4, VAR_8->ParsedOptionList, sizeof(DHCP_OPTION_LIST));

 FUNC_1(VAR_8);

 return 1;
}
