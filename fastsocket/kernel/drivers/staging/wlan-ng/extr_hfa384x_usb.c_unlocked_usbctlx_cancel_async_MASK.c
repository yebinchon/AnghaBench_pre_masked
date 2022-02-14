
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int state; } ;
typedef TYPE_1__ hfa384x_usbctlx_t ;
struct TYPE_10__ {int transfer_flags; } ;
struct TYPE_9__ {TYPE_3__ ctlx_urb; } ;
typedef TYPE_2__ hfa384x_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_2(hfa384x_t *VAR_3,
      hfa384x_usbctlx_t *VAR_4)
{
 int VAR_5;






 VAR_3->ctlx_urb.transfer_flags |= VAR_2;
 VAR_5 = FUNC_1(&VAR_3->ctlx_urb);

 if (VAR_5 != -VAR_1) {






  VAR_4->state = VAR_0;
  FUNC_0(VAR_3, VAR_4);
  VAR_5 = 0;
 }

 return VAR_5;
}
