
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
 int FUNC_6 (struct i2c_client*,int,int) ;
 int FUNC_7 (struct workqueue_struct*) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (struct i2c_client*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int *,int ) ;
 int FUNC_12 (struct workqueue_struct*,int *) ;
 int FUNC_13 () ;
 int FUNC_14 (struct i2c_client*,int ,int ) ;
 struct cx25840_state* FUNC_15 (int ) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_16(struct i2c_client *VAR_3)
{
 FUNC_0(VAR_2);
 struct cx25840_state *VAR_4 = FUNC_15(FUNC_9(VAR_3));
 struct workqueue_struct *VAR_5;


 FUNC_3(VAR_3, 0x102, ~0x01, 0x01);
 FUNC_3(VAR_3, 0x102, ~0x01, 0x00);


 FUNC_3(VAR_3, 0x803, ~0x10, 0x00);


 FUNC_5(VAR_3, 0x398, 0);



 FUNC_5(VAR_3, 0x2, 0x76);


 FUNC_5(VAR_3, 0x1, 0x40);


 FUNC_6(VAR_3, 0x33c, 0x00000001);


 FUNC_6(VAR_3, 0x340, 0x0df7df83);


 FUNC_6(VAR_3, 0x414, 0x00107d12);


 FUNC_6(VAR_3, 0x420, 0x3d008282);


 FUNC_5(VAR_3, 0x102, 0x10);


 FUNC_5(VAR_3, 0x103, 0x11);


 FUNC_5(VAR_3, 0x400, 0);


 FUNC_5(VAR_3, 0x401, 0xe8);





 FUNC_1(&VAR_4->fw_work, VAR_1);
 FUNC_10(&VAR_4->fw_wait);
 VAR_5 = FUNC_2("cx25840_fw");
 FUNC_11(&VAR_4->fw_wait, &VAR_2, VAR_0);
 FUNC_12(VAR_5, &VAR_4->fw_work);
 FUNC_13();
 FUNC_8(&VAR_4->fw_wait, &VAR_2);
 FUNC_7(VAR_5);

 FUNC_4(VAR_3);


 FUNC_14(VAR_3, VAR_4->vid_input, VAR_4->aud_input);


 FUNC_3(VAR_3, 0x803, ~0x10, 0x10);
}
