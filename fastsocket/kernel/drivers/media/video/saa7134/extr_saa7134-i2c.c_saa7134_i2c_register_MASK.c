
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_4__* adapter; } ;
struct TYPE_8__ {int * parent; } ;
struct TYPE_11__ {struct saa7134_dev* algo_data; int name; TYPE_1__ dev; } ;
struct saa7134_dev {TYPE_3__ i2c_client; int name; int eedata; TYPE_4__ i2c_adap; int v4l2_dev; TYPE_2__* pci; } ;
struct TYPE_9__ {int dev; } ;


 int FUNC_0 (int ,TYPE_3__*) ;
 int FUNC_1 (TYPE_4__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (TYPE_4__*,int *) ;
 TYPE_4__ VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_3 (struct saa7134_dev*,int ,int) ;
 int FUNC_4 (struct saa7134_dev*) ;
 int FUNC_5 (int ,int ) ;

int FUNC_6(struct saa7134_dev *VAR_3)
{
 VAR_3->i2c_adap = VAR_1;
 VAR_3->i2c_adap.dev.parent = &VAR_3->pci->dev;
 FUNC_5(VAR_3->i2c_adap.name,VAR_3->name);
 VAR_3->i2c_adap.algo_data = VAR_3;
 FUNC_2(&VAR_3->i2c_adap, &VAR_3->v4l2_dev);
 FUNC_1(&VAR_3->i2c_adap);

 VAR_3->i2c_client = VAR_2;
 VAR_3->i2c_client.adapter = &VAR_3->i2c_adap;

 FUNC_3(VAR_3,VAR_3->eedata,sizeof(VAR_3->eedata));
 if (VAR_0)
  FUNC_0(VAR_3->name,&VAR_3->i2c_client);


 FUNC_4(VAR_3);
 return 0;
}
