
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1271 {int fwlog_size; int hw; int * priv; int freezable_wq; int * tx_res_if; int * fw_status_1; int * nvs; int fw_type; int * fw; int aggr_buf_size; scalar_t__ aggr_buf; int dummy_packet; scalar_t__ fwlog; int * mbox; int * buffer_32; int dev; int mutex; int fwlog_waitq; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long,int ) ;
 int VAR_3 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct wl1271*) ;

int FUNC_14(struct wl1271 *VAR_4)
{

 FUNC_9(&VAR_4->mutex);
 VAR_4->fwlog_size = -1;
 FUNC_12(&VAR_4->fwlog_waitq);
 FUNC_10(&VAR_4->mutex);

 FUNC_2(VAR_4->dev, &VAR_3);

 FUNC_3(VAR_4->dev, &VAR_2);

 FUNC_3(VAR_4->dev, &VAR_1);
 FUNC_8(VAR_4->buffer_32);
 FUNC_8(VAR_4->mbox);
 FUNC_4((unsigned long)VAR_4->fwlog);
 FUNC_1(VAR_4->dummy_packet);
 FUNC_5((unsigned long)VAR_4->aggr_buf, FUNC_6(VAR_4->aggr_buf_size));

 FUNC_13(VAR_4);

 FUNC_11(VAR_4->fw);
 VAR_4->fw = ((void*)0);
 VAR_4->fw_type = VAR_0;
 FUNC_8(VAR_4->nvs);
 VAR_4->nvs = ((void*)0);

 FUNC_8(VAR_4->fw_status_1);
 FUNC_8(VAR_4->tx_res_if);
 FUNC_0(VAR_4->freezable_wq);

 FUNC_8(VAR_4->priv);
 FUNC_7(VAR_4->hw);

 return 0;
}
