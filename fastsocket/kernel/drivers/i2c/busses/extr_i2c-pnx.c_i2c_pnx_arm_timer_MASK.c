
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int expires; unsigned long data; } ;
struct TYPE_2__ {struct timer_list timer; } ;
struct i2c_pnx_algo_data {TYPE_1__ mif; } ;
struct i2c_adapter {int dev; struct i2c_pnx_algo_data* algo_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct timer_list*) ;
 int FUNC_1 (struct timer_list*) ;
 int FUNC_2 (int *,char*,int,int) ;
 int VAR_2 ;

__attribute__((used)) static inline void FUNC_3(struct i2c_adapter *VAR_3)
{
 struct i2c_pnx_algo_data *VAR_4 = VAR_3->algo_data;
 struct timer_list *VAR_5 = &VAR_4->mif.timer;
 int VAR_6 = VAR_1 / (1000 / VAR_0);

 if (VAR_6 <= 1)
  VAR_6 = 2;

 FUNC_1(VAR_5);

 FUNC_2(&VAR_3->dev, "Timer armed at %lu plus %u jiffies.\n",
  VAR_2, VAR_6);

 VAR_5->expires = VAR_2 + VAR_6;
 VAR_5->data = (unsigned long)VAR_3;

 FUNC_0(VAR_5);
}
