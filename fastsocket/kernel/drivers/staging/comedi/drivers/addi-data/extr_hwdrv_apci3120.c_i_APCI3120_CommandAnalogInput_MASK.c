
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {int dummy; } ;
struct comedi_cmd {scalar_t__ stop_src; int stop_arg; scalar_t__ start_src; scalar_t__ scan_begin_src; scalar_t__ convert_src; scalar_t__ convert_arg; scalar_t__ scan_begin_arg; int chanlist; int scan_end_arg; int chanlist_len; int flags; } ;
struct TYPE_4__ {int ui_AiNbrofScans; int b_AiContinuous; scalar_t__ ui_AiTimer0; scalar_t__ ui_AiTimer1; int b_ExttrigEnable; int ui_AiDataLength; int AiData; int pui_AiChannelList; int ui_AiScanLength; int ui_AiNbrofChannels; int ui_AiFlags; } ;
struct TYPE_3__ {int prealloc_bufsz; int prealloc_buf; struct comedi_cmd cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_2__* VAR_6 ;
 int FUNC_0 (int,struct comedi_device*,struct comedi_subdevice*) ;

int FUNC_1(struct comedi_device *VAR_7, struct comedi_subdevice *VAR_8)
{
 struct comedi_cmd *VAR_9 = &VAR_8->async->cmd;


 VAR_6->ui_AiFlags = VAR_9->flags;
 VAR_6->ui_AiNbrofChannels = VAR_9->chanlist_len;
 VAR_6->ui_AiScanLength = VAR_9->scan_end_arg;
 VAR_6->pui_AiChannelList = VAR_9->chanlist;


 VAR_6->AiData = VAR_8->async->prealloc_buf;

 VAR_6->ui_AiDataLength = VAR_8->async->prealloc_bufsz;

 if (VAR_9->stop_src == VAR_2) {
  VAR_6->ui_AiNbrofScans = VAR_9->stop_arg;
 } else {
  VAR_6->ui_AiNbrofScans = 0;
 }

 VAR_6->ui_AiTimer0 = 0;
 VAR_6->ui_AiTimer1 = 0;
 if ((VAR_6->ui_AiNbrofScans == 0) || (VAR_6->ui_AiNbrofScans == -1))
  VAR_6->b_AiContinuous = 1;


 if (VAR_9->start_src == VAR_3)
  VAR_6->b_ExttrigEnable = VAR_1;
 else
  VAR_6->b_ExttrigEnable = VAR_0;

 if (VAR_9->scan_begin_src == VAR_4) {

  if (VAR_9->convert_src == VAR_5) {


   VAR_6->ui_AiTimer0 = VAR_9->convert_arg;

   return FUNC_0(1, VAR_7, VAR_8);
  }

 }
 if ((VAR_9->scan_begin_src == VAR_5)
  && (VAR_9->convert_src == VAR_5)) {

  VAR_6->ui_AiTimer1 = VAR_9->scan_begin_arg;
  VAR_6->ui_AiTimer0 = VAR_9->convert_arg;

  return FUNC_0(2, VAR_7, VAR_8);
 }
 return -1;
}
