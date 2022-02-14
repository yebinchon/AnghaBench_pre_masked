
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct snd_kcontrol {int private_value; } ;
struct TYPE_7__ {int input; int rate; } ;
struct saa7134_dev {TYPE_2__ dmasound; TYPE_1__* pci; } ;
struct TYPE_9__ {int capture_source_addr; int* capture_source; TYPE_3__** capture_ctl; int card; int mixer_lock; struct saa7134_dev* dev; } ;
typedef TYPE_4__ snd_card_saa7134_t ;
struct TYPE_8__ {int id; } ;
struct TYPE_6__ {int device; } ;





 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (struct saa7134_dev*,int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ,int *) ;
 TYPE_4__* FUNC_4 (struct snd_kcontrol*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct snd_kcontrol *VAR_8,
      int VAR_9, int VAR_10, bool VAR_11)
{
 snd_card_saa7134_t *VAR_12 = FUNC_4(VAR_8);
 int VAR_13 = 0, VAR_14 = VAR_8->private_value;
 int VAR_15, VAR_16;
 u32 VAR_17, VAR_18;
 int VAR_19, VAR_20;
 struct saa7134_dev *VAR_21;

 VAR_21 = VAR_12->dev;

 FUNC_5(&VAR_12->mixer_lock);

 VAR_15 = VAR_9 != 0 || VAR_10 != 0;
 VAR_16 = VAR_12->capture_source_addr;


 if (VAR_15) {
  VAR_13 = VAR_16 != VAR_14 ||
    VAR_12->capture_source[0] != VAR_9 ||
    VAR_12->capture_source[1] != VAR_10;

  VAR_12->capture_source[0] = VAR_9;
  VAR_12->capture_source[1] = VAR_10;
  VAR_12->capture_source_addr = VAR_14;
  VAR_21->dmasound.input = VAR_14;
 }
 FUNC_6(&VAR_12->mixer_lock);

 if (VAR_13) {
  switch (VAR_21->pci->device) {

  case 129:
   switch (VAR_14) {
   case 131:
    FUNC_0(VAR_5,
        0xc0, 0xc0);
    FUNC_0(VAR_6,
        0x03, 0x00);
    break;
   case 133:
   case 132:
    VAR_19 = (133 == VAR_14) ?
          0x00 : 0x08;
    VAR_20 = (32000 == VAR_21->dmasound.rate) ?
     0x01 : 0x03;
    FUNC_0(VAR_4,
        0x08, VAR_19);
    FUNC_0(VAR_5,
        0xc0, 0x80);
    FUNC_0(VAR_6,
        0x03, VAR_20);
    break;
   }

   break;
  case 130:
  case 128:
   VAR_18 = 0x03;
   VAR_17 = 0;
   switch (VAR_14) {
   case 131:
    VAR_18 = 0;
    VAR_17 = 2;
    break;
   case 133:
    VAR_17 = 0;
    break;
   case 132:
    VAR_17 = 9;
    break;
   }


   FUNC_1(VAR_21, VAR_3,
           0xbbbb10);

   if (VAR_9 || VAR_10) {

    FUNC_1(VAR_21, VAR_2,
            VAR_18);
    FUNC_2(VAR_1, VAR_17);
   } else {
    FUNC_1(VAR_21, VAR_2,
            0);
    FUNC_2(VAR_1, 0);
   }
   break;
  }
 }

 if (VAR_13) {
  if (VAR_11)
   FUNC_3(VAR_12->card,
           VAR_7,
           &VAR_12->capture_ctl[VAR_14]->id);

  if (VAR_16 != VAR_0 && VAR_16 != VAR_14)
   FUNC_3(VAR_12->card,
           VAR_7,
           &VAR_12->capture_ctl[VAR_16]->id);
 }

 return VAR_13;
}
