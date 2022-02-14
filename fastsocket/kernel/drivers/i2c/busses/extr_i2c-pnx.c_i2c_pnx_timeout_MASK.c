
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int complete; int ret; } ;
struct i2c_pnx_algo_data {TYPE_1__ mif; } ;
struct i2c_adapter {int dev; struct i2c_pnx_algo_data* algo_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i2c_pnx_algo_data*) ;
 int FUNC_1 (struct i2c_pnx_algo_data*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,int,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int ,struct i2c_pnx_algo_data*) ;

__attribute__((used)) static void FUNC_7(unsigned long VAR_7)
{
 struct i2c_adapter *VAR_8 = (struct i2c_adapter *)VAR_7;
 struct i2c_pnx_algo_data *VAR_9 = VAR_8->algo_data;
 u32 VAR_10;

 FUNC_3(&VAR_8->dev, "Master timed out. stat = %04x, cntrl = %04x. "
        "Resetting master...\n",
        FUNC_4(FUNC_1(VAR_9)),
        FUNC_4(FUNC_0(VAR_9)));


 VAR_10 = FUNC_4(FUNC_0(VAR_9));
 VAR_10 &= ~(VAR_2 | VAR_4 | VAR_6 | VAR_3);
 FUNC_5(VAR_10, FUNC_0(VAR_9));

 VAR_10 |= VAR_5;
 FUNC_5(VAR_10, FUNC_0(VAR_9));
 FUNC_6(VAR_1, VAR_9);
 VAR_9->mif.ret = -VAR_0;
 FUNC_2(&VAR_9->mif.complete);
}
