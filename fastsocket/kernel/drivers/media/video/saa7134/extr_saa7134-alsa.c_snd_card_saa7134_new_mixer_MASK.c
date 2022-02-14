
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct snd_card {int mixername; } ;
struct TYPE_8__ {int capture_source_addr; struct snd_kcontrol** capture_ctl; struct snd_card* card; } ;
typedef TYPE_1__ snd_card_saa7134_t ;
struct TYPE_9__ {int private_value; } ;


 unsigned int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (struct snd_card*,struct snd_kcontrol*) ;
 struct snd_kcontrol* FUNC_2 (TYPE_2__*,TYPE_1__*) ;
 TYPE_2__* VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int FUNC_4(snd_card_saa7134_t * VAR_3)
{
 struct snd_card *VAR_4 = VAR_3->card;
 struct snd_kcontrol *VAR_5;
 unsigned int VAR_6;
 int VAR_7, VAR_8;

 FUNC_3(VAR_4->mixername, "SAA7134 Mixer");

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_2); VAR_6++) {
  VAR_5 = FUNC_2(&VAR_2[VAR_6],
     VAR_3);
  VAR_7 = FUNC_1(VAR_4, VAR_5);
  if (VAR_7 < 0)
   return VAR_7;
 }

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_1); VAR_6++) {
  VAR_5 = FUNC_2(&VAR_1[VAR_6],
     VAR_3);
  VAR_8 = VAR_1[VAR_6].private_value;
  VAR_3->capture_ctl[VAR_8] = VAR_5;
  VAR_7 = FUNC_1(VAR_4, VAR_5);
  if (VAR_7 < 0)
   return VAR_7;
 }

 VAR_3->capture_source_addr = VAR_0;
 return 0;
}
