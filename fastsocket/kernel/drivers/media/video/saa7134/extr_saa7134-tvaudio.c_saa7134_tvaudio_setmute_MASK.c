
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct saa7134_dev {TYPE_1__* pci; } ;
struct TYPE_2__ {int device; } ;






 int FUNC_0 (struct saa7134_dev*) ;
 int FUNC_1 (struct saa7134_dev*) ;

void FUNC_2(struct saa7134_dev *VAR_0)
{
 switch (VAR_0->pci->device) {
 case 131:
 case 129:
  FUNC_1(VAR_0);
  break;
 case 130:
 case 128:
  FUNC_0(VAR_0);
  break;
 }
}
