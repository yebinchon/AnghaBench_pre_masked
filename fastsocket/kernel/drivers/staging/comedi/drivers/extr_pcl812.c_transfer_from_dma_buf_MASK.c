
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {TYPE_2__* async; } ;
struct comedi_device {int dummy; } ;
struct TYPE_4__ {scalar_t__ cur_chan; int events; } ;
struct TYPE_3__ {scalar_t__ ai_act_scan; scalar_t__ ai_scans; int ai_neverending; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,short) ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (struct comedi_device*,struct comedi_subdevice*) ;

__attribute__((used)) static void FUNC_3(struct comedi_device *VAR_2,
      struct comedi_subdevice *VAR_3, short *VAR_4,
      unsigned int VAR_5, unsigned int VAR_6)
{
 unsigned int VAR_7;

 VAR_3->async->events = 0;
 for (VAR_7 = VAR_6; VAR_7; VAR_7--) {
  FUNC_0(VAR_3->async, VAR_4[VAR_5++]);

  if (VAR_3->async->cur_chan == 0) {
   VAR_1->ai_act_scan++;
   if (!VAR_1->ai_neverending)
    if (VAR_1->ai_act_scan >= VAR_1->ai_scans) {
     FUNC_2(VAR_2, VAR_3);
     VAR_3->async->events |= VAR_0;
     break;
    }
  }
 }

 FUNC_1(VAR_2, VAR_3);
}
