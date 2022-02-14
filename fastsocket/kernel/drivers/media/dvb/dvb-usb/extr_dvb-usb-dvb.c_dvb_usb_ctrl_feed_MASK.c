
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int (* streaming_ctrl ) (struct dvb_usb_adapter*,int) ;int caps; scalar_t__ (* pid_filter_ctrl ) (struct dvb_usb_adapter*,scalar_t__) ;int (* pid_filter ) (struct dvb_usb_adapter*,int ,int ,int) ;} ;
struct dvb_usb_adapter {int feedcount; TYPE_2__ props; scalar_t__ pid_filtering; int stream; } ;
struct dvb_demux_feed {int pid; int index; TYPE_1__* demux; } ;
struct TYPE_3__ {struct dvb_usb_adapter* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct dvb_usb_adapter*,int) ;
 int FUNC_3 (struct dvb_usb_adapter*,int ,int ,int) ;
 scalar_t__ FUNC_4 (struct dvb_usb_adapter*,scalar_t__) ;
 int FUNC_5 (struct dvb_usb_adapter*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct dvb_demux_feed *VAR_3, int VAR_4)
{
 struct dvb_usb_adapter *VAR_5 = VAR_3->demux->priv;
 int VAR_6,VAR_7;

 if (VAR_5 == ((void*)0))
  return -VAR_2;

 VAR_6 = VAR_5->feedcount + (VAR_4 ? 1 : -1);


 if (VAR_6 == 0) {
  FUNC_0("stop feeding\n");
  FUNC_6(&VAR_5->stream);

  if (VAR_5->props.streaming_ctrl != ((void*)0))
   if ((VAR_7 = VAR_5->props.streaming_ctrl(VAR_5,0)))
    FUNC_1("error while stopping stream.");
 }

 VAR_5->feedcount = VAR_6;


 FUNC_0("setting pid (%s): %5d %04x at index %d '%s'\n",VAR_5->pid_filtering ?
  "yes" : "no", VAR_3->pid,VAR_3->pid,VAR_3->index,VAR_4 ?
  "on" : "off");
 if (VAR_5->props.caps & VAR_0 &&
  VAR_5->pid_filtering &&
  VAR_5->props.pid_filter != ((void*)0))
  VAR_5->props.pid_filter(VAR_5, VAR_3->index, VAR_3->pid,VAR_4);




 if (VAR_5->feedcount == VAR_4 && VAR_5->feedcount > 0) {
  FUNC_0("submitting all URBs\n");
  FUNC_7(&VAR_5->stream);

  FUNC_0("controlling pid parser\n");
  if (VAR_5->props.caps & VAR_0 &&
   VAR_5->props.caps & VAR_1 &&
   VAR_5->props.pid_filter_ctrl != ((void*)0))
   if (VAR_5->props.pid_filter_ctrl(VAR_5,VAR_5->pid_filtering) < 0)
    FUNC_1("could not handle pid_parser");

  FUNC_0("start feeding\n");
  if (VAR_5->props.streaming_ctrl != ((void*)0))
   if (VAR_5->props.streaming_ctrl(VAR_5,1)) {
    FUNC_1("error while enabling fifo.");
    return -VAR_2;
   }

 }
 return 0;
}
