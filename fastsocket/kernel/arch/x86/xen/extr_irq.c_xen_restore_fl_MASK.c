
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vcpu_info {unsigned long evtchn_upcall_mask; int evtchn_upcall_pending; } ;


 unsigned long VAR_0 ;
 int FUNC_0 () ;
 struct vcpu_info* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 () ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_7(unsigned long VAR_2)
{
 struct vcpu_info *VAR_3;


 VAR_2 = !(VAR_2 & VAR_0);




 FUNC_3();
 VAR_3 = FUNC_1(VAR_1);
 VAR_3->evtchn_upcall_mask = VAR_2;
 FUNC_4();




 if (VAR_2 == 0) {
  FUNC_2();
  FUNC_0();
  if (FUNC_5(VAR_3->evtchn_upcall_pending))
   FUNC_6();
 }
}
