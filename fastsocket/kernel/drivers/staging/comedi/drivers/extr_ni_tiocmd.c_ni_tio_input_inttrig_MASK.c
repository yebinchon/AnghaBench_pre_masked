
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ni_gpct {int lock; scalar_t__ mite_chan; } ;
struct comedi_subdevice {TYPE_1__* async; struct ni_gpct* private; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {int * inttrig; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct ni_gpct*,int,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_3,
    struct comedi_subdevice *VAR_4,
    unsigned int VAR_5)
{
 unsigned long VAR_6;
 int VAR_7 = 0;
 struct ni_gpct *VAR_8 = VAR_4->private;

 FUNC_0(VAR_8 == ((void*)0));
 if (VAR_5 != 0)
  return -VAR_0;

 FUNC_3(&VAR_8->lock, VAR_6);
 if (VAR_8->mite_chan)
  FUNC_1(VAR_8->mite_chan);
 else
  VAR_7 = -VAR_1;
 FUNC_4(&VAR_8->lock, VAR_6);
 if (VAR_7 < 0)
  return VAR_7;
 VAR_7 = FUNC_2(VAR_8, 1, VAR_2);
 VAR_4->async->inttrig = ((void*)0);

 return VAR_7;
}
