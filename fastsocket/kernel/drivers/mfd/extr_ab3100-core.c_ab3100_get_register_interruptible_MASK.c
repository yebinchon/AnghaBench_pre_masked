
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ab3100 {int access_mutex; int dev; int i2c_client; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 (int ,int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct ab3100 *VAR_1, u8 VAR_2, u8 *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_3(&VAR_1->access_mutex);
 if (VAR_4)
  return VAR_4;







 VAR_4 = FUNC_2(VAR_1->i2c_client, &VAR_2, 1);
 if (VAR_4 < 0) {
  FUNC_0(VAR_1->dev,
   "write error (send register address): %d\n",
   VAR_4);
  goto get_reg_out_unlock;
 } else if (VAR_4 != 1) {
  FUNC_0(VAR_1->dev,
   "write error (send register address) "
   "%d bytes transferred (expected 1)\n",
   VAR_4);
  VAR_4 = -VAR_0;
  goto get_reg_out_unlock;
 } else {

  VAR_4 = 0;
 }

 VAR_4 = FUNC_1(VAR_1->i2c_client, VAR_3, 1);
 if (VAR_4 < 0) {
  FUNC_0(VAR_1->dev,
   "write error (read register): %d\n",
   VAR_4);
  goto get_reg_out_unlock;
 } else if (VAR_4 != 1) {
  FUNC_0(VAR_1->dev,
   "write error (read register) "
   "%d bytes transferred (expected 1)\n",
   VAR_4);
  VAR_4 = -VAR_0;
  goto get_reg_out_unlock;
 } else {

  VAR_4 = 0;
 }

 get_reg_out_unlock:
 FUNC_4(&VAR_1->access_mutex);
 return VAR_4;
}
