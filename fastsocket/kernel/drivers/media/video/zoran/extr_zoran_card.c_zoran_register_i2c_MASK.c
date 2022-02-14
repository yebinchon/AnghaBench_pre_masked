
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * parent; } ;
struct TYPE_9__ {TYPE_1__ dev; TYPE_3__* algo_data; int name; } ;
struct TYPE_8__ {struct zoran* data; } ;
struct zoran {TYPE_4__ i2c_adapter; TYPE_2__* pci_dev; TYPE_3__ i2c_algo; int v4l2_dev; } ;
struct i2c_algo_bit_data {int dummy; } ;
struct TYPE_7__ {int dev; } ;


 int FUNC_0 (struct zoran*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*,int *) ;
 int FUNC_3 (TYPE_3__*,int *,int) ;
 int FUNC_4 (int ,int ,int) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_5 (struct zoran *VAR_1)
{
 FUNC_3(&VAR_1->i2c_algo, &VAR_0,
        sizeof(struct i2c_algo_bit_data));
 VAR_1->i2c_algo.data = VAR_1;
 FUNC_4(VAR_1->i2c_adapter.name, FUNC_0(VAR_1),
  sizeof(VAR_1->i2c_adapter.name));
 FUNC_2(&VAR_1->i2c_adapter, &VAR_1->v4l2_dev);
 VAR_1->i2c_adapter.algo_data = &VAR_1->i2c_algo;
 VAR_1->i2c_adapter.dev.parent = &VAR_1->pci_dev->dev;
 return FUNC_1(&VAR_1->i2c_adapter);
}
