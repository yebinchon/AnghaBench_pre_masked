
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;


struct TYPE_14__ {int IcmpRawSocketOk; } ;
typedef TYPE_1__ VH ;
typedef int UINT ;
typedef int UCHAR ;
struct TYPE_17__ {int Size; scalar_t__ Buf; } ;
struct TYPE_16__ {scalar_t__ Type; scalar_t__ TimeToLive; int Protocol; int SrcIP; void* Checksum; int TotalLength; } ;
struct TYPE_15__ {int DisconnectNow; int SrcIp; TYPE_11__* UdpRecvQueue; } ;
struct TYPE_13__ {scalar_t__ num_item; } ;
typedef TYPE_2__ NAT_ENTRY ;
typedef TYPE_3__ IPV4_HEADER ;
typedef TYPE_3__ ICMP_HEADER ;
typedef int ICMP_ECHO ;
typedef TYPE_5__ BLOCK ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (int *,int) ;
 TYPE_5__* FUNC_3 (TYPE_11__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_4 (TYPE_3__*,int) ;
 int FUNC_5 (scalar_t__,int) ;
 int FUNC_6 (TYPE_1__*,int ,int ,int ,int *,int,int ) ;

void FUNC_7(VH *VAR_2, NAT_ENTRY *VAR_3)
{

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return;
 }


 if (VAR_3->UdpRecvQueue->num_item != 0)
 {
  BLOCK *VAR_4;


  while ((VAR_4 = FUNC_3(VAR_3->UdpRecvQueue)))
  {

   UCHAR *VAR_5;
   UINT VAR_6;

   VAR_5 = (UCHAR *)VAR_4->Buf;
   VAR_6 = VAR_4->Size;

   if (VAR_6 >= sizeof(IPV4_HEADER))
   {
    IPV4_HEADER *VAR_7 = (IPV4_HEADER *)VAR_5;
    UINT VAR_8 = FUNC_2((UCHAR *)VAR_7, VAR_6);

    if (VAR_8 >= sizeof(IPV4_HEADER) && (FUNC_0(VAR_7->TotalLength) >= VAR_8))
    {
     UCHAR *VAR_9 = VAR_5 + VAR_8;
     UINT VAR_10 = FUNC_0(VAR_7->TotalLength) - VAR_8;

     if (VAR_10 >= sizeof(ICMP_HEADER) + sizeof(ICMP_ECHO))
     {
      ICMP_HEADER *VAR_11 = (ICMP_HEADER *)(VAR_5 + VAR_8);
      UINT VAR_12 = VAR_10;

      if (VAR_11->Type == VAR_0 || VAR_11->Type == VAR_1)
      {

       if (VAR_12 >= (sizeof(ICMP_HEADER) + sizeof(ICMP_ECHO) + sizeof(IPV4_HEADER)))
       {
        IPV4_HEADER *VAR_13 = (IPV4_HEADER *)(VAR_5 + VAR_8 + sizeof(ICMP_HEADER) + sizeof(ICMP_ECHO));
        UINT VAR_14 = VAR_12 - (sizeof(ICMP_HEADER) + sizeof(ICMP_ECHO));

        UINT VAR_15 = FUNC_2((UCHAR *)VAR_13, VAR_14);

        if (VAR_15 >= sizeof(IPV4_HEADER))
        {
         VAR_13->SrcIP = VAR_3->SrcIp;
         VAR_13->Checksum = 0;
         VAR_13->Checksum = FUNC_4(VAR_13, VAR_15);
        }
       }
      }


      VAR_11->Checksum = FUNC_4(VAR_11, VAR_12);

      FUNC_6(VAR_2, VAR_3->SrcIp, VAR_7->SrcIP, VAR_7->Protocol, VAR_9, VAR_10,
       FUNC_5(VAR_7->TimeToLive - 1, 1));
     }
    }
   }

   FUNC_1(VAR_4);
  }

  if (VAR_2->IcmpRawSocketOk == 0)
  {

   VAR_3->DisconnectNow = 1;
  }
 }
}
