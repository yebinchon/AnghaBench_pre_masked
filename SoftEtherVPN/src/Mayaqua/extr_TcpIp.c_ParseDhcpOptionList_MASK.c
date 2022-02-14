
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int UINT ;
typedef int UCHAR ;
struct TYPE_7__ {int Size; int* Data; } ;
struct TYPE_6__ {int Opcode; int ClasslessRoute; int WinsServer2; int WinsServer; int DnsServer2; int DnsServer; int Gateway; int * DomainName; int ServerAddress; int LeaseTime; int SubnetMask; int * Hostname; int RequestedIp; } ;
typedef int LIST ;
typedef TYPE_1__ DHCP_OPTION_LIST ;
typedef TYPE_2__ DHCP_OPTION ;


 int FUNC_0 (int *,int*,int) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;


 int FUNC_1 (int *,int*,int) ;
 int FUNC_2 (int *) ;
 TYPE_2__* FUNC_3 (int *,int ) ;
 int FUNC_4 (int,int) ;
 int * FUNC_5 (void*,int ) ;
 int FUNC_6 (int*) ;
 int FUNC_7 (int *,int) ;
 TYPE_1__* FUNC_8 (int) ;

DHCP_OPTION_LIST *FUNC_9(void *VAR_12, UINT VAR_13)
{
 DHCP_OPTION_LIST *VAR_14;
 LIST *VAR_15;
 DHCP_OPTION *VAR_16;

 if (VAR_12 == ((void*)0))
 {
  return ((void*)0);
 }


 VAR_15 = FUNC_5(VAR_12, VAR_13);
 if (VAR_15 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_14 = FUNC_8(sizeof(DHCP_OPTION_LIST));


 VAR_16 = FUNC_3(VAR_15, VAR_6);
 if (VAR_16 != ((void*)0))
 {
  if (VAR_16->Size == 1)
  {
   VAR_14->Opcode = *((UCHAR *)VAR_16->Data);
  }
 }

 switch (VAR_14->Opcode)
 {
 case 130:
 case 128:


  VAR_16 = FUNC_3(VAR_15, VAR_8);
  if (VAR_16 != ((void*)0) && VAR_16->Size == 4)
  {
   FUNC_0(&VAR_14->RequestedIp, VAR_16->Data, 4);
  }

  VAR_16 = FUNC_3(VAR_15, VAR_4);
  if (VAR_16 != ((void*)0))
  {
   if (VAR_16->Size > 1)
   {
    FUNC_0(VAR_14->Hostname, VAR_16->Data, FUNC_4(VAR_16->Size, sizeof(VAR_14->Hostname) - 1));
   }
  }
  break;

 case 129:
 case 131:

  VAR_16 = FUNC_3(VAR_15, VAR_10);
  if (VAR_16 != ((void*)0) && VAR_16->Size >= 4)
  {
   FUNC_0(&VAR_14->SubnetMask, VAR_16->Data, 4);
  }


  VAR_16 = FUNC_3(VAR_15, VAR_5);
  if (VAR_16 != ((void*)0) && VAR_16->Size == 4)
  {
   VAR_14->LeaseTime = FUNC_6(VAR_16->Data);
  }


  VAR_16 = FUNC_3(VAR_15, VAR_9);
  if (VAR_16 != ((void*)0) && VAR_16->Size >= 4)
  {
   FUNC_0(&VAR_14->ServerAddress, VAR_16->Data, 4);
  }


  VAR_16 = FUNC_3(VAR_15, VAR_2);
  if (VAR_16 != ((void*)0) && VAR_16->Size >= 1)
  {
   FUNC_7(VAR_14->DomainName, sizeof(VAR_14->DomainName));
   FUNC_0(VAR_14->DomainName, VAR_16->Data, FUNC_4(VAR_16->Size, sizeof(VAR_14->DomainName) - 1));
  }


  VAR_16 = FUNC_3(VAR_15, VAR_3);
  if (VAR_16 != ((void*)0) && VAR_16->Size >= 4)
  {
   FUNC_0(&VAR_14->Gateway, VAR_16->Data, 4);
  }


  VAR_16 = FUNC_3(VAR_15, VAR_1);
  if (VAR_16 != ((void*)0) && VAR_16->Size >= 4)
  {
   FUNC_0(&VAR_14->DnsServer, VAR_16->Data, 4);

   if (VAR_16->Size >= 8)
   {
    FUNC_0(&VAR_14->DnsServer2, ((UCHAR *)VAR_16->Data) + 4, 4);
   }
  }


  VAR_16 = FUNC_3(VAR_15, VAR_11);
  if (VAR_16 != ((void*)0) && VAR_16->Size >= 4)
  {
   FUNC_0(&VAR_14->WinsServer, VAR_16->Data, 4);

   if (VAR_16->Size >= 8)
   {
    FUNC_0(&VAR_14->WinsServer2, ((UCHAR *)VAR_16->Data) + 4, 4);
   }
  }



  VAR_16 = FUNC_3(VAR_15, VAR_0);
  if (VAR_16 != ((void*)0))
  {
   FUNC_1(&VAR_14->ClasslessRoute, VAR_16->Data, VAR_16->Size);
  }

  VAR_16 = FUNC_3(VAR_15, VAR_7);
  if (VAR_16 != ((void*)0))
  {
   FUNC_1(&VAR_14->ClasslessRoute, VAR_16->Data, VAR_16->Size);
  }

  break;
 }


 FUNC_2(VAR_15);

 return VAR_14;
}
