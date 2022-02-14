
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vcpu_info {int evtchn_upcall_pending; int evtchn_pending_sel; } ;
struct shared_info {int * evtchn_pending; int * evtchn_mask; } ;
struct evtchn_unmask {int port; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ,struct evtchn_unmask*) ;
 struct shared_info* VAR_2 ;
 struct vcpu_info* FUNC_2 (int ) ;
 unsigned int FUNC_3 (int) ;
 unsigned int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int,int *) ;
 int FUNC_8 (int,int *) ;
 scalar_t__ FUNC_9 (int,int *) ;
 scalar_t__ FUNC_10 (int) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_11(int VAR_4)
{
 struct shared_info *VAR_5 = VAR_2;
 unsigned int VAR_6 = FUNC_4();

 FUNC_0(!FUNC_5());


 if (FUNC_10(VAR_6 != FUNC_3(VAR_4))) {
  struct evtchn_unmask VAR_7 = { .port = VAR_4 };
  (void)FUNC_1(VAR_1, &VAR_7);
 } else {
  struct vcpu_info *VAR_8 = FUNC_2(VAR_3);

  FUNC_7(VAR_4, &VAR_5->evtchn_mask[0]);






  if (FUNC_9(VAR_4, &VAR_5->evtchn_pending[0]) &&
      !FUNC_8(VAR_4 / VAR_0,
        &VAR_8->evtchn_pending_sel))
   VAR_8->evtchn_upcall_pending = 1;
 }

 FUNC_6();
}
