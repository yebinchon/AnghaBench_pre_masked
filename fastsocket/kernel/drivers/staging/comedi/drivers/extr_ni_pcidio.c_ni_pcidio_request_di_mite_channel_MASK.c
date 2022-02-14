
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_7__ {int mite_channel_lock; TYPE_2__* mite; TYPE_1__* di_mite_chan; int di_mite_ring; } ;
struct TYPE_6__ {scalar_t__ daq_io_addr; } ;
struct TYPE_5__ {int channel; } ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct comedi_device*,char*) ;
 TYPE_3__* VAR_2 ;
 TYPE_1__* FUNC_2 (TYPE_2__*,int ,int,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct comedi_device *VAR_3)
{
 unsigned long VAR_4;

 FUNC_6(&VAR_2->mite_channel_lock, VAR_4);
 FUNC_0(VAR_2->di_mite_chan);
 VAR_2->di_mite_chan =
     FUNC_2(VAR_2->mite,
       VAR_2->di_mite_ring, 1, 2);
 if (VAR_2->di_mite_chan == ((void*)0)) {
  FUNC_7(&VAR_2->mite_channel_lock, VAR_4);
  FUNC_1(VAR_3, "failed to reserve mite dma channel.");
  return -VAR_1;
 }
 FUNC_8(FUNC_4(VAR_2->di_mite_chan->channel) |
        FUNC_5(VAR_2->di_mite_chan->channel),
        VAR_2->mite->daq_io_addr + VAR_0);
 FUNC_3();
 FUNC_7(&VAR_2->mite_channel_lock, VAR_4);
 return 0;
}
