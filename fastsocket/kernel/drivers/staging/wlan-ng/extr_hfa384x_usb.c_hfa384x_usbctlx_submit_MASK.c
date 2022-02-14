
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int list; int state; } ;
typedef TYPE_3__ hfa384x_usbctlx_t ;
struct TYPE_8__ {int lock; int pending; } ;
struct TYPE_11__ {TYPE_1__ ctlxq; TYPE_2__* wlandev; } ;
typedef TYPE_4__ hfa384x_t ;
struct TYPE_9__ {scalar_t__ hwremoved; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(hfa384x_t *VAR_2, hfa384x_usbctlx_t *VAR_3)
{
 unsigned long VAR_4;
 int VAR_5;

 FUNC_2(&VAR_2->ctlxq.lock, VAR_4);

 if (VAR_2->wlandev->hwremoved) {
  FUNC_3(&VAR_2->ctlxq.lock, VAR_4);
  VAR_5 = -VAR_1;
 } else {
  VAR_3->state = VAR_0;
  FUNC_1(&VAR_3->list, &VAR_2->ctlxq.pending);

  FUNC_3(&VAR_2->ctlxq.lock, VAR_4);
  FUNC_0(VAR_2);
  VAR_5 = 0;
 }

 return VAR_5;
}
