
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {int dummy; } ;
struct TYPE_4__ {unsigned int ui_AiActualScan; unsigned int ui_AiScanLength; } ;
struct TYPE_3__ {unsigned int cur_chan; } ;


 int FUNC_0 (struct comedi_subdevice*,short*,unsigned int) ;
 TYPE_2__* VAR_0 ;

void FUNC_1(struct comedi_device *VAR_1,
 struct comedi_subdevice *VAR_2, short *VAR_3, unsigned int VAR_4)
{
 VAR_0->ui_AiActualScan +=
  (VAR_2->async->cur_chan + VAR_4) / VAR_0->ui_AiScanLength;
 VAR_2->async->cur_chan += VAR_4;
 VAR_2->async->cur_chan %= VAR_0->ui_AiScanLength;

 FUNC_0(VAR_2, VAR_3, VAR_4 * sizeof(short));
}
