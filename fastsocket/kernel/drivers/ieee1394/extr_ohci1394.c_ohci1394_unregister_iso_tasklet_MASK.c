
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_ohci {int iso_tasklet_list_lock; int ir_multichannel_used; int ir_ctx_usage; int it_ctx_usage; } ;
struct ohci1394_iso_tasklet {scalar_t__ type; int link; int context; int tasklet; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct ti_ohci *VAR_2,
         struct ohci1394_iso_tasklet *VAR_3)
{
 unsigned long VAR_4;

 FUNC_4(&VAR_3->tasklet);

 FUNC_2(&VAR_2->iso_tasklet_list_lock, VAR_4);

 if (VAR_3->type == VAR_1)
  FUNC_0(VAR_3->context, &VAR_2->it_ctx_usage);
 else {
  FUNC_0(VAR_3->context, &VAR_2->ir_ctx_usage);

  if (VAR_3->type == VAR_0) {
   FUNC_0(0, &VAR_2->ir_multichannel_used);
  }
 }

 FUNC_1(&VAR_3->link);

 FUNC_3(&VAR_2->iso_tasklet_list_lock, VAR_4);
}
