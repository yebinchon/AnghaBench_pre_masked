
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ USHORT ;
typedef scalar_t__ UINT ;
typedef int UCHAR ;
struct TYPE_12__ {scalar_t__ Identifier; scalar_t__ SeqNo; } ;
struct TYPE_11__ {scalar_t__ Checksum; scalar_t__ Type; int Code; } ;
struct TYPE_10__ {int Ok; scalar_t__ Type; int IpAddress; scalar_t__ DataSize; void* Data; int Ttl; int Code; } ;
struct TYPE_9__ {scalar_t__ Protocol; scalar_t__ TotalLength; int TimeToLive; int SrcIP; } ;
typedef TYPE_1__ IPV4_HEADER ;
typedef int IP ;
typedef TYPE_2__ ICMP_RESULT ;
typedef TYPE_3__ ICMP_HEADER ;
typedef TYPE_4__ ICMP_ECHO ;


 void* FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *,int *,int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int *,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_5 (TYPE_3__*,scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 TYPE_2__* FUNC_8 (int) ;

ICMP_RESULT *FUNC_9(IP *VAR_3, USHORT VAR_4, USHORT VAR_5, UCHAR *VAR_6, UINT VAR_7)
{
 ICMP_RESULT *VAR_8 = ((void*)0);
 UINT VAR_9;

 if (VAR_3 == ((void*)0) || FUNC_6(VAR_3) == 0 || VAR_6 == ((void*)0) || VAR_7 == 0)
 {
  return ((void*)0);
 }

 VAR_9 = VAR_7;

 if (1)
 {
  UINT VAR_10 = FUNC_3(VAR_6, VAR_9);
  if (VAR_10 >= sizeof(IPV4_HEADER) && (VAR_10 <= VAR_9))
  {
   IPV4_HEADER *VAR_11 = (IPV4_HEADER *)VAR_6;
   if ((FUNC_4(VAR_11) == 4) && (VAR_11->Protocol == VAR_2))
   {
    UINT VAR_12 = (UINT)FUNC_2(VAR_11->TotalLength);

    if ((VAR_12 >= sizeof(IPV4_HEADER)) && (VAR_12 <= VAR_9) && (VAR_12 >= VAR_10))
    {
     UINT VAR_13 = VAR_12 - VAR_10;
     ICMP_HEADER *VAR_14 = (ICMP_HEADER *)(VAR_6 + VAR_10);

     if (VAR_13 >= sizeof(ICMP_HEADER))
     {
      USHORT VAR_15 = VAR_14->Checksum;
      USHORT VAR_16;
      VAR_14->Checksum = 0;

      VAR_16 = FUNC_5(VAR_14, VAR_13);

      if (VAR_16 == VAR_15)
      {
       if (VAR_14->Type == VAR_1)
       {
        ICMP_ECHO *VAR_17 = (ICMP_ECHO *)(VAR_6 + VAR_10 + sizeof(ICMP_HEADER));
        if (VAR_13 >= (sizeof(ICMP_HEADER) + sizeof(ICMP_ECHO)))
        {
         if (FUNC_2(VAR_17->Identifier) == VAR_4 && (VAR_5 == 0 || FUNC_2(VAR_17->SeqNo) == VAR_5))
         {
          IP VAR_18;

          FUNC_7(&VAR_18, VAR_11->SrcIP);


          VAR_8 = FUNC_8(sizeof(ICMP_RESULT));

          VAR_8->Ok = 1;
          VAR_8->Ttl = VAR_11->TimeToLive;
          VAR_8->DataSize = VAR_13 - (sizeof(ICMP_HEADER) + sizeof(ICMP_ECHO));
          VAR_8->Data = FUNC_0(VAR_6 + VAR_10 + sizeof(ICMP_HEADER) + sizeof(ICMP_ECHO),
           VAR_8->DataSize);
          FUNC_1(&VAR_8->IpAddress, &VAR_18, sizeof(IP));
         }
        }
       }
       else if (VAR_14->Type == VAR_0)
       {

       }
       else
       {


        IPV4_HEADER *VAR_19 = (IPV4_HEADER *)(VAR_6 + VAR_10 + 4 + sizeof(ICMP_HEADER));
        if (VAR_13 >= (sizeof(ICMP_HEADER) + 4 + sizeof(IPV4_HEADER)))
        {
         UINT VAR_20 = FUNC_3((UCHAR *)VAR_19, VAR_13 - 4 - sizeof(ICMP_HEADER));
         if (VAR_20 >= sizeof(IPV4_HEADER))
         {
          if ((FUNC_4(VAR_19) == 4) && (VAR_19->Protocol == VAR_2))
          {
           if (VAR_13 >= (sizeof(ICMP_HEADER) + 4 + VAR_20 + sizeof(ICMP_HEADER) + sizeof(ICMP_ECHO)))
           {
            ICMP_HEADER *VAR_21 = (ICMP_HEADER *)(VAR_6 + VAR_10 + sizeof(ICMP_HEADER) + 4 + VAR_20);
            ICMP_ECHO *VAR_22 = (ICMP_ECHO *)(VAR_6 + VAR_10 + sizeof(ICMP_HEADER) + 4 + VAR_20 + sizeof(ICMP_HEADER));

            if (VAR_21->Type == VAR_0 && VAR_22->Identifier == FUNC_2(VAR_4) && (VAR_5 == 0 || VAR_22->SeqNo == FUNC_2(VAR_5)))
            {
             IP VAR_23;

             FUNC_7(&VAR_23, VAR_11->SrcIP);

             VAR_8 = FUNC_8(sizeof(ICMP_RESULT));

             VAR_8->Type = VAR_14->Type;
             VAR_8->Code = VAR_14->Code;
             VAR_8->Ttl = VAR_11->TimeToLive;
             VAR_8->DataSize = VAR_13 - (sizeof(ICMP_HEADER) + sizeof(ICMP_ECHO));
             VAR_8->Data = FUNC_0(VAR_6 + VAR_10 + sizeof(ICMP_HEADER) + sizeof(ICMP_ECHO),
              VAR_8->DataSize);
             FUNC_1(&VAR_8->IpAddress, &VAR_23, sizeof(IP));
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
  }
 }

 return VAR_8;
}
