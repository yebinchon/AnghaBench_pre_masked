
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ab3100 {int chip_id; int access_mutex; int dev; int i2c_client; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (int ,int*,int) ;
 int FUNC_2 (int ,int*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct ab3100 *VAR_1,
        u8 VAR_2, u8 *VAR_3, u8 VAR_4)
{
 int VAR_5;

 if (VAR_1->chip_id == 0xa0 ||
     VAR_1->chip_id == 0xa1)

  return -VAR_0;

 VAR_5 = FUNC_3(&VAR_1->access_mutex);
 if (VAR_5)
  return VAR_5;




 VAR_5 = FUNC_2(VAR_1->i2c_client, &VAR_2, 1);
 if (VAR_5 < 0) {
  FUNC_0(VAR_1->dev,
   "write error (send first register address): %d\n",
   VAR_5);
  goto get_reg_page_out_unlock;
 } else if (VAR_5 != 1) {
  FUNC_0(VAR_1->dev,
   "write error (send first register address) "
   "%d bytes transferred (expected 1)\n",
   VAR_5);
  VAR_5 = -VAR_0;
  goto get_reg_page_out_unlock;
 }

 VAR_5 = FUNC_1(VAR_1->i2c_client, VAR_3, VAR_4);
 if (VAR_5 < 0) {
  FUNC_0(VAR_1->dev,
   "write error (read register page): %d\n",
   VAR_5);
  goto get_reg_page_out_unlock;
 } else if (VAR_5 != VAR_4) {
  FUNC_0(VAR_1->dev,
   "write error (read register page) "
   "%d bytes transferred (expected %d)\n",
   VAR_5, VAR_4);
  VAR_5 = -VAR_0;
  goto get_reg_page_out_unlock;
 }


 VAR_5 = 0;

 get_reg_page_out_unlock:
 FUNC_4(&VAR_1->access_mutex);
 return VAR_5;
}
