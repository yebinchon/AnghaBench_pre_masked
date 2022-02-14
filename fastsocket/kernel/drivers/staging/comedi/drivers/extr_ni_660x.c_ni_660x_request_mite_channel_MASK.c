
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ni_gpct {int mite_chan; } ;
struct mite_channel {int dir; int channel; } ;
struct comedi_device {int dummy; } ;
typedef enum comedi_io_direction { ____Placeholder_comedi_io_direction } comedi_io_direction ;
struct TYPE_3__ {int mite_channel_lock; int mite; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct comedi_device*,char*) ;
 struct mite_channel* FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_1__*,struct ni_gpct*) ;
 int FUNC_4 (struct comedi_device*,int ,struct ni_gpct*) ;
 int FUNC_5 (struct ni_gpct*,struct mite_channel*) ;
 TYPE_1__* FUNC_6 (struct comedi_device*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_9(struct comedi_device *VAR_1,
     struct ni_gpct *VAR_2,
     enum comedi_io_direction VAR_3)
{
 unsigned long VAR_4;
 struct mite_channel *VAR_5;

 FUNC_7(&FUNC_6(VAR_1)->mite_channel_lock, VAR_4);
 FUNC_0(VAR_2->mite_chan);
 VAR_5 =
     FUNC_2(FUNC_6(VAR_1)->mite, FUNC_3(FUNC_6(VAR_1),
              VAR_2));
 if (VAR_5 == ((void*)0)) {
  FUNC_8(&FUNC_6(VAR_1)->mite_channel_lock, VAR_4);
  FUNC_1(VAR_1,
        "failed to reserve mite dma channel for counter.");
  return -VAR_0;
 }
 VAR_5->dir = VAR_3;
 FUNC_5(VAR_2, VAR_5);
 FUNC_4(VAR_1, VAR_5->channel, VAR_2);
 FUNC_8(&FUNC_6(VAR_1)->mite_channel_lock, VAR_4);
 return 0;
}
