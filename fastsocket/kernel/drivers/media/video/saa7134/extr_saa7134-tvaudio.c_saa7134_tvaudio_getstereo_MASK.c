
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct saa7134_dev {int tvaudio; TYPE_1__* pci; } ;
struct TYPE_2__ {int device; } ;





 int VAR_0 ;
 int FUNC_0 (struct saa7134_dev*) ;
 int FUNC_1 (struct saa7134_dev*,int ) ;

int FUNC_2(struct saa7134_dev *VAR_1)
{
 int VAR_2 = VAR_0;

 switch (VAR_1->pci->device) {
 case 129:
  if (VAR_1->tvaudio)
   VAR_2 = FUNC_1(VAR_1,VAR_1->tvaudio);
  break;
 case 130:
 case 128:
  VAR_2 = FUNC_0(VAR_1);
  break;
 }
 return VAR_2;
}
