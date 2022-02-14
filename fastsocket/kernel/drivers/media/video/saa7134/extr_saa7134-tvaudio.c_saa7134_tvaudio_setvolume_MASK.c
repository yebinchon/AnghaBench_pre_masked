
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct saa7134_dev {TYPE_1__* pci; } ;
struct TYPE_2__ {int device; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;

void FUNC_1(struct saa7134_dev *VAR_3, int VAR_4)
{
 switch (VAR_3->pci->device) {
 case 128:
  FUNC_0(VAR_0, VAR_4 & 0x1f);
  FUNC_0(VAR_1, VAR_4 & 0x1f);
  FUNC_0(VAR_2, VAR_4 & 0x1f);
  break;
 }
}
