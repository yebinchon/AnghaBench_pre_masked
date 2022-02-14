
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {scalar_t__ id; } ;
struct TYPE_2__ {scalar_t__ SDMA_INTR_MASK_m; scalar_t__ SDMA_INTR_CAUSE_m; scalar_t__ MPSC_TCRR_m; scalar_t__ MPSC_RCRR_m; scalar_t__ MPSC_MRR_m; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 () ;

__attribute__((used)) static int FUNC_1(struct platform_device *VAR_2)
{
 int VAR_3 = -VAR_0;

 if (VAR_2->id == 0) {
  FUNC_0();
  VAR_1.MPSC_MRR_m = 0;
  VAR_1.MPSC_RCRR_m = 0;
  VAR_1.MPSC_TCRR_m = 0;
  VAR_1.SDMA_INTR_CAUSE_m = 0;
  VAR_1.SDMA_INTR_MASK_m = 0;
  VAR_3 = 0;
 }

 return VAR_3;
}
