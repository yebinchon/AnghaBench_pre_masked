
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int intr_status; } ;
struct TYPE_4__ {TYPE_1__ bfa_regs; } ;
struct bfa_s {scalar_t__ queue_process; TYPE_2__ iocfc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bfa_s*,int) ;
 int FUNC_1 (struct bfa_s*,int) ;
 int FUNC_2 (struct bfa_s*,int) ;
 int FUNC_3 (int ) ;

void
FUNC_4(struct bfa_s *VAR_3, int VAR_4)
{
 u32 VAR_5, VAR_6;
 int VAR_7;

 VAR_5 = FUNC_3(VAR_3->iocfc.bfa_regs.intr_status);
 if (!VAR_5)
  return;




 VAR_6 = VAR_5 & VAR_2;
 if (VAR_6 && VAR_3->queue_process) {
  for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
   FUNC_1(VAR_3, VAR_7);
 }

 VAR_5 &= ~VAR_6;
 if (!VAR_5)
  return;




 VAR_6 = VAR_5 & VAR_1;
 if (VAR_6 && VAR_3->queue_process) {
  for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
   FUNC_0(VAR_3, VAR_7);
 }
 VAR_5 &= ~VAR_6;
 if (!VAR_5)
  return;

 FUNC_2(VAR_3, VAR_5);
}
