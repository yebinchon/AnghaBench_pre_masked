
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * parent; } ;
struct TYPE_12__ {int name; TYPE_1__ dev; TYPE_5__* algo_data; int owner; } ;
struct TYPE_11__ {struct igb_adapter* data; } ;
struct TYPE_10__ {scalar_t__ type; } ;
struct TYPE_9__ {TYPE_4__ mac; } ;
struct igb_adapter {TYPE_6__ i2c_adap; TYPE_2__* pdev; TYPE_5__ i2c_algo; TYPE_3__ hw; } ;
typedef int s32 ;
struct TYPE_8__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_6__*) ;
 TYPE_5__ VAR_3 ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static s32 FUNC_2(struct igb_adapter *VAR_4)
{
 s32 VAR_5 = VAR_0;


 if (VAR_4->hw.mac.type != VAR_2)
  return VAR_0;





 VAR_4->i2c_adap.owner = VAR_1;
 VAR_4->i2c_algo = VAR_3;
 VAR_4->i2c_algo.data = VAR_4;
 VAR_4->i2c_adap.algo_data = &VAR_4->i2c_algo;
 VAR_4->i2c_adap.dev.parent = &VAR_4->pdev->dev;
 FUNC_1(VAR_4->i2c_adap.name, "igb BB",
  sizeof(VAR_4->i2c_adap.name));
 VAR_5 = FUNC_0(&VAR_4->i2c_adap);
 return VAR_5;
}
