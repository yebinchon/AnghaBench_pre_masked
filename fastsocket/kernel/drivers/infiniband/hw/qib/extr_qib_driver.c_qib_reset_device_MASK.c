
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qib_pportdata {int led_override; int led_override_timer_active; int led_override_timer; } ;
struct qib_devdata {int flags; int first_user_ctxt; int cfgctxts; int num_pports; int (* f_reset ) (struct qib_devdata*) ;int pcidev; int (* f_setextled ) (struct qib_pportdata*,int ) ;struct qib_pportdata* pport; int uctxt_lock; TYPE_1__** rcd; int kregbase; } ;
struct TYPE_2__ {int cnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct qib_devdata*,char*,int,int) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (struct qib_devdata*,int) ;
 struct qib_devdata* FUNC_6 (int) ;
 int FUNC_7 (struct qib_pportdata*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (struct qib_pportdata*,int ) ;
 int FUNC_11 (struct qib_devdata*) ;

int FUNC_12(int VAR_7)
{
 int VAR_8, VAR_9;
 struct qib_devdata *VAR_10 = FUNC_6(VAR_7);
 struct qib_pportdata *VAR_11;
 unsigned long VAR_12;
 int VAR_13;

 if (!VAR_10) {
  VAR_8 = -VAR_2;
  goto bail;
 }

 FUNC_4(VAR_10->pcidev, "Reset on unit %u requested\n", VAR_7);

 if (!VAR_10->kregbase || !(VAR_10->flags & VAR_6)) {
  FUNC_4(VAR_10->pcidev,
   "Invalid unit number %u or not initialized or not present\n",
   VAR_7);
  VAR_8 = -VAR_3;
  goto bail;
 }

 FUNC_8(&VAR_10->uctxt_lock, VAR_12);
 if (VAR_10->rcd)
  for (VAR_9 = VAR_10->first_user_ctxt; VAR_9 < VAR_10->cfgctxts; VAR_9++) {
   if (!VAR_10->rcd[VAR_9] || !VAR_10->rcd[VAR_9]->cnt)
    continue;
   FUNC_9(&VAR_10->uctxt_lock, VAR_12);
   VAR_8 = -VAR_1;
   goto bail;
  }
 FUNC_9(&VAR_10->uctxt_lock, VAR_12);

 for (VAR_13 = 0; VAR_13 < VAR_10->num_pports; ++VAR_13) {
  VAR_11 = VAR_10->pport + VAR_13;
  if (FUNC_0(&VAR_11->led_override_timer_active)) {

   FUNC_2(&VAR_11->led_override_timer);
   FUNC_1(&VAR_11->led_override_timer_active, 0);
  }


  VAR_11->led_override = VAR_4;
  VAR_10->f_setextled(VAR_11, 0);
  if (VAR_10->flags & VAR_5)
   FUNC_7(VAR_11);
 }

 VAR_8 = VAR_10->f_reset(VAR_10);
 if (VAR_8 == 1)
  VAR_8 = FUNC_5(VAR_10, 1);
 else
  VAR_8 = -VAR_0;
 if (VAR_8)
  FUNC_3(VAR_10,
   "Reinitialize unit %u after reset failed with %d\n",
   VAR_7, VAR_8);
 else
  FUNC_4(VAR_10->pcidev,
   "Reinitialized unit %u after resetting\n",
   VAR_7);

bail:
 return VAR_8;
}
