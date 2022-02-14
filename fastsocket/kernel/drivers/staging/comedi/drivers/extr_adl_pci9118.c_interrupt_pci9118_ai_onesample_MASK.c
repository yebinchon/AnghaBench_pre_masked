
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {scalar_t__ iobase; } ;
struct TYPE_4__ {unsigned short ai_maskerr; scalar_t__ ai16bits; short* chanlist; size_t ai_n_scanlen; scalar_t__ ai_act_scan; scalar_t__ ai_scans; int ai_neverending; } ;
struct TYPE_3__ {int events; size_t cur_chan; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct comedi_subdevice*,short) ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*) ;
 TYPE_2__* VAR_3 ;
 short FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct comedi_device*,struct comedi_subdevice*) ;
 scalar_t__ FUNC_4 (struct comedi_device*,struct comedi_subdevice*,unsigned short) ;
 int FUNC_5 (char*,short,short) ;

__attribute__((used)) static void FUNC_6(struct comedi_device *VAR_4,
        struct comedi_subdevice *VAR_5,
        unsigned short VAR_6,
        unsigned int VAR_7,
        unsigned short VAR_8)
{
 register short VAR_9;

 VAR_5->async->events = 0;

 if (VAR_6 & VAR_3->ai_maskerr)
  if (FUNC_4(VAR_4, VAR_5, VAR_6))
   return;

 VAR_9 = FUNC_2(VAR_4->iobase + VAR_2);
 FUNC_0(VAR_5, VAR_9);
 VAR_5->async->cur_chan++;
 if (VAR_5->async->cur_chan >= VAR_3->ai_n_scanlen) {
  VAR_5->async->cur_chan %= VAR_3->ai_n_scanlen;
  VAR_3->ai_act_scan++;
  if (!(VAR_3->ai_neverending))
   if (VAR_3->ai_act_scan >= VAR_3->ai_scans) {
    FUNC_3(VAR_4, VAR_5);
    VAR_5->async->events |= VAR_0;
   }
 }

 if (VAR_5->async->events)
  FUNC_1(VAR_4, VAR_5);
}
