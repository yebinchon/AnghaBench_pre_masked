
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_rawmidi_substream {TYPE_1__* rmidi; } ;
struct gmidi_device {int dummy; } ;
struct TYPE_2__ {struct gmidi_device* private_data; } ;


 int FUNC_0 (struct gmidi_device*,char*) ;

__attribute__((used)) static int FUNC_1(struct snd_rawmidi_substream *VAR_0)
{
 struct gmidi_device *VAR_1 = VAR_0->rmidi->private_data;

 FUNC_0(VAR_1, "gmidi_out_close\n");
 return 0;
}
