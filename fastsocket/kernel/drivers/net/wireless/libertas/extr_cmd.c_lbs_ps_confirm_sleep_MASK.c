
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lbs_private {size_t resp_idx; int driver_lock; scalar_t__* resp_len; int event_fifo; scalar_t__ cur_cmd; scalar_t__ dnld_sent; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct lbs_private*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

void FUNC_7(struct lbs_private *VAR_1)
{
 unsigned long VAR_2 =0;
 int VAR_3 = 1;

 FUNC_1(VAR_0);

 FUNC_5(&VAR_1->driver_lock, VAR_2);
 if (VAR_1->dnld_sent) {
  VAR_3 = 0;
  FUNC_2("dnld_sent was set\n");
 }


 if (VAR_1->cur_cmd) {
  VAR_3 = 0;
  FUNC_2("cur_cmd was set\n");
 }


 if (FUNC_0(VAR_1->event_fifo) || VAR_1->resp_len[VAR_1->resp_idx]) {
  VAR_3 = 0;
  FUNC_2("pending events or command responses\n");
 }
 FUNC_6(&VAR_1->driver_lock, VAR_2);

 if (VAR_3) {
  FUNC_2("sending lbs_ps_confirm_sleep\n");
  FUNC_4(VAR_1);
 } else {
  FUNC_2("sleep confirm has been delayed\n");
 }

 FUNC_3(VAR_0);
}
