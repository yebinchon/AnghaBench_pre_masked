
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ab3100 {int access_mutex; int dev; int i2c_client; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct ab3100 *VAR_1, u8 VAR_2, u8 VAR_3)
{
 u8 VAR_4[2] = {VAR_2, VAR_3};
 int VAR_5;

 VAR_5 = FUNC_2(&VAR_1->access_mutex);
 if (VAR_5)
  return VAR_5;






 VAR_5 = FUNC_1(VAR_1->i2c_client, VAR_4, 2);
 if (VAR_5 < 0) {
  FUNC_0(VAR_1->dev,
   "write error (write register): %d\n",
   VAR_5);
 } else if (VAR_5 != 2) {
  FUNC_0(VAR_1->dev,
   "write error (write register) "
   "%d bytes transferred (expected 2)\n",
   VAR_5);
  VAR_5 = -VAR_0;
 } else {

  VAR_5 = 0;
 }
 FUNC_3(&VAR_1->access_mutex);
 return VAR_5;
}
