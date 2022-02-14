
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct saa7134_dev {size_t board; TYPE_1__* pci; } ;
struct TYPE_4__ {int audio_clock; } ;
struct TYPE_3__ {int device; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 () ;
 TYPE_2__* VAR_8 ;
 int FUNC_1 (struct saa7134_dev*,int,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;

void FUNC_6(struct saa7134_dev *VAR_9)
{
 int VAR_10 = VAR_8[VAR_9->board].audio_clock;

 if (VAR_6 != VAR_7)
  VAR_10 = VAR_7;

 switch (VAR_9->pci->device) {
 case 129:

  FUNC_2(VAR_3, 0x00);
  if (FUNC_0())
   FUNC_4();
  else
   FUNC_5(10);

  FUNC_2(VAR_0, VAR_10 & 0xff);
  FUNC_2(VAR_1, (VAR_10 >> 8) & 0xff);
  FUNC_2(VAR_2, (VAR_10 >> 16) & 0xff);

  FUNC_2(VAR_3, 0x01);
  FUNC_2(VAR_5, 0x14);
  FUNC_2(VAR_4, 0x50);
  break;
 case 130:
 case 128:
  FUNC_3(0x598 >> 2, VAR_10);
  FUNC_1(VAR_9, 0x474 >> 2, 0x00);
  FUNC_1(VAR_9, 0x450 >> 2, 0x00);
 }
}
