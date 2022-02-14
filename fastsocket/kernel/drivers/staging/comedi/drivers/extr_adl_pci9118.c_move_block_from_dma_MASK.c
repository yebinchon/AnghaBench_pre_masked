
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {int dummy; } ;
struct TYPE_4__ {unsigned int ai_act_scan; unsigned int ai_n_scanlen; } ;
struct TYPE_3__ {unsigned int cur_chan; } ;


 unsigned int FUNC_0 (struct comedi_subdevice*,short*,unsigned int) ;
 unsigned int FUNC_1 (struct comedi_device*,struct comedi_subdevice*,short*,unsigned int) ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static unsigned int FUNC_2(struct comedi_device *VAR_1,
     struct comedi_subdevice *VAR_2,
     short *VAR_3,
     unsigned int VAR_4)
{
 unsigned int VAR_5;

 VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);
 VAR_0->ai_act_scan +=
     (VAR_2->async->cur_chan + VAR_4) / VAR_0->ai_n_scanlen;
 VAR_2->async->cur_chan += VAR_4;
 VAR_2->async->cur_chan %= VAR_0->ai_n_scanlen;
 VAR_5 =
     FUNC_0(VAR_2, VAR_3,
          VAR_4 * sizeof(short));
 if (VAR_5 < VAR_4 * sizeof(short))
  return -1;
 return 0;
}
