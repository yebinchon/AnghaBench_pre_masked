
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_algo_pcf_data {int dummy; } ;
struct i2c_adapter {int dev; struct i2c_algo_pcf_data* algo_data; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,char*,char const) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct i2c_algo_pcf_data*,char const) ;
 int FUNC_4 (struct i2c_algo_pcf_data*) ;
 int FUNC_5 (struct i2c_algo_pcf_data*) ;
 int FUNC_6 (struct i2c_algo_pcf_data*,int*) ;

__attribute__((used)) static int FUNC_7(struct i2c_adapter *VAR_3, const char *VAR_4,
    int VAR_5, int VAR_6)
{
 struct i2c_algo_pcf_data *VAR_7 = VAR_3->algo_data;
 int VAR_8, VAR_9, VAR_10;

 for (VAR_8=0; VAR_8<VAR_5; ++VAR_8) {
  FUNC_0(FUNC_1(&VAR_3->dev, "i2c_write: writing %2.2X\n",
    VAR_4[VAR_8] & 0xff));
  FUNC_3(VAR_7, VAR_4[VAR_8]);
  VAR_10 = FUNC_6(VAR_7, &VAR_9);
  if (VAR_10) {
   if (VAR_10 == -VAR_0)
    return -VAR_0;

   FUNC_5(VAR_7);
   FUNC_2(&VAR_3->dev, "i2c_write: error - timeout.\n");
   return -VAR_1;
  }
  if (VAR_9 & VAR_2) {
   FUNC_5(VAR_7);
   FUNC_2(&VAR_3->dev, "i2c_write: error - no ack.\n");
   return -VAR_1;
  }
 }
 if (VAR_6)
  FUNC_5(VAR_7);
 else
  FUNC_4(VAR_7);

 return VAR_8;
}
