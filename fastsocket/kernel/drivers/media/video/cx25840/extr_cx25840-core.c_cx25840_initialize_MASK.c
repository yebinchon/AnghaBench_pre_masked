
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct workqueue_struct {int dummy; } ;
struct i2c_client {int dummy; } ;
struct cx25840_state {int aud_input; int vid_input; int fw_wait; int fw_work; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 struct workqueue_struct* FUNC_2 (char*) ;
 int FUNC_3 (struct i2c_client*,int,int,int) ;
 int FUNC_4 (struct i2c_client*) ;
 int VAR_1 ;
 int FUNC_5 (struct i2c_client*,int,int) ;
 int FUNC_6 (struct workqueue_struct*) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (struct i2c_client*) ;
 int FUNC_9 (struct i2c_client*) ;
 int FUNC_10 (struct i2c_client*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int *,int ) ;
 int FUNC_13 (struct workqueue_struct*,int *) ;
 int FUNC_14 () ;
 int FUNC_15 (struct i2c_client*,int ,int ) ;
 struct cx25840_state* FUNC_16 (int ) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_17(struct i2c_client *VAR_3)
{
 FUNC_0(VAR_2);
 struct cx25840_state *VAR_4 = FUNC_16(FUNC_8(VAR_3));
 struct workqueue_struct *VAR_5;



 FUNC_3(VAR_3, 0x803, ~0x10, 0x00);


 FUNC_5(VAR_3, 0x000, 0x04);

 FUNC_9(VAR_3);
 FUNC_10(VAR_3);
 FUNC_5(VAR_3, 0x136, 0x0a);

 FUNC_5(VAR_3, 0x13c, 0x01);
 FUNC_5(VAR_3, 0x13c, 0x00);





 FUNC_1(&VAR_4->fw_work, VAR_1);
 FUNC_11(&VAR_4->fw_wait);
 VAR_5 = FUNC_2("cx25840_fw");
 FUNC_12(&VAR_4->fw_wait, &VAR_2, VAR_0);
 FUNC_13(VAR_5, &VAR_4->fw_work);
 FUNC_14();
 FUNC_7(&VAR_4->fw_wait, &VAR_2);
 FUNC_6(VAR_5);


 FUNC_5(VAR_3, 0x115, 0x8c);
 FUNC_5(VAR_3, 0x116, 0x07);
 FUNC_5(VAR_3, 0x118, 0x02);

 FUNC_5(VAR_3, 0x4a5, 0x80);
 FUNC_5(VAR_3, 0x4a5, 0x00);
 FUNC_5(VAR_3, 0x402, 0x00);

 FUNC_3(VAR_3, 0x401, ~0x18, 0);
 FUNC_3(VAR_3, 0x4a2, ~0x10, 0x10);


 FUNC_5(VAR_3, 0x8d3, 0x1f);
 FUNC_5(VAR_3, 0x8e3, 0x03);

 FUNC_4(VAR_3);


 FUNC_5(VAR_3, 0x914, 0xa0);
 FUNC_5(VAR_3, 0x918, 0xa0);
 FUNC_5(VAR_3, 0x919, 0x01);


 FUNC_5(VAR_3, 0x809, 0x04);

 FUNC_5(VAR_3, 0x8cf, 0x0f);


 FUNC_15(VAR_3, VAR_4->vid_input, VAR_4->aud_input);


 FUNC_3(VAR_3, 0x803, ~0x10, 0x10);
}
