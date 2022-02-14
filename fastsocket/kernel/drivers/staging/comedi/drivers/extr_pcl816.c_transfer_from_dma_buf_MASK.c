
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {TYPE_2__* async; } ;
struct comedi_device {int dummy; } ;
struct TYPE_4__ {int events; } ;
struct TYPE_3__ {scalar_t__ ai_act_chanlist_pos; scalar_t__ ai_act_chanlist_len; scalar_t__ ai_act_scan; scalar_t__ ai_scans; int ai_neverending; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,short) ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*) ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (struct comedi_device*,struct comedi_subdevice*) ;

__attribute__((used)) static void FUNC_3(struct comedi_device *VAR_3,
      struct comedi_subdevice *VAR_4, short *VAR_5,
      unsigned int VAR_6, unsigned int VAR_7)
{
 int VAR_8;

 VAR_4->async->events = 0;

 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {

  FUNC_0(VAR_4->async, VAR_5[VAR_6++]);

  if (++VAR_2->ai_act_chanlist_pos >=
      VAR_2->ai_act_chanlist_len) {
   VAR_2->ai_act_chanlist_pos = 0;
   VAR_2->ai_act_scan++;
  }

  if (!VAR_2->ai_neverending)
   if (VAR_2->ai_act_scan >= VAR_2->ai_scans) {
    FUNC_2(VAR_3, VAR_4);
    VAR_4->async->events |= VAR_1;
    VAR_4->async->events |= VAR_0;
    break;
   }
 }

 FUNC_1(VAR_3, VAR_4);
}
