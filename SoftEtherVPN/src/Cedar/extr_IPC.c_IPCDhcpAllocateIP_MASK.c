
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
struct TYPE_17__ {scalar_t__ RequestedIp; scalar_t__ ServerAddress; int Hostname; int Opcode; } ;
struct TYPE_16__ {int ClientHostname; } ;
struct TYPE_15__ {scalar_t__ SubnetMask; scalar_t__ LeaseTime; scalar_t__ ServerAddress; scalar_t__ ClientAddress; } ;
typedef int TUBE ;
typedef TYPE_1__ IPC ;
typedef TYPE_2__ DHCP_OPTION_LIST ;
typedef TYPE_3__ DHCPV4_DATA ;


 int FUNC_0 (TYPE_2__*,TYPE_14__*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*) ;
 TYPE_3__* FUNC_3 (TYPE_1__*,int *,int ,TYPE_2__*,int ,int ,int *) ;
 void* VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int,int ) ;
 int FUNC_7 (TYPE_2__*,int) ;

bool FUNC_8(IPC *VAR_7, DHCP_OPTION_LIST *VAR_8, TUBE *VAR_9)
{
 DHCP_OPTION_LIST VAR_10;
 DHCPV4_DATA *VAR_11, *VAR_12;
 UINT VAR_13 = FUNC_5();
 bool VAR_14;

 if (VAR_7 == ((void*)0) || VAR_8 == ((void*)0))
 {
  return 0;
 }


 FUNC_7(&VAR_10, sizeof(VAR_10));
 VAR_10.RequestedIp = 0;
 VAR_10.Opcode = VAR_1;
 FUNC_6(VAR_10.Hostname, sizeof(VAR_10.Hostname), VAR_7->ClientHostname);
 FUNC_2(VAR_7, &VAR_10);

 VAR_11 = FUNC_3(VAR_7, ((void*)0), VAR_13, &VAR_10, VAR_2, VAR_6, VAR_9);
 if (VAR_11 == ((void*)0))
 {
  return 0;
 }


 VAR_14 = 1;
 if (FUNC_4(VAR_11->ParsedOptionList->ClientAddress) == 0)
 {
  VAR_14 = 0;
 }
 if (FUNC_4(VAR_11->ParsedOptionList->ServerAddress) == 0)
 {
  VAR_14 = 0;
 }
 if (VAR_11->ParsedOptionList->SubnetMask == 0)
 {
  VAR_14 = 0;
 }
 if (VAR_11->ParsedOptionList->LeaseTime == 0)
 {
  VAR_11->ParsedOptionList->LeaseTime = VAR_4;
 }
 if (VAR_11->ParsedOptionList->LeaseTime <= VAR_5)
 {
  VAR_11->ParsedOptionList->LeaseTime = VAR_5;
 }

 if (VAR_14 == 0)
 {
  FUNC_1(VAR_11);
  return 0;
 }


 FUNC_7(&VAR_10, sizeof(VAR_10));
 VAR_10.Opcode = VAR_3;
 FUNC_6(VAR_10.Hostname, sizeof(VAR_10.Hostname), VAR_7->ClientHostname);
 VAR_10.ServerAddress = VAR_11->ParsedOptionList->ServerAddress;
 VAR_10.RequestedIp = VAR_11->ParsedOptionList->ClientAddress;
 FUNC_2(VAR_7, &VAR_10);

 VAR_12 = FUNC_3(VAR_7, ((void*)0), VAR_13, &VAR_10, VAR_0, VAR_6, VAR_9);
 if (VAR_12 == ((void*)0))
 {
  FUNC_1(VAR_11);
  return 0;
 }


 VAR_14 = 1;
 if (FUNC_4(VAR_12->ParsedOptionList->ClientAddress) == 0)
 {
  VAR_14 = 0;
 }
 if (FUNC_4(VAR_12->ParsedOptionList->ServerAddress) == 0)
 {
  VAR_14 = 0;
 }
 if (VAR_12->ParsedOptionList->SubnetMask == 0)
 {
  VAR_14 = 0;
 }
 if (VAR_12->ParsedOptionList->LeaseTime == 0)
 {
  VAR_12->ParsedOptionList->LeaseTime = VAR_4;
 }
 if (VAR_12->ParsedOptionList->LeaseTime <= VAR_5)
 {
  VAR_12->ParsedOptionList->LeaseTime = VAR_5;
 }

 if (VAR_14 == 0)
 {
  FUNC_1(VAR_11);
  FUNC_1(VAR_12);
  return 0;
 }

 FUNC_0(VAR_8, VAR_12->ParsedOptionList, sizeof(DHCP_OPTION_LIST));

 FUNC_1(VAR_11);
 FUNC_1(VAR_12);

 return 1;
}
