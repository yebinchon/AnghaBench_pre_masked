
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_ohci {int nb_iso_xmit_ctx; unsigned long it_ctx_usage; int nb_iso_rcv_ctx; unsigned long ir_ctx_usage; unsigned long ir_multichannel_used; int iso_tasklet_list_lock; int iso_tasklet_list; } ;
struct ohci1394_iso_tasklet {scalar_t__ type; int context; int link; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 scalar_t__ FUNC_3 (int,unsigned long*) ;

int FUNC_4(struct ti_ohci *VAR_3,
      struct ohci1394_iso_tasklet *VAR_4)
{
 unsigned long VAR_5, *VAR_6;
 int VAR_7, VAR_8, VAR_9 = -VAR_0;

 if (VAR_4->type == VAR_2) {
  VAR_7 = VAR_3->nb_iso_xmit_ctx;
  VAR_6 = &VAR_3->it_ctx_usage;
 }
 else {
  VAR_7 = VAR_3->nb_iso_rcv_ctx;
  VAR_6 = &VAR_3->ir_ctx_usage;


  if (VAR_4->type == VAR_1) {
   if (FUNC_3(0, &VAR_3->ir_multichannel_used)) {
    return VAR_9;
   }
  }
 }

 FUNC_1(&VAR_3->iso_tasklet_list_lock, VAR_5);

 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
  if (!FUNC_3(VAR_8, VAR_6)) {
   VAR_4->context = VAR_8;
   FUNC_0(&VAR_4->link, &VAR_3->iso_tasklet_list);
   VAR_9 = 0;
   break;
  }

 FUNC_2(&VAR_3->iso_tasklet_list_lock, VAR_5);

 return VAR_9;
}
