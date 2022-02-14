
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_rawmidi {int info_flags; int name; int private_free; struct snd_line6_midi* private_data; } ;
struct snd_line6_midi {TYPE_2__* line6; } ;
struct TYPE_4__ {TYPE_1__* properties; int card; } ;
struct TYPE_3__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,int ,int,int,struct snd_rawmidi**) ;
 int FUNC_1 (struct snd_rawmidi*,int ,int *) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_line6_midi *VAR_8)
{
 struct snd_rawmidi *VAR_9;
 int VAR_10;

 VAR_10 = FUNC_0(VAR_8->line6->card, "Line6 MIDI", 0, 1, 1,
         &VAR_9);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_9->private_data = VAR_8;
 VAR_9->private_free = VAR_5;
 FUNC_2(VAR_9->name, VAR_8->line6->properties->name);

 VAR_9->info_flags =
  VAR_2 |
  VAR_1 |
  VAR_0;

 FUNC_1(VAR_9, VAR_4,
       &VAR_7);
 FUNC_1(VAR_9, VAR_3,
       &VAR_6);
 return 0;
}
