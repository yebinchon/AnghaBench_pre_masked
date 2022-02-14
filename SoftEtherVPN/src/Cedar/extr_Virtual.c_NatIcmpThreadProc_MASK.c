
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_13__ ;


typedef int ipv4 ;
typedef int icmp ;
typedef int echo ;
typedef void* USHORT ;
typedef int UINT ;
typedef int UCHAR ;
struct TYPE_25__ {int Size; int Buf; } ;
struct TYPE_24__ {int Timeout; int DataSize; scalar_t__ Type; scalar_t__ Code; int Ttl; TYPE_4__* Data; scalar_t__ Ok; int IpAddress; } ;
struct TYPE_23__ {scalar_t__ Type; scalar_t__ Code; int DstIP; void* TotalLength; void* SeqNo; void* Identifier; int SrcIP; int Protocol; int TimeToLive; } ;
struct TYPE_22__ {int IcmpOriginalCopySize; int IcmpTaskFinished; TYPE_2__* v; TYPE_13__* IcmpResponseBlock; TYPE_4__* IcmpOriginalCopy; TYPE_1__* IcmpQueryBlock; int DestIp; } ;
struct TYPE_21__ {int SockEvent; } ;
struct TYPE_20__ {int Size; int Ttl; int * Buf; } ;
struct TYPE_19__ {int Ttl; } ;
typedef int THREAD ;
typedef TYPE_3__ NAT_ENTRY ;
typedef TYPE_4__ IPV4_HEADER ;
typedef int IP ;
typedef TYPE_5__ ICMP_RESULT ;
typedef TYPE_4__ ICMP_HEADER ;
typedef TYPE_4__ ICMP_ECHO ;
typedef TYPE_8__ BUF ;


 int FUNC_0 (int ,int ) ;
 void* FUNC_1 (void*) ;
 int FUNC_2 (TYPE_8__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_4__*,int) ;
 int FUNC_5 (TYPE_4__*,int) ;
 int VAR_1 ;
 TYPE_5__* FUNC_6 (int *,int ,int *,int,int ) ;
 int FUNC_7 (TYPE_5__*) ;
 int VAR_2 ;
 TYPE_13__* FUNC_8 (int ,int ,int ) ;
 TYPE_8__* FUNC_9 () ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (TYPE_8__*,TYPE_4__*,int) ;
 int FUNC_13 (TYPE_4__*,int) ;

void FUNC_14(THREAD *VAR_3, void *VAR_4)
{
 NAT_ENTRY *VAR_5;
 ICMP_RESULT *VAR_6 = ((void*)0);
 USHORT VAR_7 = 0, VAR_8 = 0;

 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
 {
  return;
 }

 VAR_5 = (NAT_ENTRY *)VAR_4;

 if (VAR_5->IcmpQueryBlock)
 {
  UCHAR *VAR_9 = VAR_5->IcmpQueryBlock->Buf;
  UINT VAR_10 = VAR_5->IcmpQueryBlock->Size;

  if (VAR_10 >= (sizeof(ICMP_HEADER) + sizeof(ICMP_ECHO)))
  {
   ICMP_HEADER *VAR_11 = (ICMP_HEADER *)VAR_9;
   ICMP_ECHO *VAR_12 = (ICMP_ECHO *)(VAR_9 + sizeof(ICMP_HEADER));

   if (VAR_11->Type == VAR_0 && VAR_11->Code == 0)
   {
    UCHAR *VAR_13 = VAR_9 + sizeof(ICMP_HEADER) + sizeof(ICMP_ECHO);
    UINT VAR_14 = VAR_10 - sizeof(ICMP_HEADER) - sizeof(ICMP_ECHO);
    IP VAR_15;

    VAR_7 = FUNC_1(VAR_12->Identifier);
    VAR_8 = FUNC_1(VAR_12->SeqNo);

    FUNC_11(&VAR_15, VAR_5->DestIp);


    VAR_6 = FUNC_6(&VAR_15, VAR_5->IcmpQueryBlock->Ttl,
     VAR_13, VAR_14, VAR_2);
   }
  }
 }

 if (VAR_6 != ((void*)0) && VAR_6->Timeout == 0)
 {

  IPV4_HEADER VAR_16;
  ICMP_HEADER VAR_17;
  ICMP_ECHO VAR_18;
  BUF *VAR_19 = FUNC_9();


  FUNC_13(&VAR_16, sizeof(VAR_16));
  FUNC_5(&VAR_16, 4);
  FUNC_4(&VAR_16, sizeof(IPV4_HEADER) / 4);
  VAR_16 = VAR_6->Ttl;
  VAR_16 = VAR_1;
  VAR_16 = FUNC_3(&VAR_6->IpAddress);
  VAR_16 = 0x01010101;



  FUNC_13(&VAR_17, sizeof(VAR_17));
  FUNC_13(&VAR_18, sizeof(VAR_18));

  if (VAR_6->Ok)
  {

   VAR_18.Identifier = FUNC_1(VAR_7);
   VAR_18.SeqNo = FUNC_1(VAR_8);

   VAR_16 = FUNC_1((USHORT)(sizeof(VAR_16) + sizeof(VAR_17) + sizeof(VAR_18) + VAR_6->DataSize));

   FUNC_12(VAR_19, &VAR_16, sizeof(VAR_16));
   FUNC_12(VAR_19, &VAR_17, sizeof(VAR_17));
   FUNC_12(VAR_19, &VAR_18, sizeof(VAR_18));
   FUNC_12(VAR_19, VAR_6->Data, VAR_6->DataSize);
  }
  else
  {

   VAR_17.Type = VAR_6->Type;
   VAR_17.Code = VAR_6->Code;
   VAR_18.Identifier = FUNC_1(VAR_7);
   VAR_18.SeqNo = FUNC_1(VAR_8);

   VAR_16 = FUNC_1((USHORT)(sizeof(VAR_16) + sizeof(VAR_17) + sizeof(VAR_18) + VAR_5->IcmpOriginalCopySize));

   FUNC_12(VAR_19, &VAR_16, sizeof(VAR_16));
   FUNC_12(VAR_19, &VAR_17, sizeof(VAR_17));
   FUNC_12(VAR_19, &VAR_18, sizeof(VAR_18));


   FUNC_12(VAR_19, VAR_5->IcmpOriginalCopy, VAR_5->IcmpOriginalCopySize);
  }

  VAR_5->IcmpResponseBlock = FUNC_8(FUNC_0(VAR_19->Buf, VAR_19->Size), VAR_19->Size, 0);
  VAR_5->IcmpResponseBlock->Ttl = VAR_6->Ttl;

  FUNC_2(VAR_19);
 }
 FUNC_7(VAR_6);


 VAR_5->IcmpTaskFinished = 1;
 FUNC_10(VAR_5->v->SockEvent);
}
