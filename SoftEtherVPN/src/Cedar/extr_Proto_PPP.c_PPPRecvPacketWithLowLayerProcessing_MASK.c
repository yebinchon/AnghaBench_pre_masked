
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef scalar_t__ USHORT ;
typedef scalar_t__ UCHAR ;
struct TYPE_19__ {int Size; void* Buf; } ;
struct TYPE_18__ {int Protocol; int IsControl; int DataSize; TYPE_1__* Lcp; scalar_t__* Data; } ;
struct TYPE_17__ {int IsTerminateReceived; int NextId; } ;
struct TYPE_16__ {scalar_t__ Code; int DataSize; void* Data; int Id; } ;
typedef TYPE_2__ PPP_SESSION ;
typedef TYPE_3__ PPP_PACKET ;
typedef TYPE_4__ BUF ;


 void* FUNC_0 (void*,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_3__*) ;
 TYPE_4__* FUNC_4 () ;
 void* FUNC_5 (scalar_t__,int ) ;
 TYPE_3__* FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_8 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_9 (int) ;
 int VAR_8 ;
 int FUNC_10 (TYPE_4__*,scalar_t__*,int) ;
 TYPE_3__* FUNC_11 (int) ;

PPP_PACKET *FUNC_12(PPP_SESSION *VAR_9, bool VAR_10)
{
 PPP_PACKET *VAR_11 = ((void*)0);

 if (VAR_9 == ((void*)0))
 {
  return ((void*)0);
 }

LABEL_LOOP:
 VAR_11 = FUNC_6(VAR_9, VAR_10);
 if (VAR_11 == ((void*)0))
 {
  return ((void*)0);
 }

 if (FUNC_8(VAR_11->Protocol) == 0)
 {

  PPP_PACKET *VAR_12 = FUNC_11(sizeof(PPP_PACKET));
  BUF *VAR_13;
  UCHAR VAR_14;
  USHORT VAR_15;

  VAR_12->Protocol = VAR_7;
  VAR_12->IsControl = 0;

  VAR_13 = FUNC_4();


  VAR_14 = VAR_4;
  FUNC_10(VAR_13, &VAR_14, 1);


  VAR_14 = VAR_9->NextId++;
  FUNC_10(VAR_13, &VAR_14, 1);


  VAR_15 = FUNC_1(VAR_11->DataSize + 6);
  FUNC_10(VAR_13, &VAR_15, 2);


  VAR_15 = FUNC_1(VAR_11->Protocol);
  FUNC_10(VAR_13, &VAR_15, 2);


  FUNC_10(VAR_13, VAR_11->Data, VAR_11->DataSize);

  VAR_12->Data = FUNC_0(VAR_13->Buf, VAR_13->Size);
  VAR_12->DataSize = VAR_13->Size;

  FUNC_3(VAR_11);

  FUNC_2(VAR_13);

  if (FUNC_7(VAR_9, VAR_12) == 0)
  {
   FUNC_3(VAR_12);
   return ((void*)0);
  }

  FUNC_3(VAR_12);
  goto LABEL_LOOP;
 }

 if (VAR_11->IsControl && VAR_11->Protocol == VAR_7)
 {
  if (VAR_11->Lcp->Code == VAR_1)
  {

   PPP_PACKET *VAR_16 = FUNC_11(sizeof(PPP_PACKET));

   VAR_16->IsControl = 1;
   VAR_16->Protocol = VAR_7;
   VAR_16->Lcp = FUNC_5(VAR_2, VAR_11->Lcp->Id);
   VAR_16->Lcp->Data = FUNC_0(VAR_11->Lcp->Data, VAR_11->Lcp->DataSize);
   VAR_16->Lcp->DataSize = VAR_11->Lcp->DataSize;

   FUNC_3(VAR_11);

   if (FUNC_7(VAR_9, VAR_16) == 0)
   {
    FUNC_3(VAR_16);
    return ((void*)0);
   }

   FUNC_3(VAR_16);
   goto LABEL_LOOP;
  }
  else if (VAR_11->Lcp->Code == VAR_2)
  {

   FUNC_3(VAR_11);
   goto LABEL_LOOP;
  }
  else if (VAR_11->Lcp->Code == VAR_0)
  {

   FUNC_3(VAR_11);
   goto LABEL_LOOP;
  }
  else if (VAR_11->Lcp->Code == VAR_3)
  {

   FUNC_3(VAR_11);
   VAR_8;
   goto LABEL_LOOP;
  }
  else if (VAR_11->Lcp->Code == VAR_6)
  {

   PPP_PACKET *VAR_17 = FUNC_11(sizeof(PPP_PACKET));

   VAR_17->IsControl = 1;
   VAR_17->Protocol = VAR_7;
   VAR_17->Lcp = FUNC_5(VAR_5, VAR_11->Lcp->Id);
   VAR_17->Lcp->Data = FUNC_0(VAR_11->Lcp->Data, VAR_11->Lcp->DataSize);
   VAR_17->Lcp->DataSize = VAR_11->Lcp->DataSize;

   VAR_9->IsTerminateReceived = 1;

   FUNC_3(VAR_11);

   if (FUNC_7(VAR_9, VAR_17) == 0)
   {
    FUNC_3(VAR_17);
    return ((void*)0);
   }

   FUNC_9(100);

   FUNC_3(VAR_17);
   goto LABEL_LOOP;
  }
 }

 return VAR_11;
}
