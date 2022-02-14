
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ platform_data; } ;
struct platform_device {scalar_t__ id; TYPE_1__ dev; } ;
struct mpsc_shared_pdata {int intr_mask_val; int intr_cause_val; int tcrr_val; int rcrr_val; int mrr_val; } ;
struct TYPE_4__ {int SDMA_INTR_MASK_m; int SDMA_INTR_CAUSE_m; int MPSC_TCRR_m; int MPSC_RCRR_m; int MPSC_MRR_m; } ;


 int VAR_0 ;
 int FUNC_0 (struct platform_device*) ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static int FUNC_1(struct platform_device *VAR_2)
{
 struct mpsc_shared_pdata *VAR_3;
 int VAR_4 = -VAR_0;

 if (VAR_2->id == 0) {
  if (!(VAR_4 = FUNC_0(VAR_2))) {
   VAR_3 = (struct mpsc_shared_pdata *)
    VAR_2->dev.platform_data;

   VAR_1.MPSC_MRR_m = VAR_3->mrr_val;
   VAR_1.MPSC_RCRR_m= VAR_3->rcrr_val;
   VAR_1.MPSC_TCRR_m= VAR_3->tcrr_val;
   VAR_1.SDMA_INTR_CAUSE_m =
    VAR_3->intr_cause_val;
   VAR_1.SDMA_INTR_MASK_m =
    VAR_3->intr_mask_val;

   VAR_4 = 0;
  }
 }

 return VAR_4;
}
