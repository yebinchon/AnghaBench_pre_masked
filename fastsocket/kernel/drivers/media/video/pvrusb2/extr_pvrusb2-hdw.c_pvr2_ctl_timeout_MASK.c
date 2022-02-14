
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_hdw {int ctl_timeout_flag; int ctl_read_urb; scalar_t__ ctl_read_pend_flag; int ctl_write_urb; scalar_t__ ctl_write_pend_flag; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(unsigned long VAR_0)
{
 struct pvr2_hdw *VAR_1 = (struct pvr2_hdw *)VAR_0;
 if (VAR_1->ctl_write_pend_flag || VAR_1->ctl_read_pend_flag) {
  VAR_1->ctl_timeout_flag = !0;
  if (VAR_1->ctl_write_pend_flag)
   FUNC_0(VAR_1->ctl_write_urb);
  if (VAR_1->ctl_read_pend_flag)
   FUNC_0(VAR_1->ctl_read_urb);
 }
}
