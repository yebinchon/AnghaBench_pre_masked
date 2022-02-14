
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mite_struct {int dummy; } ;
struct comedi_subdevice {int async; } ;
struct comedi_device {struct comedi_subdevice* subdevices; } ;
struct TYPE_2__ {int mite_channel_lock; scalar_t__ ao_mite_chan; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct mite_struct *VAR_2,
    struct comedi_device *VAR_3)
{
 struct comedi_subdevice *VAR_4 = VAR_3->subdevices + VAR_0;
 unsigned long VAR_5;

 FUNC_1(&VAR_1->mite_channel_lock, VAR_5);
 if (VAR_1->ao_mite_chan) {
  FUNC_0(VAR_1->ao_mite_chan, VAR_4->async);
 }
 FUNC_2(&VAR_1->mite_channel_lock, VAR_5);
}
