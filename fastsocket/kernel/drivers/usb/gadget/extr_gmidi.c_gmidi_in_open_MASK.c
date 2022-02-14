
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_rawmidi_substream {TYPE_1__* rmidi; } ;
struct TYPE_4__ {int state; } ;
struct gmidi_device {TYPE_2__ in_port; struct snd_rawmidi_substream* in_substream; } ;
struct TYPE_3__ {struct gmidi_device* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct gmidi_device*,char*) ;

__attribute__((used)) static int FUNC_1(struct snd_rawmidi_substream *VAR_1)
{
 struct gmidi_device *VAR_2 = VAR_1->rmidi->private_data;

 FUNC_0(VAR_2, "gmidi_in_open\n");
 VAR_2->in_substream = VAR_1;
 VAR_2->in_port.state = VAR_0;
 return 0;
}
