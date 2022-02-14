
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_54__ TYPE_9__ ;
typedef struct TYPE_53__ TYPE_8__ ;
typedef struct TYPE_52__ TYPE_7__ ;
typedef struct TYPE_51__ TYPE_6__ ;
typedef struct TYPE_50__ TYPE_5__ ;
typedef struct TYPE_49__ TYPE_4__ ;
typedef struct TYPE_48__ TYPE_3__ ;
typedef struct TYPE_47__ TYPE_2__ ;
typedef struct TYPE_46__ TYPE_1__ ;
typedef struct TYPE_45__ TYPE_13__ ;
typedef struct TYPE_44__ TYPE_12__ ;
typedef struct TYPE_43__ TYPE_11__ ;
typedef struct TYPE_42__ TYPE_10__ ;


typedef int ret ;
typedef int magic_cookie ;
typedef int client_mac ;
typedef int client_ip ;
struct TYPE_54__ {size_t NumExistingRoutes; TYPE_12__* Entries; } ;
struct TYPE_52__ {int DhcpExpire; int DhcpMask; int HostIP; scalar_t__ DhcpGateway; int UseNat; int DhcpDomain; int DhcpPendingLeaseList; TYPE_9__ PushRoute; int DhcpDns2; int DhcpDns; int DhcpLeaseList; scalar_t__ DhcpId; TYPE_5__* NativeNat; } ;
typedef TYPE_7__ VH ;
typedef int UINT ;
typedef int UCHAR ;
struct TYPE_49__ {TYPE_3__* UDPHeader; } ;
struct TYPE_47__ {TYPE_1__* IPv4Header; } ;
struct TYPE_51__ {TYPE_13__* DHCPv4Header; } ;
struct TYPE_53__ {int PacketSize; TYPE_4__ L4; TYPE_2__ L3; int * MacAddressSrc; scalar_t__ MacHeader; TYPE_6__ L7; } ;
struct TYPE_50__ {int* CurrentMacAddress; } ;
struct TYPE_48__ {int SrcPort; } ;
struct TYPE_46__ {scalar_t__ SrcIP; } ;
struct TYPE_45__ {int TransactionId; int OpCode; int HardwareAddressSize; int HardwareType; int ClientMacAddress; } ;
struct TYPE_44__ {int Exists; int SubnetMaskLen; TYPE_9__ SubnetMask; TYPE_9__ Network; TYPE_9__ Gateway; } ;
struct TYPE_43__ {scalar_t__ Id; int Hostname; int IpAddress; int MacAddress; } ;
struct TYPE_42__ {scalar_t__ Opcode; scalar_t__ RequestedIp; int ServerAddress; int LeaseTime; int SubnetMask; scalar_t__ Gateway; int DomainName; int Hostname; TYPE_9__ ClasslessRoute; int DnsServer2; int DnsServer; } ;
typedef TYPE_8__ PKT ;
typedef int LIST ;
typedef TYPE_9__ IP ;
typedef TYPE_10__ DHCP_OPTION_LIST ;
typedef TYPE_11__ DHCP_LEASE ;
typedef int DHCP_CLASSLESS_ROUTE_TABLE ;
typedef TYPE_12__ DHCP_CLASSLESS_ROUTE ;
typedef TYPE_13__ DHCPV4_HEADER ;
typedef int BUF ;


 int FUNC_0 (int ,TYPE_11__*) ;
 int FUNC_1 (char*,int,int *,int) ;
 int * FUNC_2 (TYPE_10__*) ;
 int * FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int*,int) ;
 int FUNC_5 (TYPE_9__*,TYPE_9__*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (char*,char*,char*) ;
 int FUNC_7 (int ,TYPE_11__*) ;
 int FUNC_8 (int ) ;
 void* FUNC_9 (int) ;
 int FUNC_10 (TYPE_10__*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (TYPE_11__*) ;
 int FUNC_13 (int *) ;
 int VAR_7 ;
 int * FUNC_14 (TYPE_9__*,TYPE_9__*) ;
 scalar_t__ FUNC_15 (int ) ;
 int VAR_8 ;
 int FUNC_16 (TYPE_9__*,TYPE_9__*,TYPE_9__*) ;
 int FUNC_17 (char*,int,TYPE_9__*) ;
 int FUNC_18 (char*,int,int ) ;
 scalar_t__ FUNC_19 (int *) ;
 scalar_t__ FUNC_20 (int ) ;
 size_t VAR_9 ;
 int VAR_10 ;
 int FUNC_21 (char*,int,int ) ;
 int FUNC_22 (TYPE_7__*,char*,scalar_t__,char*,char*,int ,int) ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_11__* FUNC_23 (int,int *,int,int,int ) ;
 TYPE_10__* FUNC_24 (int *,int) ;
 TYPE_11__* FUNC_25 (TYPE_7__*,int) ;
 TYPE_11__* FUNC_26 (TYPE_7__*,int) ;
 int FUNC_27 (TYPE_7__*,int *,scalar_t__) ;
 int FUNC_28 (TYPE_7__*,int *,scalar_t__) ;
 scalar_t__ FUNC_29 (int ,int ) ;
 int FUNC_30 (int ,int,int ) ;
 int FUNC_31 (TYPE_9__*) ;
 int FUNC_32 (TYPE_9__*,int) ;
 int FUNC_33 (TYPE_7__*,int,int,int ,int,int ,int *,int ,int ) ;
 int FUNC_34 (TYPE_10__*,int) ;

void FUNC_35(VH *VAR_13, PKT *VAR_14)
{
 DHCPV4_HEADER *VAR_15;
 UCHAR *VAR_16;
 UINT VAR_17;
 UINT VAR_18;
 UINT VAR_19;
 UINT VAR_20;
 UINT VAR_21 = FUNC_9(VAR_3);
 bool VAR_22;
 DHCP_OPTION_LIST *VAR_23;

 if (VAR_13 == ((void*)0) || VAR_14 == ((void*)0))
 {
  return;
 }

 if (VAR_13->NativeNat != ((void*)0))
 {
  if (FUNC_4(VAR_14->MacAddressSrc, VAR_13->NativeNat->CurrentMacAddress, 6) == 0)
  {



  }
 }

 VAR_15 = VAR_14->L7.DHCPv4Header;

 VAR_20 = FUNC_9(VAR_15->TransactionId);


 VAR_18 = sizeof(DHCPV4_HEADER);
 VAR_19 = (UINT)(((UCHAR *)VAR_14->L7.DHCPv4Header) - ((UCHAR *)VAR_14->MacHeader) + VAR_18);
 VAR_16 = ((UCHAR *)VAR_15) + VAR_18;
 VAR_17 = VAR_14->PacketSize - VAR_19;
 if (VAR_18 < 5)
 {

  return;
 }


 VAR_22 = 0;
 while (VAR_17 >= 5)
 {
  if (FUNC_4(VAR_16, &VAR_21, sizeof(VAR_21)) == 0)
  {

   VAR_16 += 4;
   VAR_17 -= 4;
   VAR_22 = 1;
   break;
  }
  VAR_16++;
  VAR_17--;
 }

 if (VAR_22 == 0)
 {

  return;
 }


 VAR_23 = FUNC_24(VAR_16, VAR_17);
 if (VAR_23 == ((void*)0))
 {

  return;
 }

 if (FUNC_29(VAR_23->Hostname, VAR_11) || FUNC_29(VAR_23->Hostname, VAR_12))
 {
  FUNC_10(VAR_23);
  return;
 }

 if (VAR_15->OpCode == 1 && (VAR_23->Opcode == VAR_1 || VAR_23->Opcode == VAR_6 || VAR_23->Opcode == VAR_2))
 {

  UINT VAR_24 = 0;

  if (VAR_23->RequestedIp == 0)
  {
   VAR_23->RequestedIp = VAR_14->L3.IPv4Header->SrcIP;
  }
  if (VAR_23->Opcode == VAR_1)
  {

   VAR_24 = FUNC_27(VAR_13, VAR_14->MacAddressSrc, VAR_23->RequestedIp);
  }
  else if (VAR_23->Opcode == VAR_6)
  {

   VAR_24 = FUNC_28(VAR_13, VAR_14->MacAddressSrc, VAR_23->RequestedIp);
  }

  if (VAR_24 != 0 || VAR_23->Opcode == VAR_2)
  {


   if (VAR_23->Opcode == VAR_6)
   {
    DHCP_LEASE *VAR_25;
    char VAR_26[VAR_10];
    char VAR_27[VAR_10];


    VAR_25 = FUNC_25(VAR_13, VAR_24);
    if (VAR_25 != ((void*)0))
    {
     FUNC_12(VAR_25);
     FUNC_7(VAR_13->DhcpLeaseList, VAR_25);
    }

    VAR_25 = FUNC_26(VAR_13, VAR_24);
    if (VAR_25 != ((void*)0))
    {
     FUNC_12(VAR_25);
     FUNC_7(VAR_13->DhcpPendingLeaseList, VAR_25);
    }


    VAR_25 = FUNC_23(VAR_13->DhcpExpire, VAR_14->MacAddressSrc, VAR_24, VAR_13->DhcpMask, VAR_23->Hostname);
    VAR_25->Id = ++VAR_13->DhcpId;
    FUNC_0(VAR_13->DhcpLeaseList, VAR_25);

    FUNC_21(VAR_26, sizeof(VAR_26), VAR_25->MacAddress);
    FUNC_18(VAR_27, sizeof(VAR_27), VAR_25->IpAddress);

    FUNC_22(VAR_13, "LH_NAT_DHCP_CREATED", VAR_25->Id, VAR_26, VAR_27, VAR_25->Hostname, VAR_13->DhcpExpire / 1000);
   }


   if (1)
   {
    DHCP_OPTION_LIST VAR_28;
    LIST *VAR_29;
    FUNC_34(&VAR_28, sizeof(VAR_28));

    VAR_28.Opcode = (VAR_23->Opcode == VAR_1 ? VAR_5 : VAR_0);
    VAR_28.ServerAddress = VAR_13->HostIP;
    if (VAR_13->DhcpExpire == VAR_8)
    {
     VAR_28.LeaseTime = VAR_8;
    }
    else
    {
     VAR_28.LeaseTime = FUNC_9(VAR_13->DhcpExpire / 1000);
    }

    if (VAR_23->Opcode == VAR_2)
    {
     VAR_28.LeaseTime = 0;
    }

    FUNC_30(VAR_28.DomainName, sizeof(VAR_28.DomainName), VAR_13->DhcpDomain);
    VAR_28.SubnetMask = VAR_13->DhcpMask;
    VAR_28.DnsServer = VAR_13->DhcpDns;
    VAR_28.DnsServer2 = VAR_13->DhcpDns2;
    VAR_28.Gateway = VAR_13->DhcpGateway;

    if (FUNC_15(VAR_7) == 0)
    {
     FUNC_5(&VAR_28.ClasslessRoute, &VAR_13->PushRoute, sizeof(DHCP_CLASSLESS_ROUTE_TABLE));

     if (FUNC_19(VAR_14->MacAddressSrc))
     {
      if (VAR_28.Gateway == 0)
      {



       IP VAR_30;
       IP VAR_31;
       IP VAR_32;

       FUNC_32(&VAR_30, VAR_24);

       if (VAR_24 == 0)
       {
        FUNC_32(&VAR_30, VAR_14->L3.IPv4Header->SrcIP);
       }

       FUNC_32(&VAR_31, VAR_13->DhcpMask);

       FUNC_16(&VAR_32, &VAR_30, &VAR_31);

       if (FUNC_14(&VAR_28.ClasslessRoute, &VAR_30) == ((void*)0))
       {
        if (VAR_28.ClasslessRoute.NumExistingRoutes < VAR_9)
        {
         DHCP_CLASSLESS_ROUTE *VAR_33 = &VAR_28.ClasslessRoute.Entries[VAR_28.ClasslessRoute.NumExistingRoutes];

         VAR_33->Exists = 1;

         FUNC_32(&VAR_33->Gateway, VAR_13->HostIP);

         if (VAR_13->UseNat == 0 && VAR_28.ClasslessRoute.NumExistingRoutes >= 1)
         {
          FUNC_5(&VAR_33->Gateway, &VAR_28.ClasslessRoute.Entries[0].Gateway, sizeof(IP));
         }

         FUNC_5(&VAR_33->Network, &VAR_32, sizeof(IP));
         FUNC_5(&VAR_33->SubnetMask, &VAR_31, sizeof(IP));
         VAR_33->SubnetMaskLen = FUNC_31(&VAR_31);

         VAR_28.ClasslessRoute.NumExistingRoutes++;
        }
       }
      }
     }
    }

    if (VAR_23->Opcode != VAR_2)
    {
     char VAR_34[VAR_10];
     char VAR_35[64];
     IP VAR_36;

     FUNC_1(VAR_34, sizeof(VAR_34), VAR_14->MacAddressSrc, 6);
     FUNC_32(&VAR_36, VAR_24);
     FUNC_17(VAR_35, sizeof(VAR_35), &VAR_36);

     if (VAR_28.Opcode == VAR_5)
     {

      DHCP_LEASE *VAR_37 = FUNC_23(5000, VAR_14->MacAddressSrc, VAR_24, VAR_13->DhcpMask, VAR_23->Hostname);
      VAR_37->Id = FUNC_20(VAR_13->DhcpPendingLeaseList);
      FUNC_0(VAR_13->DhcpPendingLeaseList, VAR_37);

      FUNC_6("VirtualDhcpServer(): %s has been marked as pending for %s\n", VAR_35, VAR_34);
     }
     else
     {

      FUNC_6("VirtualDhcpServer(): %s has been assigned to %s\n", VAR_35, VAR_34);
     }
    }


    VAR_29 = FUNC_2(&VAR_28);
    if (VAR_29 != ((void*)0))
    {
     BUF *VAR_38 = FUNC_3(VAR_29);
     if (VAR_38 != ((void*)0))
     {
      UINT VAR_39 = VAR_14->L3.IPv4Header->SrcIP;
      if (VAR_39 == 0)
      {
       VAR_39 = 0xffffffff;
      }

      FUNC_33(VAR_13, VAR_20, VAR_39, FUNC_8(VAR_14->L4.UDPHeader->SrcPort),
       VAR_24, VAR_15->ClientMacAddress, VAR_38, VAR_15->HardwareType, VAR_15->HardwareAddressSize);


      FUNC_11(VAR_38);
     }
     FUNC_13(VAR_29);
    }
   }
  }
  else
  {

   DHCP_OPTION_LIST VAR_40;
   LIST *VAR_41;
   FUNC_34(&VAR_40, sizeof(VAR_40));

   VAR_40.Opcode = VAR_4;
   VAR_40.ServerAddress = VAR_13->HostIP;
   FUNC_30(VAR_40.DomainName, sizeof(VAR_40.DomainName), VAR_13->DhcpDomain);
   VAR_40.SubnetMask = VAR_13->DhcpMask;


   VAR_41 = FUNC_2(&VAR_40);
   if (VAR_41 != ((void*)0))
   {
    BUF *VAR_42 = FUNC_3(VAR_41);
    if (VAR_42 != ((void*)0))
    {
     UINT VAR_43 = VAR_14->L3.IPv4Header->SrcIP;
     if (VAR_43 == 0)
     {
      VAR_43 = 0xffffffff;
     }

     FUNC_33(VAR_13, VAR_20, VAR_43, FUNC_8(VAR_14->L4.UDPHeader->SrcPort),
      VAR_24, VAR_15->ClientMacAddress, VAR_42, VAR_15->HardwareType, VAR_15->HardwareAddressSize);


     FUNC_11(VAR_42);
    }
    FUNC_13(VAR_41);
   }
  }
 }


 FUNC_10(VAR_23);
}
