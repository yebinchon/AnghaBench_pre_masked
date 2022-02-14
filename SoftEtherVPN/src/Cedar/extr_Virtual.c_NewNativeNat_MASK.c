
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* Cancel; } ;
typedef TYPE_2__ VH ;
struct TYPE_11__ {int Thread; void* NatTableForRecv; void* NatTableForSend; int HaltTube3; int HaltTube2; int HaltEvent; void* CancelLock; void* Lock; void* RecvQueue; void* SendQueue; int LastInterfaceIndex; TYPE_1__* Cancel; TYPE_2__* v; } ;
struct TYPE_9__ {int ref; } ;
typedef TYPE_3__ NATIVE_NAT ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 () ;
 void* FUNC_2 (int ,int ,int,int) ;
 void* FUNC_3 () ;
 void* FUNC_4 () ;
 int FUNC_5 (int ,TYPE_3__*) ;
 int FUNC_6 (int *,int *,int ) ;
 int FUNC_7 (TYPE_3__*) ;
 TYPE_3__* FUNC_8 (int) ;

NATIVE_NAT *FUNC_9(VH *VAR_6)
{
 NATIVE_NAT *VAR_7;

 if (VAR_6 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_7 = FUNC_8(sizeof(NATIVE_NAT));

 VAR_7->v = VAR_6;

 VAR_7->Cancel = VAR_6->Cancel;
 FUNC_0(VAR_7->Cancel->ref);


 VAR_7->LastInterfaceIndex = VAR_4;
 VAR_7->SendQueue = FUNC_4();
 VAR_7->RecvQueue = FUNC_4();
 FUNC_7(VAR_7);

 VAR_7->Lock = FUNC_3();

 VAR_7->CancelLock = FUNC_3();

 VAR_7->HaltEvent = FUNC_1();

 FUNC_6(&VAR_7->HaltTube2, &VAR_7->HaltTube3, 0);


 VAR_7->NatTableForSend = FUNC_2(VAR_3, VAR_1, 11, 1);
 VAR_7->NatTableForRecv = FUNC_2(VAR_2, VAR_0, 11, 1);

 VAR_7->Thread = FUNC_5(VAR_5, VAR_7);

 return VAR_7;
}
