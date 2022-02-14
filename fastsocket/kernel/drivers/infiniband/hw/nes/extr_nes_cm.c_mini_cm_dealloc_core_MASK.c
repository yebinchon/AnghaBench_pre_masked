
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nes_cm_core {int disconn_wq; int event_wq; int tcp_timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct nes_cm_core*) ;
 int FUNC_4 (int ,char*,...) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct nes_cm_core *VAR_2)
{
 FUNC_4(VAR_1, "De-Alloc CM Core (%p)\n", VAR_2);

 if (!VAR_2)
  return -VAR_0;

 FUNC_0();

 if (FUNC_5(&VAR_2->tcp_timer))
  FUNC_1(&VAR_2->tcp_timer);

 FUNC_2(VAR_2->event_wq);
 FUNC_2(VAR_2->disconn_wq);
 FUNC_4(VAR_1, "\n");
 FUNC_3(VAR_2);

 return 0;
}
