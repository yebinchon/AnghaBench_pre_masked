
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct comedi_subdevice {TYPE_2__* async; } ;
struct comedi_device {struct comedi_subdevice* subdevices; } ;
struct TYPE_6__ {int reg_type; } ;
struct TYPE_5__ {int prealloc_bufsz; } ;
struct TYPE_4__ {int mite_channel_lock; scalar_t__ ao_mite_chan; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct comedi_device*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_6)
{
 struct comedi_subdevice *VAR_7 = VAR_6->subdevices + VAR_1;
 int VAR_8;
 unsigned long VAR_9;

 VAR_8 = FUNC_3(VAR_6);
 if (VAR_8)
  return VAR_8;


 FUNC_0(VAR_7->async, VAR_7->async->prealloc_bufsz);

 FUNC_4(&VAR_3->mite_channel_lock, VAR_9);
 if (VAR_3->ao_mite_chan) {
  if (VAR_2.reg_type & (VAR_4 | VAR_5)) {
   FUNC_2(VAR_3->ao_mite_chan, 32, 32);
  } else {


   FUNC_2(VAR_3->ao_mite_chan, 16, 32);
  }
  FUNC_1(VAR_3->ao_mite_chan);
 } else
  VAR_8 = -VAR_0;
 FUNC_5(&VAR_3->mite_channel_lock, VAR_9);

 return VAR_8;
}
