
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_18__ {int NatDoCancelFlag; TYPE_2__** TmpBuf; int NatTable; scalar_t__ HaltNat; int Cancel; int Now; int SockEvent; } ;
typedef TYPE_1__ VH ;
typedef scalar_t__ UINT ;
struct TYPE_19__ {int Protocol; int DisconnectNow; } ;
typedef TYPE_2__ NAT_ENTRY ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__**) ;
 TYPE_2__* FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_2__** FUNC_5 (int ) ;



 int VAR_0 ;

 int FUNC_6 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_7 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_8 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_9 (TYPE_1__*,TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_10 () ;
 TYPE_2__** FUNC_11 (int ) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (int ,int ) ;

void FUNC_14(VH *VAR_2)
{
 bool VAR_3;

 if (VAR_2 == ((void*)0))
 {
  return;
 }

 VAR_2->TmpBuf = FUNC_5(VAR_0);

 while (1)
 {

  FUNC_13(VAR_2->SockEvent, VAR_1);

  VAR_3 = 0;

  FUNC_4(VAR_2);
  {

   UINT VAR_4, VAR_5;

   VAR_2->Now = FUNC_10();
   VAR_2->NatDoCancelFlag = 0;

LIST_ELEMENT_DELETED:
   VAR_5 = FUNC_3(VAR_2->NatTable);
   for (VAR_4 = 0;VAR_4 < VAR_5;VAR_4++)
   {
    NAT_ENTRY *VAR_6 = FUNC_2(VAR_2->NatTable, VAR_4);

    switch (VAR_6->Protocol)
    {
    case 129:
     if (FUNC_8(VAR_2, VAR_6) == 0)
     {
      goto LIST_ELEMENT_DELETED;
     }
     break;

    case 128:
     if (FUNC_9(VAR_2, VAR_6) == 0)
     {
      goto LIST_ELEMENT_DELETED;
     }
     break;

    case 130:
     if (FUNC_7(VAR_2, VAR_6) == 0)
     {
      goto LIST_ELEMENT_DELETED;
     }
     break;

    case 131:
     if (FUNC_6(VAR_2, VAR_6) == 0)
     {
      goto LIST_ELEMENT_DELETED;
     }
     break;
    }
   }

   if (VAR_2->NatDoCancelFlag)
   {

    FUNC_0(VAR_2->Cancel);
   }


   if (VAR_2->HaltNat)
   {
    VAR_3 = 1;
   }
  }
  FUNC_12(VAR_2);

  if (VAR_3)
  {

   FUNC_4(VAR_2);
   {
    UINT VAR_7 = FUNC_3(VAR_2->NatTable);
    NAT_ENTRY **VAR_8 = FUNC_11(VAR_2->NatTable);
    UINT VAR_9;

    for (VAR_9 = 0;VAR_9 < VAR_7;VAR_9++)
    {
     NAT_ENTRY *VAR_10 = VAR_8[VAR_9];
     VAR_10->DisconnectNow = 1;

     switch (VAR_10->Protocol)
     {
     case 129:
      FUNC_8(VAR_2, VAR_10);
      break;

     case 128:
      FUNC_9(VAR_2, VAR_10);
      break;

     case 130:
      FUNC_7(VAR_2, VAR_10);
      break;

     case 131:
      FUNC_6(VAR_2, VAR_10);
      break;
     }
    }

    FUNC_1(VAR_8);
   }
   FUNC_12(VAR_2);
   break;
  }
 }

 FUNC_1(VAR_2->TmpBuf);
}
