
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm95241_data {int config; int model; int trutherm; scalar_t__ valid; int rate; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct lm95241_data* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct i2c_client*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct i2c_client *VAR_11)
{
 struct lm95241_data *VAR_12 = FUNC_0(VAR_11);

 VAR_12->rate = VAR_1;
 VAR_12->valid = 0;
 VAR_12->config = VAR_0;
 VAR_12->model = 0;
 VAR_12->trutherm = (VAR_10 << VAR_8) | (VAR_10 << VAR_9);

 FUNC_1(VAR_11, VAR_2,
      VAR_12->config);
 FUNC_1(VAR_11, VAR_4,
      VAR_6 | VAR_7);
 FUNC_1(VAR_11, VAR_5,
      VAR_12->trutherm);
 FUNC_1(VAR_11, VAR_3,
      VAR_12->model);
}
