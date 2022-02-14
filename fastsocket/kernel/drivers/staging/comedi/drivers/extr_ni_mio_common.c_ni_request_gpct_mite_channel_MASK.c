
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mite_channel {int dir; int channel; } ;
struct comedi_device {int dummy; } ;
typedef enum comedi_io_direction { ____Placeholder_comedi_io_direction } comedi_io_direction ;
struct TYPE_6__ {int mite_channel_lock; TYPE_1__* counter_dev; int * gpct_mite_ring; int mite; } ;
struct TYPE_5__ {int mite_chan; } ;
struct TYPE_4__ {TYPE_2__* counters; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 (struct comedi_device*,char*) ;
 TYPE_3__* VAR_2 ;
 struct mite_channel* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct comedi_device*,unsigned int,int ) ;
 int FUNC_4 (TYPE_2__*,struct mite_channel*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct comedi_device *VAR_3,
     unsigned VAR_4,
     enum comedi_io_direction VAR_5)
{
 unsigned long VAR_6;
 struct mite_channel *VAR_7;

 FUNC_0(VAR_4 >= VAR_1);
 FUNC_5(&VAR_2->mite_channel_lock, VAR_6);
 FUNC_0(VAR_2->counter_dev->counters[VAR_4].mite_chan);
 VAR_7 =
     FUNC_2(VAR_2->mite,
     VAR_2->gpct_mite_ring[VAR_4]);
 if (VAR_7 == ((void*)0)) {
  FUNC_6(&VAR_2->mite_channel_lock, VAR_6);
  FUNC_1(VAR_3,
        "failed to reserve mite dma channel for counter.");
  return -VAR_0;
 }
 VAR_7->dir = VAR_5;
 FUNC_4(&VAR_2->counter_dev->counters[VAR_4],
    VAR_7);
 FUNC_3(VAR_3, VAR_4, VAR_7->channel);
 FUNC_6(&VAR_2->mite_channel_lock, VAR_6);
 return 0;
}
