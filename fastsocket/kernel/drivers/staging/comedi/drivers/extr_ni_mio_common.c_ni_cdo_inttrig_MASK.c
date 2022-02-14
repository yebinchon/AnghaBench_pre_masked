
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {TYPE_2__* async; } ;
struct comedi_device {int dummy; } ;
struct TYPE_4__ {int prealloc_bufsz; int * inttrig; } ;
struct TYPE_3__ {int mite_channel_lock; scalar_t__ cdo_mite_chan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (struct comedi_device*,char*) ;
 TYPE_1__* VAR_7 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int,int) ;
 int FUNC_4 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct comedi_device *VAR_8, struct comedi_subdevice *VAR_9,
     unsigned int VAR_10)
{



 int VAR_11 = 0;
 unsigned VAR_12;
 const unsigned VAR_13 = 100;

 VAR_9->async->inttrig = ((void*)0);


 FUNC_0(VAR_9->async, VAR_9->async->prealloc_bufsz);
 for (VAR_12 = 0; VAR_12 < VAR_13; ++VAR_12) {
  if (FUNC_5(VAR_6) & VAR_3)
   break;
  FUNC_9(10);
 }
 if (VAR_12 == VAR_13) {
  FUNC_1(VAR_8, "dma failed to fill cdo fifo!");
  FUNC_4(VAR_8, VAR_9);
  return -VAR_4;
 }
 FUNC_6(VAR_0 | VAR_2 |
    VAR_1,
    VAR_5);
 return VAR_11;
}
