
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_hdw {int big_lock; int ctl_lock; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct pvr2_hdw*) ;
 int FUNC_3 (int ,char*,struct pvr2_hdw*) ;

void FUNC_4(struct pvr2_hdw *VAR_1)
{
 FUNC_3(VAR_0,"pvr2_hdw_disconnect(hdw=%p)",VAR_1);
 FUNC_1(VAR_1->big_lock);
 FUNC_1(VAR_1->ctl_lock);
 FUNC_2(VAR_1);
 FUNC_0(VAR_1->ctl_lock);
 FUNC_0(VAR_1->big_lock);
}
