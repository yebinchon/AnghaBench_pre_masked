
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef scalar_t__ UINT64 ;
typedef int UINT ;
typedef int UCHAR ;
struct TYPE_21__ {int Now; } ;
struct TYPE_20__ {void* Identifier; int SeqNo; } ;
struct TYPE_19__ {scalar_t__ Type; scalar_t__ Protocol; int SrcIP; void* Checksum; int Code; } ;
struct TYPE_18__ {int PublicIP; TYPE_7__* v; int NatTableForRecv; } ;
struct TYPE_17__ {int SrcIp; void* SrcPort; int LastCommTime; int TotalRecv; } ;
typedef TYPE_1__ NATIVE_NAT_ENTRY ;
typedef TYPE_2__ NATIVE_NAT ;
typedef TYPE_3__ IPV4_HEADER ;
typedef TYPE_3__ ICMP_HEADER ;
typedef TYPE_5__ ICMP_ECHO ;


 int FUNC_0 (int*,int*,int) ;
 void* FUNC_1 (void*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 void* FUNC_4 (TYPE_3__*,int) ;
 int FUNC_5 (int,int) ;
 int VAR_5 ;
 int FUNC_6 (TYPE_2__*,scalar_t__,int ,int,int,TYPE_3__*,int,int) ;
 int FUNC_7 (TYPE_1__*,int ,int ,int ,int ,int ,int,void*) ;
 TYPE_1__* FUNC_8 (int ,TYPE_1__*) ;
 int FUNC_9 (TYPE_7__*,int,int,scalar_t__,TYPE_3__*,int,int ) ;
 TYPE_3__* FUNC_10 (int) ;

void FUNC_11(NATIVE_NAT *VAR_6, UINT VAR_7, UINT VAR_8, void *VAR_9, UINT VAR_10, UCHAR VAR_11, UINT VAR_12)
{
 ICMP_HEADER *VAR_13;

 if (VAR_6 == ((void*)0) || VAR_9 == ((void*)0))
 {
  return;
 }
 if (VAR_11 == 0)
 {
  VAR_11 = 1;
 }


 if (VAR_10 < sizeof(ICMP_HEADER))
 {
  return;
 }

 VAR_13 = (ICMP_HEADER *)VAR_9;

 if (VAR_13->Type == VAR_2)
 {
  UCHAR *VAR_14;
  UINT VAR_15;
  ICMP_ECHO *VAR_16;
  NATIVE_NAT_ENTRY VAR_17, *VAR_18;


  VAR_16 = (ICMP_ECHO *)(((UCHAR *)VAR_9) + sizeof(ICMP_HEADER));

  if (VAR_10 < (sizeof(ICMP_HEADER) + sizeof(ICMP_ECHO)))
  {
   return;
  }

  VAR_14 = ((UCHAR *)VAR_9) + sizeof(ICMP_HEADER) + sizeof(ICMP_ECHO);
  VAR_15 = VAR_10 - (sizeof(ICMP_HEADER) + sizeof(ICMP_ECHO));


  FUNC_7(&VAR_17, VAR_5, 0, 0, 0, 0, VAR_8, FUNC_1(VAR_16->Identifier));

  VAR_18 = FUNC_8(VAR_6->NatTableForRecv, &VAR_17);

  if (VAR_18 != ((void*)0))
  {

   VAR_13->Checksum = 0;
   VAR_16->Identifier = FUNC_1(VAR_18->SrcPort);
   VAR_13->Checksum = FUNC_4(VAR_13, VAR_10);

   VAR_18->LastCommTime = VAR_6->v->Now;
   VAR_18->TotalRecv += (UINT64)VAR_10;


   FUNC_9(VAR_6->v, VAR_18->SrcIp, VAR_7, VAR_4, VAR_13, VAR_10, FUNC_5(VAR_11 - 1, 1));
  }
 }
 else if (VAR_13->Type == VAR_1)
 {
  UCHAR *VAR_19;
  UINT VAR_20;
  ICMP_ECHO *VAR_21;


  VAR_21 = (ICMP_ECHO *)(((UCHAR *)VAR_9) + sizeof(ICMP_HEADER));

  if (VAR_10 < (sizeof(ICMP_HEADER) + sizeof(ICMP_ECHO)))
  {
   return;
  }

  VAR_19 = ((UCHAR *)VAR_9) + sizeof(ICMP_HEADER) + sizeof(ICMP_ECHO);
  VAR_20 = VAR_10 - (sizeof(ICMP_HEADER) + sizeof(ICMP_ECHO));

  if (VAR_8 == VAR_6->PublicIP)
  {

   ICMP_HEADER *VAR_22;
   ICMP_ECHO *VAR_23;
   UINT VAR_24 = sizeof(ICMP_HEADER) + sizeof(ICMP_ECHO) + VAR_20;

   VAR_22 = FUNC_10(VAR_24);
   VAR_23 = (ICMP_ECHO *)(((UCHAR *)VAR_22) + sizeof(ICMP_HEADER));

   VAR_22->Type = VAR_2;
   VAR_22->Code = VAR_13->Code;

   VAR_23->Identifier = VAR_21->Identifier;
   VAR_23->SeqNo = VAR_21->SeqNo;

   FUNC_0((UCHAR *)VAR_22 + sizeof(ICMP_HEADER) + sizeof(ICMP_ECHO),
    VAR_19, VAR_20);

   VAR_22->Checksum = FUNC_4(VAR_22, VAR_24);

   FUNC_6(VAR_6, VAR_4, 0, VAR_8, VAR_7, VAR_22, VAR_24, VAR_12);

   FUNC_2(VAR_22);
  }
 }
 else
 {
  if (VAR_13->Type == VAR_0 || VAR_13->Type == VAR_3)
  {

   if (VAR_10 >= (sizeof(ICMP_HEADER) + sizeof(ICMP_ECHO) + sizeof(IPV4_HEADER)))
   {
    IPV4_HEADER *VAR_25 = (IPV4_HEADER *)(((UCHAR *)VAR_9) + sizeof(ICMP_HEADER) + sizeof(ICMP_ECHO));
    UINT VAR_26 = VAR_10 - (sizeof(ICMP_HEADER) + sizeof(ICMP_ECHO));

    UINT VAR_27 = FUNC_3((UCHAR *)VAR_25, VAR_26);

    if (VAR_27 >= sizeof(IPV4_HEADER) && VAR_26 >= VAR_27)
    {
     if (VAR_25->Protocol == VAR_4)
     {

      UINT VAR_28 = VAR_26 - VAR_27;

      if (VAR_28 >= (sizeof(ICMP_HEADER) + sizeof(ICMP_ECHO)))
      {
       ICMP_HEADER *VAR_29 = (ICMP_HEADER *)(((UCHAR *)VAR_9) +
        sizeof(ICMP_HEADER) + sizeof(ICMP_ECHO) + VAR_27);

       if (VAR_29->Type == VAR_1)
       {
        ICMP_ECHO *VAR_30 = (ICMP_ECHO *)(((UCHAR *)VAR_29) + sizeof(ICMP_HEADER));
        NATIVE_NAT_ENTRY VAR_31, *VAR_32;


        FUNC_7(&VAR_31, VAR_5, 0, 0, 0, 0, VAR_25->SrcIP, FUNC_1(VAR_30->Identifier));

        VAR_32 = FUNC_8(VAR_6->NatTableForRecv, &VAR_31);

        if (VAR_32 != ((void*)0))
        {
         VAR_32->LastCommTime = VAR_6->v->Now;


         VAR_30->Identifier = FUNC_1(VAR_32->SrcPort);
         VAR_29->Checksum = 0;

         VAR_25->SrcIP = VAR_32->SrcIp;

         VAR_25->Checksum = 0;
         VAR_25->Checksum = FUNC_4(VAR_25, VAR_27);


         if (1)
         {
          UCHAR *VAR_33;
          UINT VAR_34;
          ICMP_ECHO *VAR_35;


          VAR_35 = (ICMP_ECHO *)(((UCHAR *)VAR_9) + sizeof(ICMP_HEADER));

          if (VAR_10 < (sizeof(ICMP_HEADER) + sizeof(ICMP_ECHO)))
          {
           return;
          }

          VAR_33 = ((UCHAR *)VAR_9) + sizeof(ICMP_HEADER) + sizeof(ICMP_ECHO);
          VAR_34 = VAR_10 - (sizeof(ICMP_HEADER) + sizeof(ICMP_ECHO));


          VAR_13->Checksum = 0;
          VAR_35->Identifier = FUNC_1(VAR_32->SrcPort);
          VAR_13->Checksum = FUNC_4(VAR_13, VAR_10);


          FUNC_9(VAR_6->v, VAR_32->SrcIp, VAR_7, VAR_4, VAR_13, VAR_10, FUNC_5(VAR_11 - 1, 1));
         }
        }
       }
      }
     }
    }
   }
  }
 }
}
