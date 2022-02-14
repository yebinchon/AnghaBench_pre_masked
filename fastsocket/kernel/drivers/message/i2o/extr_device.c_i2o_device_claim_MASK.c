
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tid; } ;
struct i2o_device {int lock; TYPE_1__ lct_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i2o_device*,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ,...) ;

int FUNC_4(struct i2o_device *VAR_2)
{
 int VAR_3 = 0;

 FUNC_1(&VAR_2->lock);

 VAR_3 = FUNC_0(VAR_2, VAR_1, VAR_0);
 if (!VAR_3)
  FUNC_3("i2o: claim of device %d succeded\n",
    VAR_2->lct_data.tid);
 else
  FUNC_3("i2o: claim of device %d failed %d\n",
    VAR_2->lct_data.tid, VAR_3);

 FUNC_2(&VAR_2->lock);

 return VAR_3;
}
