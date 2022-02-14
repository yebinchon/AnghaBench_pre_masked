
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int hfa384x_usbctlx_t ;
struct TYPE_6__ {int lock; int active; } ;
struct TYPE_7__ {int resp_timer_done; TYPE_1__ ctlxq; } ;
typedef TYPE_2__ hfa384x_t ;


 int * FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int *) ;

__attribute__((used)) static void FUNC_6(unsigned long VAR_0)
{
 hfa384x_t *VAR_1 = (hfa384x_t *) VAR_0;
 unsigned long VAR_2;

 FUNC_3(&VAR_1->ctlxq.lock, VAR_2);

 VAR_1->resp_timer_done = 1;




 if (!FUNC_2(&VAR_1->ctlxq.active)) {
  hfa384x_usbctlx_t *VAR_3 = FUNC_0(VAR_1);

  if (FUNC_5(VAR_1, VAR_3) == 0) {
   FUNC_4(&VAR_1->ctlxq.lock, VAR_2);
   FUNC_1(VAR_1);
   goto done;
  }
 }

 FUNC_4(&VAR_1->ctlxq.lock, VAR_2);

done:
 ;

}
