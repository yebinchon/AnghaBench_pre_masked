
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_4__ {int mite_channel_lock; TYPE_1__* mite; int * di_mite_chan; } ;
struct TYPE_3__ {scalar_t__ daq_io_addr; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_9(struct comedi_device *VAR_2)
{
 unsigned long VAR_3;

 FUNC_6(&VAR_1->mite_channel_lock, VAR_3);
 if (VAR_1->di_mite_chan) {
  FUNC_0(VAR_1->di_mite_chan);
  FUNC_1(VAR_1->di_mite_chan);
  FUNC_2(VAR_1->di_mite_chan);
  VAR_1->di_mite_chan = ((void*)0);
  FUNC_8(FUNC_4(0) |
         FUNC_5(0),
         VAR_1->mite->daq_io_addr + VAR_0);
  FUNC_3();
 }
 FUNC_7(&VAR_1->mite_channel_lock, VAR_3);
}
