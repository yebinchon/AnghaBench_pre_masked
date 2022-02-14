
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
struct TYPE_4__ {int mite_channel_lock; int * ai_mite_chan; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int,int) ;



 int FUNC_3 (struct comedi_device*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_4)
{
 struct comedi_subdevice *VAR_5 = VAR_4->subdevices + VAR_1;
 int VAR_6;
 unsigned long VAR_7;

 VAR_6 = FUNC_3(VAR_4);
 if (VAR_6)
  return VAR_6;



 FUNC_0(VAR_5->async, VAR_5->async->prealloc_bufsz);

 FUNC_4(&VAR_3->mite_channel_lock, VAR_7);
 if (VAR_3->ai_mite_chan == ((void*)0)) {
  FUNC_5(&VAR_3->mite_channel_lock, VAR_7);
  return -VAR_0;
 }

 switch (VAR_2.reg_type) {
 case 130:
 case 129:
  FUNC_2(VAR_3->ai_mite_chan, 32, 16);
  break;
 case 128:
  FUNC_2(VAR_3->ai_mite_chan, 32, 32);
  break;
 default:
  FUNC_2(VAR_3->ai_mite_chan, 16, 16);
  break;
 };

 FUNC_1(VAR_3->ai_mite_chan);
 FUNC_5(&VAR_3->mite_channel_lock, VAR_7);

 return 0;
}
