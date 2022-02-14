
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {scalar_t__ sense_len; int q; struct hp_sw_dh_data* end_io_data; int errors; } ;
struct hp_sw_dh_data {int * callback_data; int (* callback_fn ) (int *,unsigned int) ;scalar_t__ retry_cnt; int sense; int sdev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 (int ,struct request*) ;
 int FUNC_1 (struct request*) ;
 scalar_t__ FUNC_2 (int ) ;
 unsigned int FUNC_3 (struct hp_sw_dh_data*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,char*,int ,int ) ;
 unsigned int FUNC_6 (int ,int ) ;
 int FUNC_7 (int *,unsigned int) ;

__attribute__((used)) static void FUNC_8(struct request *VAR_7, int VAR_8)
{
 struct hp_sw_dh_data *VAR_9 = VAR_7->end_io_data;
 unsigned VAR_10 = VAR_5;

 if (VAR_8 || FUNC_2(VAR_7->errors) != VAR_1 ||
   FUNC_4(VAR_7->errors) != VAR_0) {
  FUNC_5(VAR_3, VAR_9->sdev,
       "%s: sending start_stop_unit failed with %x\n",
       VAR_2, VAR_7->errors);
  VAR_10 = VAR_4;
  goto done;
 }

 if (VAR_7->sense_len > 0) {
  VAR_10 = FUNC_6(VAR_9->sdev, VAR_9->sense);
  if (VAR_10 == VAR_6) {
   VAR_10 = VAR_4;
   if (--VAR_9->retry_cnt) {
    FUNC_1(VAR_7);
    VAR_10 = FUNC_3(VAR_9);
    if (VAR_10 == VAR_5)
     return;
   }
  }
 }
done:
 VAR_7->end_io_data = ((void*)0);
 FUNC_0(VAR_7->q, VAR_7);
 if (VAR_9->callback_fn) {
  VAR_9->callback_fn(VAR_9->callback_data, VAR_10);
  VAR_9->callback_fn = VAR_9->callback_data = ((void*)0);
 }
 return;

}
