
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_rawmidi_substream {int number; TYPE_1__* rmidi; } ;
struct gmidi_device {int out_triggered; } ;
struct TYPE_2__ {struct gmidi_device* private_data; } ;


 int FUNC_0 (struct gmidi_device*,char*,int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct snd_rawmidi_substream *VAR_0, int VAR_1)
{
 struct gmidi_device *VAR_2 = VAR_0->rmidi->private_data;

 FUNC_0(VAR_2, "gmidi_out_trigger %d\n", VAR_1);
 if (VAR_1) {
  FUNC_2(VAR_0->number, &VAR_2->out_triggered);
 } else {
  FUNC_1(VAR_0->number, &VAR_2->out_triggered);
 }
}
