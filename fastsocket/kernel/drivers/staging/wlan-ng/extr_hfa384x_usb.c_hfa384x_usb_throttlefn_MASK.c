
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int lock; } ;
struct TYPE_6__ {TYPE_2__ ctlxq; int usb_work; int usb_flags; TYPE_1__* wlandev; } ;
typedef TYPE_3__ hfa384x_t ;
struct TYPE_4__ {int hwremoved; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(unsigned long VAR_4)
{
 hfa384x_t *VAR_5 = (hfa384x_t *) VAR_4;
 unsigned long VAR_6;

 FUNC_2(&VAR_5->ctlxq.lock, VAR_6);





 FUNC_0("flags=0x%lx\n", VAR_5->usb_flags);
 if (!VAR_5->wlandev->hwremoved &&
     ((FUNC_4(VAR_0, &VAR_5->usb_flags) &&
       !FUNC_5(VAR_2, &VAR_5->usb_flags))
      |
      (FUNC_4(VAR_1, &VAR_5->usb_flags) &&
       !FUNC_5(VAR_3, &VAR_5->usb_flags))
     )) {
  FUNC_1(&VAR_5->usb_work);
 }

 FUNC_3(&VAR_5->ctlxq.lock, VAR_6);
}
