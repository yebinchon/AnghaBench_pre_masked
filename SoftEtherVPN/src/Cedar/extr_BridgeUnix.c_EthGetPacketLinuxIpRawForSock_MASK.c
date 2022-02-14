
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_18__ {scalar_t__ Checksum; } ;
typedef TYPE_3__ UDP_HEADER ;
typedef int UCHAR ;
struct TYPE_22__ {int* RawIP_TmpBuffer; int* RawIpYourMacAddr; int* RawIpMyMacAddr; int MyPhysicalIPForce; int MyPhysicalIP; int YourIP; int RawIP_TmpBufferSize; } ;
struct TYPE_21__ {scalar_t__ Type; scalar_t__ Protocol; void* Checksum; void* SrcIP; void* DstIP; } ;
struct TYPE_17__ {TYPE_6__* ICMPHeader; TYPE_3__* UDPHeader; int * TCPHeader; } ;
struct TYPE_16__ {TYPE_6__* IPv4Header; } ;
struct TYPE_20__ {scalar_t__ TypeL3; scalar_t__ TypeL4; int PacketSize; int PayloadSize; scalar_t__ PacketData; TYPE_2__ L4; TYPE_1__ L3; } ;
struct TYPE_19__ {scalar_t__ IgnoreRecvErr; } ;
typedef int TCP_HEADER ;
typedef TYPE_4__ SOCK ;
typedef TYPE_5__ PKT ;
typedef TYPE_6__ IPV4_HEADER ;
typedef int IP ;
typedef TYPE_6__ ICMP_HEADER ;
typedef int ICMP_ECHO ;
typedef TYPE_8__ ETH ;


 scalar_t__ FUNC_0 (int*,int*) ;
 int FUNC_1 (int*,int*,int) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (int*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 void* FUNC_5 (int *) ;
 int FUNC_6 (TYPE_6__*) ;
 scalar_t__ VAR_4 ;
 void* FUNC_7 (TYPE_6__*,int) ;
 scalar_t__ FUNC_8 (int*) ;
 scalar_t__ FUNC_9 (int*) ;
 int FUNC_10 (int*) ;
 int FUNC_11 (int*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int* FUNC_12 (int) ;
 TYPE_5__* FUNC_13 (int*,int) ;
 int FUNC_14 (TYPE_4__*,int*,int*,int*,int ) ;
 int VAR_10 ;
 int FUNC_15 (int*,void*) ;

UINT FUNC_16(ETH *VAR_11, void **VAR_12, SOCK *VAR_13, UINT VAR_14)
{
 UCHAR *VAR_15;
 UINT VAR_16;
 IP VAR_17;
 UINT VAR_18;
 UINT VAR_19 = VAR_3;
 UCHAR *VAR_20;
 PKT *VAR_21;
 bool VAR_22 = 0;

 if (VAR_11 == ((void*)0) || VAR_12 == ((void*)0))
 {
  return VAR_3;
 }

 VAR_15 = VAR_11->RawIP_TmpBuffer;

LABEL_RETRY:
 *VAR_12 = ((void*)0);

 VAR_16 = FUNC_14(VAR_13, &VAR_17, &VAR_18, VAR_15, VAR_11->RawIP_TmpBufferSize);
 if (VAR_16 == VAR_10)
 {
  return 0;
 }

 if (VAR_16 == 0)
 {
  if (VAR_13->IgnoreRecvErr)
  {
   return 0;
  }
  else
  {
   return VAR_3;
  }
 }

 VAR_19 = 14 + VAR_16;
 VAR_20 = FUNC_12(VAR_19);
 *VAR_12 = VAR_20;

 FUNC_1(VAR_20, VAR_11->RawIpYourMacAddr, 6);
 FUNC_1(VAR_20 + 6, VAR_11->RawIpMyMacAddr, 6);
 VAR_20[12] = 0x08;
 VAR_20[13] = 0x00;
 FUNC_1(VAR_20 + 14, VAR_15, VAR_16);


 VAR_21 = FUNC_13(VAR_20, VAR_19);
 if (VAR_21 != ((void*)0))
 {
  if (VAR_21->TypeL3 == VAR_5)
  {
   IPV4_HEADER *VAR_23;
   IP VAR_24;

   VAR_23 = VAR_21->L3.IPv4Header;

   FUNC_15(&VAR_24, VAR_23->DstIP);

   if (FUNC_11(&VAR_11->MyPhysicalIPForce) == 0 && FUNC_0(&VAR_11->MyPhysicalIPForce, &VAR_24) == 0 ||
    (FUNC_9(&VAR_24) && FUNC_10(&VAR_24) == 0 && FUNC_8(&VAR_24)))
   {
    if (FUNC_11(&VAR_11->MyPhysicalIPForce) && FUNC_0(&VAR_11->MyPhysicalIP, &VAR_24) != 0)
    {

     FUNC_1(&VAR_11->MyPhysicalIP, &VAR_24, sizeof(IP));

    }

    if (FUNC_11(&VAR_11->MyPhysicalIPForce) == 0)
    {
     FUNC_1(&VAR_11->MyPhysicalIP, &VAR_11->MyPhysicalIPForce, sizeof(IP));
    }

    VAR_23->DstIP = FUNC_5(&VAR_11->YourIP);
    VAR_23->Checksum = 0;
    VAR_23->Checksum = FUNC_7(VAR_23, FUNC_6(VAR_23) * 5);

    if (VAR_21->TypeL4 == VAR_8)
    {
     TCP_HEADER *VAR_25 = VAR_21->L4.TCPHeader;
     VAR_22 = 1;
    }
    else if (VAR_21->TypeL4 == VAR_9)
    {
     UDP_HEADER *VAR_26 = VAR_21->L4.UDPHeader;

     VAR_26->Checksum = 0;

     VAR_22 = 1;
    }
    else if (VAR_21->TypeL4 == VAR_7)
    {
     ICMP_HEADER *VAR_27 = VAR_21->L4.ICMPHeader;

     if (VAR_27->Type == VAR_0 || VAR_27->Type == VAR_2)
     {

      UINT VAR_28 = VAR_21->PacketSize - ((UCHAR *)VAR_27 - (UCHAR *)VAR_21->PacketData);
      UCHAR *VAR_29 = (UCHAR *)VAR_27;
      IPV4_HEADER *VAR_30 = (IPV4_HEADER *)(((UCHAR *)VAR_29) + sizeof(ICMP_HEADER) + sizeof(ICMP_ECHO));
      UINT VAR_31 = VAR_28 - (sizeof(ICMP_HEADER) + sizeof(ICMP_ECHO));

      UINT VAR_32 = FUNC_4((UCHAR *)VAR_30, VAR_31);

      if (VAR_32 >= sizeof(IPV4_HEADER) && VAR_31 >= VAR_32)
      {
       if (VAR_30->Protocol == VAR_4)
       {

        UINT VAR_33 = VAR_31 - VAR_32;

        if (VAR_33 >= (sizeof(ICMP_HEADER) + sizeof(ICMP_ECHO)))
        {
         ICMP_HEADER *VAR_34 = (ICMP_HEADER *)(((UCHAR *)VAR_29) +
          sizeof(ICMP_HEADER) + sizeof(ICMP_ECHO) + VAR_32);

         if (VAR_34->Type == VAR_1)
         {
          ICMP_ECHO *VAR_35 = (ICMP_ECHO *)(((UCHAR *)VAR_34) + sizeof(ICMP_HEADER));

          VAR_34->Checksum = 0;
          VAR_30->SrcIP = FUNC_5(&VAR_11->YourIP);
          VAR_30->Checksum = 0;
          VAR_30->Checksum = FUNC_7(VAR_30, VAR_32);


          if (1)
          {
           UCHAR *VAR_36;
           UINT VAR_37;
           ICMP_ECHO *VAR_38;


           VAR_38 = (ICMP_ECHO *)(((UCHAR *)VAR_29) + sizeof(ICMP_HEADER));

           if (VAR_28 >= (sizeof(ICMP_HEADER) + sizeof(ICMP_ECHO)))
           {
            VAR_36 = ((UCHAR *)VAR_29) + sizeof(ICMP_HEADER) + sizeof(ICMP_ECHO);
            VAR_37 = VAR_28 - (sizeof(ICMP_HEADER) + sizeof(ICMP_ECHO));


            VAR_27->Checksum = 0;
            VAR_27->Checksum = FUNC_7(VAR_27, VAR_28);
           }
          }
         }
        }
       }
      }
     }

     VAR_27->Checksum = 0;
     VAR_27->Checksum = FUNC_7(VAR_27, VAR_21->PayloadSize);

     VAR_22 = 1;
    }
    else if (VAR_21->TypeL4 == VAR_6)
    {
     VAR_22 = 1;
    }
   }
  }

  FUNC_3(VAR_21);
 }

 if (VAR_22 == 0)
 {
  FUNC_2(*VAR_12);
  *VAR_12 = ((void*)0);

  goto LABEL_RETRY;
 }

 return VAR_19;
}
