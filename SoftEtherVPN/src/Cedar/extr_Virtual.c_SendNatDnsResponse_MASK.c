
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ HostIP; } ;
typedef TYPE_1__ VH ;
typedef int USHORT ;
typedef scalar_t__ UINT ;
typedef int UCHAR ;
struct TYPE_19__ {scalar_t__ Size; int Buf; } ;
struct TYPE_18__ {int Flag1; int Flag2; scalar_t__ AdditionalRRs; scalar_t__ AuthorityRRs; void* AnswerRRs; void* NumQuery; void* TransactionId; } ;
struct TYPE_17__ {int DnsGetIpFromHost; int DnsOk; scalar_t__ DestIp; int DestPort; int SrcPort; int SrcIp; scalar_t__ DnsTransactionId; int DnsResponseHostName; int DnsResponseIp; int DnsTargetHostName; } ;
typedef TYPE_2__ NAT_ENTRY ;
typedef TYPE_3__ DNSV4_HEADER ;
typedef TYPE_4__ BUF ;


 int FUNC_0 (TYPE_4__*,int ,int) ;
 int FUNC_1 (TYPE_4__*,int *) ;
 int FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (int *,int ,scalar_t__) ;
 void* FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_4__*) ;
 TYPE_4__* FUNC_8 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_9 (TYPE_1__*,int ,int ,scalar_t__,int ,TYPE_3__*,scalar_t__) ;
 TYPE_3__* FUNC_10 (scalar_t__) ;

void FUNC_11(VH *VAR_2, NAT_ENTRY *VAR_3)
{
 BUF *VAR_4;
 UINT VAR_5;
 DNSV4_HEADER *VAR_6;
 UINT VAR_7;

 if (VAR_3 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }


 VAR_4 = FUNC_8();


 if (VAR_3->DnsGetIpFromHost == 0)
 {
  FUNC_0(VAR_4, VAR_3->DnsTargetHostName, 0);
 }
 else
 {
  FUNC_0(VAR_4, VAR_3->DnsTargetHostName, 1);
 }


 if (VAR_3->DnsOk)
 {
  if (VAR_3->DnsGetIpFromHost == 0)
  {
   FUNC_1(VAR_4, &VAR_3->DnsResponseIp);
  }
  else
  {
   FUNC_2(VAR_4, VAR_3->DnsResponseHostName);
  }
 }


 VAR_5 = sizeof(DNSV4_HEADER) + VAR_4->Size;

 VAR_6 = FUNC_10(VAR_5);
 VAR_6->TransactionId = FUNC_4((USHORT)VAR_3->DnsTransactionId);


 if (VAR_3->DnsOk)
 {
  VAR_6->Flag1 = 0x85;
  VAR_6->Flag2 = 0x80;
 }
 else
 {
  VAR_6->Flag1 = 0x85;
  VAR_6->Flag2 = 0x83;
 }

 VAR_6->NumQuery = FUNC_4(1);
 VAR_6->AnswerRRs = FUNC_4(VAR_3->DnsOk != 0 ? 1 : 0);
 VAR_6->AuthorityRRs = 0;
 VAR_6->AdditionalRRs = 0;


 VAR_7 = VAR_3->DestIp;
 if (VAR_7 == FUNC_5(VAR_0) && VAR_3->DestPort == VAR_1)
 {

  VAR_7 = VAR_2->HostIP;

  VAR_6->Flag1 = 0x84;
  VAR_6->Flag2 = 0x00;
 }


 FUNC_3(((UCHAR *)VAR_6) + sizeof(DNSV4_HEADER), VAR_4->Buf, VAR_4->Size);


 FUNC_9(VAR_2, VAR_3->SrcIp, VAR_3->SrcPort, VAR_7, VAR_3->DestPort, VAR_6, VAR_5);


 FUNC_6(VAR_6);
 FUNC_7(VAR_4);
}
