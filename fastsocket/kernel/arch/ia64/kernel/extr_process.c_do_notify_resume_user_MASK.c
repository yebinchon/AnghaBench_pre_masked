
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sigscratch {int pt; } ;
typedef int sigset_t ;
struct TYPE_5__ {scalar_t__ pfm_needs_checking; } ;
struct TYPE_7__ {scalar_t__ replacement_session_keyring; TYPE_1__ thread; } ;
struct TYPE_6__ {int lp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 TYPE_3__* VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_3__*,int *) ;
 int FUNC_2 (struct sigscratch*,long) ;
 TYPE_2__* FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (scalar_t__) ;

void
FUNC_12(sigset_t *VAR_4, struct sigscratch *VAR_5, long VAR_6)
{
 if (FUNC_1(VAR_3, &VAR_5->pt)) {




  if (!FUNC_3(&VAR_5->pt)->lp)
   FUNC_3(&VAR_5->pt)->lp = 1;
  return;
 }
 if (FUNC_9(VAR_2)) {
  FUNC_7();
  FUNC_2(VAR_5, VAR_6);
 }

 if (FUNC_9(VAR_0)) {
  FUNC_0(VAR_0);
  FUNC_10(&VAR_5->pt);
  if (VAR_3->replacement_session_keyring)
   FUNC_5();
 }


 if (FUNC_11(FUNC_9(VAR_1))) {
  FUNC_7();
  FUNC_4();
 }

 FUNC_6();
}
