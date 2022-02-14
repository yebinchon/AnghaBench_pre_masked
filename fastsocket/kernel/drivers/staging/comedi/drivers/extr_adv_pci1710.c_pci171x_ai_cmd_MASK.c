
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {int dummy; } ;
struct comedi_cmd {scalar_t__ stop_src; scalar_t__ scan_begin_src; scalar_t__ convert_src; scalar_t__ start_src; scalar_t__ convert_arg; scalar_t__ stop_arg; int flags; int chanlist; int chanlist_len; } ;
struct TYPE_4__ {scalar_t__ ai_timer1; scalar_t__ ai_scans; scalar_t__ ai_timer2; int ai_data; int ai_data_len; int ai_flags; int ai_chanlist; int ai_n_chan; } ;
struct TYPE_3__ {int prealloc_buf; int prealloc_bufsz; struct comedi_cmd cmd; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_2__* VAR_4 ;
 int FUNC_1 (int,struct comedi_device*,struct comedi_subdevice*) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_5, struct comedi_subdevice *VAR_6)
{
 struct comedi_cmd *VAR_7 = &VAR_6->async->cmd;

 FUNC_0("adv_pci1710 EDBG: BGN: pci171x_ai_cmd(...)\n");
 VAR_4->ai_n_chan = VAR_7->chanlist_len;
 VAR_4->ai_chanlist = VAR_7->chanlist;
 VAR_4->ai_flags = VAR_7->flags;
 VAR_4->ai_data_len = VAR_6->async->prealloc_bufsz;
 VAR_4->ai_data = VAR_6->async->prealloc_buf;
 VAR_4->ai_timer1 = 0;
 VAR_4->ai_timer2 = 0;

 if (VAR_7->stop_src == VAR_0) {
  VAR_4->ai_scans = VAR_7->stop_arg;
 } else {
  VAR_4->ai_scans = 0;
 }

 if (VAR_7->scan_begin_src == VAR_2) {
  if (VAR_7->convert_src == VAR_3) {
   VAR_4->ai_timer1 = VAR_7->convert_arg;
   return FUNC_1(VAR_7->start_src ==
        VAR_1 ? 2 : 1, VAR_5,
        VAR_6);
  }
  if (VAR_7->convert_src == VAR_1) {
   return FUNC_1(3, VAR_5, VAR_6);
  }
 }

 return -1;
}
