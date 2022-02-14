
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {int NatTable; int Now; int Counter; } ;
typedef TYPE_1__ VH ;
typedef void* UINT ;
struct TYPE_18__ {scalar_t__ SecureNAT_MaxDnsSessionsPerIp; } ;
struct TYPE_17__ {int DisconnectNow; int DnsGetIpFromHost; int DnsTargetHostName; int LastCommTime; int CreatedTime; void* DnsTransactionId; void* DestPort; void* DestIp; void* SrcPort; void* SrcIp; int Protocol; int lock; TYPE_1__* v; int Id; } ;
typedef TYPE_2__ NAT_ENTRY ;
typedef int IP ;
typedef TYPE_3__ HUB_OPTION ;


 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,void*,char*,void*) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*,void*,int ,int) ;
 TYPE_2__* FUNC_6 (TYPE_1__*,void*,int ) ;
 int FUNC_7 (char*,int ,int *) ;
 int FUNC_8 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_9 (TYPE_1__*) ;
 int FUNC_10 () ;
 int FUNC_11 (int *,void*) ;
 TYPE_2__* FUNC_12 (int) ;

NAT_ENTRY *FUNC_13(VH *VAR_2, UINT VAR_3, UINT VAR_4, UINT VAR_5, UINT VAR_6,
      UINT VAR_7, bool VAR_8, char *VAR_9)
{
 NAT_ENTRY *VAR_10;
 HUB_OPTION *VAR_11;

 if (VAR_2 == ((void*)0) || VAR_9 == ((void*)0))
 {
  return ((void*)0);
 }

 if (FUNC_1(VAR_2) == 0)
 {
  return ((void*)0);
 }

 VAR_11 = FUNC_9(VAR_2);
 if (VAR_11 != ((void*)0) && VAR_11->SecureNAT_MaxDnsSessionsPerIp != 0)
 {
  if (FUNC_5(VAR_2, VAR_3, VAR_1, 0) >= VAR_11->SecureNAT_MaxDnsSessionsPerIp)
  {
   NAT_ENTRY *VAR_12 = FUNC_6(VAR_2, VAR_3, VAR_1);

   if (VAR_12 != ((void*)0))
   {
    FUNC_4(VAR_2, VAR_12);
   }
  }
 }

 VAR_10 = FUNC_12(sizeof(NAT_ENTRY));
 VAR_10->Id = FUNC_8(VAR_2->Counter);
 VAR_10->v = VAR_2;
 VAR_10->lock = FUNC_10();
 VAR_10->Protocol = VAR_1;
 VAR_10->SrcIp = VAR_3;
 VAR_10->SrcPort = VAR_4;
 VAR_10->DestIp = VAR_5;
 VAR_10->DestPort = VAR_6;
 VAR_10->DnsTransactionId = VAR_7;
 VAR_10->CreatedTime = VAR_10->LastCommTime = VAR_2->Now;
 VAR_10->DisconnectNow = 0;

 VAR_10->DnsGetIpFromHost = 0;
 VAR_10->DnsTargetHostName = FUNC_2(VAR_9);

 FUNC_0(VAR_2->NatTable, VAR_10);


 {
  IP VAR_13, VAR_14;
  char VAR_15[VAR_0], VAR_16[VAR_0];
  FUNC_11(&VAR_13, VAR_3);
  FUNC_11(&VAR_14, VAR_5);
  FUNC_7(VAR_15, 0, &VAR_13);
  FUNC_7(VAR_16, 0, &VAR_14);
  FUNC_3("NAT_ENTRY: CreateNatDns %s %u -> %s %u\n", VAR_15, VAR_4, VAR_16, VAR_6);
 }



 return VAR_10;
}
