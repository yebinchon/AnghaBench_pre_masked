
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_algo_pcf_data {int dummy; } ;
struct i2c_adapter {int dev; struct i2c_algo_pcf_data* algo_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 char FUNC_1 (struct i2c_algo_pcf_data*) ;
 int FUNC_2 (struct i2c_algo_pcf_data*) ;
 int FUNC_3 (struct i2c_algo_pcf_data*) ;
 int FUNC_4 (struct i2c_algo_pcf_data*,int,int ) ;
 int FUNC_5 (struct i2c_algo_pcf_data*,int*) ;

__attribute__((used)) static int FUNC_6(struct i2c_adapter *VAR_3, char *VAR_4,
    int VAR_5, int VAR_6)
{
 int VAR_7, VAR_8;
 struct i2c_algo_pcf_data *VAR_9 = VAR_3->algo_data;
 int VAR_10;


 for (VAR_7 = 0; VAR_7 <= VAR_5; VAR_7++) {

  if ((VAR_10 = FUNC_5(VAR_9, &VAR_8))) {
   if (VAR_10 == -VAR_0)
    return -VAR_0;

   FUNC_3(VAR_9);
   FUNC_0(&VAR_3->dev, "pcf_readbytes timed out.\n");
   return -1;
  }

  if ((VAR_8 & VAR_2) && (VAR_7 != VAR_5)) {
   FUNC_3(VAR_9);
   FUNC_0(&VAR_3->dev, "i2c_read: i2c_inb, No ack.\n");
   return -1;
  }

  if (VAR_7 == VAR_5 - 1) {
   FUNC_4(VAR_9, 1, VAR_1);
  } else if (VAR_7 == VAR_5) {
   if (VAR_6)
    FUNC_3(VAR_9);
   else
    FUNC_2(VAR_9);
  }

  if (VAR_7)
   VAR_4[VAR_7 - 1] = FUNC_1(VAR_9);
  else
   FUNC_1(VAR_9);
 }

 return VAR_7 - 1;
}
