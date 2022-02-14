
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_5__ {int mite_channel_lock; TYPE_1__* ao_mite_chan; int ao_mite_ring; int mite; } ;
struct TYPE_4__ {int channel; int dir; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct comedi_device*,char*) ;
 TYPE_2__* VAR_2 ;
 TYPE_1__* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct comedi_device*,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_3)
{
 unsigned long VAR_4;

 FUNC_4(&VAR_2->mite_channel_lock, VAR_4);
 FUNC_0(VAR_2->ao_mite_chan);
 VAR_2->ao_mite_chan =
     FUNC_2(VAR_2->mite, VAR_2->ao_mite_ring);
 if (VAR_2->ao_mite_chan == ((void*)0)) {
  FUNC_5(&VAR_2->mite_channel_lock, VAR_4);
  FUNC_1(VAR_3,
        "failed to reserve mite dma channel for analog outut.");
  return -VAR_1;
 }
 VAR_2->ao_mite_chan->dir = VAR_0;
 FUNC_3(VAR_3, VAR_2->ao_mite_chan->channel);
 FUNC_5(&VAR_2->mite_channel_lock, VAR_4);
 return 0;
}
