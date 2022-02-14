
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct saa7134_dev {TYPE_2__* input; TYPE_1__* pci; } ;
struct TYPE_4__ {int amux; } ;
struct TYPE_3__ {int device; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct saa7134_dev*) ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int ,int) ;

void FUNC_3(struct saa7134_dev *VAR_8)
{
 int VAR_9;

 if (!FUNC_0(VAR_8))
  return;

 if (VAR_8->pci->device == VAR_0)
  return;


 FUNC_1(VAR_2 >> 2, 0x0E000000, 0x00000000);

 switch (VAR_8->pci->device) {
 case 130:
 case 128:

     FUNC_2(VAR_1, 0x00);

     FUNC_2(VAR_3, 0x11);
     break;

 case 129:
     VAR_9 = (VAR_8->input->amux == VAR_7) ? 0x00 : 0x01;


     FUNC_2(VAR_6, 0x80);
     FUNC_2(VAR_4, VAR_9);
     FUNC_2(VAR_5, 0x0F);
     FUNC_2(VAR_3, 0x01);

 default:
     break;
 }
}
