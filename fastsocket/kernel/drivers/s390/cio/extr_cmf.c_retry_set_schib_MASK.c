
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct set_schib_struct {int kref; int wait; int address; int mbfc; int mme; int ret; } ;
struct ccw_device {TYPE_1__* private; } ;
struct TYPE_2__ {struct set_schib_struct* cmb_wait; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct ccw_device*,int ,int ,int ) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct ccw_device *VAR_1)
{
 struct set_schib_struct *VAR_2;

 VAR_2 = VAR_1->private->cmb_wait;
 if (!VAR_2) {
  FUNC_0(1);
  return;
 }
 FUNC_1(&VAR_2->kref);
 VAR_2->ret = FUNC_3(VAR_1, VAR_2->mme, VAR_2->mbfc,
      VAR_2->address);
 FUNC_4(&VAR_2->wait);
 FUNC_2(&VAR_2->kref, VAR_0);
}
