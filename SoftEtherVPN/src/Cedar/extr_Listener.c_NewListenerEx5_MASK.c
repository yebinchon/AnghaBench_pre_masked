
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ UINT ;
typedef int UCHAR ;
struct TYPE_12__ {int DisableIPv6Listener; int ref; } ;
struct TYPE_11__ {int LocalOnly; int ShadowIPv6; scalar_t__ volatile* NatTGlobalUdpPort; int EnableConditionalAccept; int ShadowListener; TYPE_2__* Cedar; int RandPortId; int Event; scalar_t__ Port; scalar_t__ Protocol; int ref; int lock; void* ThreadParam; int * ThreadProc; } ;
typedef int THREAD_PROC ;
typedef int THREAD ;
typedef TYPE_1__ LISTENER ;
typedef TYPE_2__ CEDAR ;


 int FUNC_0 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_2__*,scalar_t__,scalar_t__,int *,void*,int,int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int * FUNC_6 (int ,TYPE_1__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_2__*,char*,scalar_t__) ;
 int FUNC_9 (int *) ;
 TYPE_1__* FUNC_10 (int) ;

LISTENER *FUNC_11(CEDAR *VAR_7, UINT VAR_8, UINT VAR_9, THREAD_PROC *VAR_10, void *VAR_11, bool VAR_12, bool VAR_13,
       volatile UINT *VAR_14, UCHAR VAR_15, bool VAR_16)
{
 LISTENER *VAR_17;
 THREAD *VAR_18;

 if ((VAR_8 == VAR_5 && VAR_9 == 0) || VAR_7 == ((void*)0))
 {
  return ((void*)0);
 }

 if (VAR_8 != VAR_5 && VAR_8 != VAR_2 &&
  VAR_8 != VAR_4 && VAR_8 != VAR_1 && VAR_8 != VAR_0 &&
  VAR_8 != VAR_3)
 {
  return ((void*)0);
 }

 VAR_17 = FUNC_10(sizeof(LISTENER));

 VAR_17->ThreadProc = VAR_10;
 VAR_17->ThreadParam = VAR_11;
 VAR_17->Cedar = VAR_7;
 FUNC_1(VAR_17->Cedar->ref);
 VAR_17->lock = FUNC_4();
 VAR_17->ref = FUNC_5();
 VAR_17->Protocol = VAR_8;
 VAR_17->Port = VAR_9;
 VAR_17->Event = FUNC_2();


 VAR_17->LocalOnly = VAR_12;
 VAR_17->ShadowIPv6 = VAR_13;
 VAR_17->NatTGlobalUdpPort = VAR_14;
 VAR_17->RandPortId = VAR_15;
 VAR_17->EnableConditionalAccept = VAR_16;

 if (VAR_17->ShadowIPv6 == 0)
 {
  if (VAR_8 == VAR_5)
  {
   FUNC_8(VAR_7, "LS_LISTENER_START_1", VAR_9);
  }
 }


 VAR_18 = FUNC_6(VAR_6, VAR_17);
 FUNC_9(VAR_18);
 FUNC_7(VAR_18);

 if (VAR_17->ShadowIPv6 == 0 && VAR_8 == VAR_5)
 {
  if (VAR_17->Cedar->DisableIPv6Listener == 0)
  {

   VAR_17->ShadowListener = FUNC_3(VAR_7, VAR_8, VAR_9, VAR_10, VAR_11,
    VAR_12, 1);
  }
 }

 if (VAR_17->ShadowIPv6 == 0)
 {

  FUNC_0(VAR_7, VAR_17);
 }

 return VAR_17;
}
