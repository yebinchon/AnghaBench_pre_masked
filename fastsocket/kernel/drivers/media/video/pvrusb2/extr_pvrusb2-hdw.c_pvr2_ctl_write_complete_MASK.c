
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {struct pvr2_hdw* context; } ;
struct pvr2_hdw {int ctl_done; scalar_t__ ctl_read_pend_flag; scalar_t__ ctl_write_pend_flag; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct urb *VAR_0)
{
 struct pvr2_hdw *VAR_1 = VAR_0->context;
 VAR_1->ctl_write_pend_flag = 0;
 if (VAR_1->ctl_read_pend_flag) return;
 FUNC_0(&VAR_1->ctl_done);
}
