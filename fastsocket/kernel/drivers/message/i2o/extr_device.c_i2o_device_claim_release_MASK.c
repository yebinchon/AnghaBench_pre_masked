
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
 int FUNC_4 (int) ;

int FUNC_5(struct i2o_device *VAR_2)
{
 int VAR_3;
 int VAR_4 = 0;

 FUNC_1(&VAR_2->lock);





 for (VAR_3 = 0; VAR_3 < 10; VAR_3++) {
  VAR_4 = FUNC_0(VAR_2, VAR_1,
         VAR_0);
  if (!VAR_4)
   break;

  FUNC_4(1);
 }

 if (!VAR_4)
  FUNC_3("i2o: claim release of device %d succeded\n",
    VAR_2->lct_data.tid);
 else
  FUNC_3("i2o: claim release of device %d failed %d\n",
    VAR_2->lct_data.tid, VAR_4);

 FUNC_2(&VAR_2->lock);

 return VAR_4;
}
