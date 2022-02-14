
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_9__ ;
typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_29__ {int ref; } ;
struct TYPE_28__ {TYPE_5__* Session; int Protocol; } ;
struct TYPE_27__ {int ref; } ;
struct TYPE_26__ {int NoBroadcastLimiter; } ;
struct TYPE_25__ {int SecureNATMode; int Hub; TYPE_9__* Cancel1; int ref; int Username; int Name; TYPE_4__* SecureNAT; } ;
struct TYPE_24__ {TYPE_3__* Nat; TYPE_5__* Session; TYPE_7__* Hub; int Cedar; } ;
struct TYPE_23__ {TYPE_2__* Virtual; } ;
struct TYPE_22__ {TYPE_1__* NativeNat; TYPE_9__* Cancel; } ;
struct TYPE_21__ {int CancelLock; TYPE_9__* Cancel; } ;
typedef int THREAD ;
typedef TYPE_4__ SNAT ;
typedef TYPE_5__ SESSION ;
typedef TYPE_6__ POLICY ;
typedef TYPE_7__ HUB ;
typedef TYPE_8__ CONNECTION ;
typedef TYPE_9__ CANCEL ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_6__* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (int ) ;
 TYPE_8__* FUNC_7 (int ,int *,int *) ;
 TYPE_5__* FUNC_8 (int ,TYPE_8__*,TYPE_7__*,int ,TYPE_6__*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_9__*) ;
 int FUNC_11 (TYPE_8__*) ;
 int FUNC_12 (TYPE_7__*) ;
 int FUNC_13 (TYPE_5__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_14 (TYPE_5__*) ;
 int FUNC_15 (int ) ;

void FUNC_16(THREAD *VAR_3, void *VAR_4)
{
 SNAT *VAR_5;
 CONNECTION *VAR_6;
 SESSION *VAR_7;
 POLICY *VAR_8;
 HUB *VAR_9;

 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
 {
  return;
 }

 VAR_5 = (SNAT *)VAR_4;

 VAR_6 = FUNC_7(VAR_5->Cedar, ((void*)0), VAR_3);
 VAR_6->Protocol = VAR_0;


 VAR_8 = FUNC_1(FUNC_4());


 VAR_8->NoBroadcastLimiter = 1;

 VAR_9 = VAR_5->Hub;
 FUNC_0(VAR_9->ref);


 VAR_7 = FUNC_8(VAR_5->Cedar, VAR_6, VAR_5->Hub, VAR_1, VAR_8);
 VAR_7->SecureNATMode = 1;
 VAR_7->SecureNAT = VAR_5;
 VAR_6->Session = VAR_7;
 FUNC_11(VAR_6);

 FUNC_5(VAR_7->Hub, "LH_NAT_START", VAR_7->Name);


 VAR_7->Username = FUNC_2(VAR_2);

 VAR_5->Session = VAR_7;
 FUNC_0(VAR_7->ref);


 FUNC_9(VAR_3);

 FUNC_10(VAR_5->Nat->Virtual->Cancel);
 VAR_5->Nat->Virtual->Cancel = VAR_7->Cancel1;
 FUNC_0(VAR_7->Cancel1->ref);

 if (VAR_5->Nat->Virtual->NativeNat != ((void*)0))
 {
  CANCEL *VAR_10 = ((void*)0);

  FUNC_6(VAR_5->Nat->Virtual->NativeNat->CancelLock);
  {
   if (VAR_5->Nat->Virtual->NativeNat->Cancel != ((void*)0))
   {
    VAR_10 = VAR_5->Nat->Virtual->NativeNat->Cancel;

    VAR_5->Nat->Virtual->NativeNat->Cancel = VAR_7->Cancel1;

    FUNC_0(VAR_7->Cancel1->ref);
   }
  }
  FUNC_15(VAR_5->Nat->Virtual->NativeNat->CancelLock);

  if (VAR_10 != ((void*)0))
  {
   FUNC_10(VAR_10);
  }
 }


 FUNC_3("SecureNAT Start.\n");
 FUNC_14(VAR_7);
 FUNC_3("SecureNAT Stop.\n");

 FUNC_5(VAR_7->Hub, "LH_NAT_STOP");

 FUNC_12(VAR_9);

 FUNC_13(VAR_7);
}
