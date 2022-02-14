
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int opcode ;
typedef scalar_t__ UCHAR ;
struct TYPE_11__ {int NumExistingRoutes; } ;
struct TYPE_10__ {int Size; scalar_t__* Buf; } ;
struct TYPE_9__ {scalar_t__ ServerAddress; scalar_t__ LeaseTime; scalar_t__* DomainName; scalar_t__ SubnetMask; scalar_t__ Gateway; TYPE_7__ ClasslessRoute; int DnsServer2; int DnsServer; scalar_t__ Opcode; } ;
typedef int LIST ;
typedef TYPE_1__ DHCP_OPTION_LIST ;
typedef TYPE_2__ BUF ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_2__* FUNC_1 (TYPE_7__*) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_2__* FUNC_3 () ;
 int FUNC_4 (int ,scalar_t__*,int) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__*) ;
 int FUNC_7 (TYPE_2__*,int *,int) ;

LIST *FUNC_8(DHCP_OPTION_LIST *VAR_9)
{
 LIST *VAR_10;
 UCHAR VAR_11;
 BUF *VAR_12;

 if (VAR_9 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_10 = FUNC_5(((void*)0));


 VAR_11 = (UCHAR)VAR_9->Opcode;
 FUNC_0(VAR_10, FUNC_4(VAR_5, &VAR_11, sizeof(VAR_11)));
 FUNC_0(VAR_10, FUNC_4(VAR_7, &VAR_9->ServerAddress, sizeof(VAR_9->ServerAddress)));

 if (VAR_9->LeaseTime != 0)
 {
  FUNC_0(VAR_10, FUNC_4(VAR_4, &VAR_9->LeaseTime, sizeof(VAR_9->LeaseTime)));
 }

 if (FUNC_6(VAR_9->DomainName) != 0 && VAR_9->DnsServer != 0)
 {
  FUNC_0(VAR_10, FUNC_4(VAR_2, VAR_9->DomainName, FUNC_6(VAR_9->DomainName)));
 }
 if (VAR_9->SubnetMask != 0)
 {
  FUNC_0(VAR_10, FUNC_4(VAR_8, &VAR_9->SubnetMask, sizeof(VAR_9->SubnetMask)));
 }
 if (VAR_9->Gateway != 0)
 {
  FUNC_0(VAR_10, FUNC_4(VAR_3, &VAR_9->Gateway, sizeof(VAR_9->Gateway)));
 }

 VAR_12 = FUNC_3();

 if (VAR_9->DnsServer != 0)
 {
  FUNC_7(VAR_12, &VAR_9->DnsServer, sizeof(VAR_9->DnsServer));
 }
 if (VAR_9->DnsServer2 != 0)
 {
  FUNC_7(VAR_12, &VAR_9->DnsServer2, sizeof(VAR_9->DnsServer2));
 }

 if (VAR_12->Size >= 1)
 {
  FUNC_0(VAR_10, FUNC_4(VAR_1, VAR_12->Buf, VAR_12->Size));
 }

 FUNC_2(VAR_12);

 if (VAR_9->ClasslessRoute.NumExistingRoutes >= 1)
 {
  BUF *VAR_13 = FUNC_1(&VAR_9->ClasslessRoute);

  if (VAR_13 != ((void*)0))
  {
   FUNC_0(VAR_10, FUNC_4(VAR_0, VAR_13->Buf, VAR_13->Size));
   FUNC_0(VAR_10, FUNC_4(VAR_6, VAR_13->Buf, VAR_13->Size));

   FUNC_2(VAR_13);
  }
 }

 return VAR_10;
}
