
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gru_mm_struct {int ms_notifier; int ms_released; int ms_refcnt; } ;
struct TYPE_2__ {int mm; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,char*,struct gru_mm_struct*,int ,int ) ;
 int VAR_2 ;
 int FUNC_4 (struct gru_mm_struct*) ;
 int FUNC_5 (int *,int ) ;

void FUNC_6(struct gru_mm_struct *VAR_3)
{
 FUNC_3(VAR_2, "gms %p, refcnt %d, released %d\n", VAR_3,
  FUNC_2(&VAR_3->ms_refcnt), VAR_3->ms_released);
 if (FUNC_1(&VAR_3->ms_refcnt) == 0) {
  if (!VAR_3->ms_released)
   FUNC_5(&VAR_3->ms_notifier, VAR_0->mm);
  FUNC_4(VAR_3);
  FUNC_0(VAR_1);
 }
}
