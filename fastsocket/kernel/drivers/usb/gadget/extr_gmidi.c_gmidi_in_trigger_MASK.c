
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_rawmidi_substream {TYPE_1__* rmidi; } ;
struct TYPE_4__ {int active; } ;
struct gmidi_device {int tasklet; TYPE_2__ in_port; } ;
struct TYPE_3__ {struct gmidi_device* private_data; } ;


 int FUNC_0 (struct gmidi_device*,char*,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct snd_rawmidi_substream *VAR_0, int VAR_1)
{
 struct gmidi_device *VAR_2 = VAR_0->rmidi->private_data;

 FUNC_0(VAR_2, "gmidi_in_trigger %d\n", VAR_1);
 VAR_2->in_port.active = VAR_1;
 if (VAR_1) {
  FUNC_1(&VAR_2->tasklet);
 }
}
