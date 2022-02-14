
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct device {int dummy; } ;
struct b3dfg_dev {unsigned long cstate_tstamp; int cstate_lock; int buffer_waitqueue; TYPE_1__* pdev; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct b3dfg_dev*,int ) ;
 int FUNC_1 (struct device*,char*,scalar_t__) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct b3dfg_dev*) ;
 unsigned long VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct b3dfg_dev *VAR_2)
{
 u32 VAR_3 = FUNC_0(VAR_2, VAR_0);
 unsigned long VAR_4;
 struct device *VAR_5 = &VAR_2->pdev->dev;

 FUNC_1(VAR_5, "cable state change: %u\n", VAR_3);
 if (VAR_3) {
  FUNC_2(VAR_5, "ignoring unexpected plug event\n");
  return;
 }
 FUNC_3(VAR_2);






 FUNC_4(&VAR_2->cstate_lock);
 VAR_4 = VAR_1;
 if (VAR_4 <= VAR_2->cstate_tstamp)
  VAR_4 = VAR_2->cstate_tstamp + 1;
 VAR_2->cstate_tstamp = VAR_4;
 FUNC_6(&VAR_2->buffer_waitqueue);
 FUNC_5(&VAR_2->cstate_lock);
}
