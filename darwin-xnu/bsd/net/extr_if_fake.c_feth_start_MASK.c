
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mbuf {int dummy; } ;
typedef int * ifnet_t ;
typedef int iff_flags_t ;
typedef TYPE_1__* if_fake_ref ;
struct TYPE_3__ {struct mbuf* iff_pending_tx_packet; int * iff_peer; scalar_t__ iff_start_busy; int iff_flags; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 struct mbuf* FUNC_1 (struct mbuf*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,struct mbuf*,int *,int ) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int *,struct mbuf**) ;
 TYPE_1__* FUNC_6 (int *) ;
 int FUNC_7 (struct mbuf*) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static void
FUNC_9(ifnet_t VAR_2)
{
 struct mbuf * VAR_3 = ((void*)0);
 if_fake_ref VAR_4;
 iff_flags_t VAR_5 = 0;
 ifnet_t VAR_6 = ((void*)0);
 struct mbuf * VAR_7;
 struct mbuf * VAR_8;

 FUNC_2();
 VAR_4 = FUNC_6(VAR_2);
 if (VAR_4->iff_start_busy) {
  FUNC_4();
  FUNC_8("if_fake: start is busy\n");
  return;
 }
 if (VAR_4 != ((void*)0)) {
  VAR_6 = VAR_4->iff_peer;
  VAR_5 = VAR_4->iff_flags;
 }


 VAR_7 = VAR_4->iff_pending_tx_packet;
 if (VAR_7 != ((void*)0)) {
  if (VAR_6 != ((void*)0)) {
   VAR_3 = FUNC_1(VAR_7);
   if (VAR_3 == ((void*)0)) {
    FUNC_4();
    return;
   }
  }
  VAR_4->iff_pending_tx_packet = ((void*)0);
  FUNC_7(VAR_7);
  VAR_7 = ((void*)0);
 }
 VAR_4->iff_start_busy = VAR_1;
 FUNC_4();
 VAR_8 = ((void*)0);
 for (;;) {
  if (VAR_3 != ((void*)0)) {
   FUNC_0(VAR_6 != ((void*)0));
   FUNC_3(VAR_2, VAR_3, VAR_6, VAR_5);
   VAR_3 = ((void*)0);
  }
  if (FUNC_5(VAR_2, &VAR_7) != 0) {
   break;
  }
  if (VAR_6 == ((void*)0)) {
   FUNC_7(VAR_7);
  } else {
   VAR_3 = FUNC_1(VAR_7);
   if (VAR_3 == ((void*)0)) {
    VAR_8 = VAR_7;
    break;
   }
   FUNC_7(VAR_7);
  }
 }
 VAR_6 = ((void*)0);
 FUNC_2();
 VAR_4 = FUNC_6(VAR_2);
 if (VAR_4 != ((void*)0)) {
  VAR_4->iff_start_busy = VAR_0;
  if (VAR_8 != ((void*)0) && VAR_4->iff_peer != ((void*)0)) {

   VAR_4->iff_pending_tx_packet = VAR_8;
   VAR_8 = ((void*)0);
  }
 }
 FUNC_4();
 if (VAR_8 != ((void*)0)) {

  FUNC_7(VAR_8);
 }
}
