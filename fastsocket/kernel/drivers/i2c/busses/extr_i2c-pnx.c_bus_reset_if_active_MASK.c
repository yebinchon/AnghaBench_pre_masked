
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i2c_pnx_algo_data {int dummy; } ;
struct i2c_adapter {int name; int dev; struct i2c_pnx_algo_data* algo_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_pnx_algo_data*) ;
 int FUNC_1 (struct i2c_pnx_algo_data*) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int ,struct i2c_pnx_algo_data*) ;

__attribute__((used)) static inline void FUNC_6(struct i2c_adapter *VAR_6)
{
 struct i2c_pnx_algo_data *VAR_7 = VAR_6->algo_data;
 u32 VAR_8;

 if ((VAR_8 = FUNC_3(FUNC_1(VAR_7))) & VAR_2) {
  FUNC_2(&VAR_6->dev,
   "%s: Bus is still active after xfer. Reset it...\n",
         VAR_6->name);
  FUNC_4(FUNC_3(FUNC_0(VAR_7)) | VAR_1,
     FUNC_0(VAR_7));
  FUNC_5(VAR_0, VAR_7);
 } else if (!(VAR_8 & VAR_4) || !(VAR_8 & VAR_5)) {



  FUNC_4(FUNC_3(FUNC_0(VAR_7)) | VAR_1,
     FUNC_0(VAR_7));
  FUNC_5(VAR_0, VAR_7);
 } else if (VAR_8 & VAR_3) {
  FUNC_4(FUNC_3(FUNC_0(VAR_7)) | VAR_1,
     FUNC_0(VAR_7));
  FUNC_5(VAR_0, VAR_7);
 }
}
