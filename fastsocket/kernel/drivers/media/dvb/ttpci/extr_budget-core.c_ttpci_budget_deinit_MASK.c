
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7146_dev {int pci; } ;
struct budget {int dvb_adapter; int i2c_adap; int pt; int grabbing; int vpe_tasklet; struct saa7146_dev* dev; } ;


 int FUNC_0 (struct budget*) ;
 int FUNC_1 (int,char*,struct budget*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct budget *VAR_0)
{
 struct saa7146_dev *VAR_1 = VAR_0->dev;

 FUNC_1(2, "budget: %p\n", VAR_0);

 FUNC_0(VAR_0);

 FUNC_5(&VAR_0->vpe_tasklet);

 FUNC_4(VAR_1->pci, VAR_0->grabbing, &VAR_0->pt);

 FUNC_3(&VAR_0->i2c_adap);

 FUNC_2(&VAR_0->dvb_adapter);

 return 0;
}
