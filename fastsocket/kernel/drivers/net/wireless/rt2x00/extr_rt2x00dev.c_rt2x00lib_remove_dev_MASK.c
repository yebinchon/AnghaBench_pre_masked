
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt2x00_dev {scalar_t__ drv_data; int autowake_tasklet; int rxdone_tasklet; int tbtt_tasklet; int pretbtt_tasklet; int txstatus_tasklet; int txstatus_fifo; scalar_t__ workqueue; int txdone_work; int rxdone_work; int txstatus_timer; int sleep_work; int autowakeup_work; int intf_work; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (struct rt2x00_dev*) ;
 int FUNC_8 (struct rt2x00_dev*) ;
 int FUNC_9 (struct rt2x00_dev*) ;
 int FUNC_10 (struct rt2x00_dev*) ;
 int FUNC_11 (struct rt2x00_dev*) ;
 int FUNC_12 (struct rt2x00_dev*) ;
 int FUNC_13 (struct rt2x00_dev*) ;
 int FUNC_14 (struct rt2x00_dev*) ;
 int FUNC_15 (int *) ;

void FUNC_16(struct rt2x00_dev *VAR_1)
{
 FUNC_2(VAR_0, &VAR_1->flags);




 FUNC_10(VAR_1);




 FUNC_1(&VAR_1->intf_work);
 FUNC_0(&VAR_1->autowakeup_work);
 FUNC_1(&VAR_1->sleep_work);
 if (FUNC_7(VAR_1)) {
  FUNC_4(&VAR_1->txstatus_timer);
  FUNC_1(&VAR_1->rxdone_work);
  FUNC_1(&VAR_1->txdone_work);
 }
 if (VAR_1->workqueue)
  FUNC_3(VAR_1->workqueue);




 FUNC_5(&VAR_1->txstatus_fifo);




 FUNC_15(&VAR_1->txstatus_tasklet);
 FUNC_15(&VAR_1->pretbtt_tasklet);
 FUNC_15(&VAR_1->tbtt_tasklet);
 FUNC_15(&VAR_1->rxdone_tasklet);
 FUNC_15(&VAR_1->autowake_tasklet);




 FUNC_13(VAR_1);




 FUNC_8(VAR_1);
 FUNC_9(VAR_1);




 FUNC_12(VAR_1);




 FUNC_11(VAR_1);




 FUNC_14(VAR_1);




 if (VAR_1->drv_data)
  FUNC_6(VAR_1->drv_data);
}
