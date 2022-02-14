
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ni_gpct {struct mite_channel* mite_chan; } ;
struct mite_channel {int channel; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {int mite_channel_lock; } ;


 int FUNC_0 (struct mite_channel*) ;
 int FUNC_1 (struct comedi_device*,int ,struct ni_gpct*) ;
 int FUNC_2 (struct ni_gpct*,int *) ;
 TYPE_1__* FUNC_3 (struct comedi_device*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

void FUNC_6(struct comedi_device *VAR_0,
      struct ni_gpct *VAR_1)
{
 unsigned long VAR_2;

 FUNC_4(&FUNC_3(VAR_0)->mite_channel_lock, VAR_2);
 if (VAR_1->mite_chan) {
  struct mite_channel *VAR_3 = VAR_1->mite_chan;

  FUNC_1(VAR_0, VAR_3->channel, VAR_1);
  FUNC_2(VAR_1, ((void*)0));
  FUNC_0(VAR_3);
 }
 FUNC_5(&FUNC_3(VAR_0)->mite_channel_lock, VAR_2);
}
