
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flexcop_device {int has_32_hw_pid_filter; int feedcount; scalar_t__ extra_feedcount; int (* stream_control ) (struct flexcop_device*,int) ;scalar_t__ pid_filtering; } ;
struct dvb_demux_feed {int index; int pid; } ;


 int FUNC_0 (struct flexcop_device*) ;
 int FUNC_1 (struct flexcop_device*,int,int,int) ;
 int FUNC_2 (struct flexcop_device*,int) ;
 int FUNC_3 (struct flexcop_device*) ;
 int FUNC_4 (struct flexcop_device*,int) ;
 int FUNC_5 (struct flexcop_device*,int) ;

int FUNC_6(struct flexcop_device *VAR_0,
  struct dvb_demux_feed *VAR_1, int VAR_2)
{
 int VAR_3 = 6 + VAR_0->has_32_hw_pid_filter*32;

 VAR_0->feedcount += VAR_2 ? 1 : -1;
 if (VAR_1->index >= VAR_3)
  VAR_0->extra_feedcount += VAR_2 ? 1 : -1;







 if (!VAR_0->pid_filtering && VAR_0->feedcount == VAR_2)
  FUNC_4(VAR_0, VAR_2);

 if (VAR_0->pid_filtering) {
  FUNC_1 (VAR_0, VAR_1->index, VAR_1->pid, VAR_2);


  if (VAR_0->extra_feedcount > 0)
   FUNC_4(VAR_0, 1);
  else if (VAR_1->pid == 0x2000)
   FUNC_4(VAR_0, VAR_2);
  else
   FUNC_4(VAR_0, 0);
 }


 if (VAR_0->feedcount == VAR_2) {
  FUNC_2(VAR_0, VAR_2);
  if (VAR_0->stream_control)
   VAR_0->stream_control(VAR_0, VAR_2);


  if (VAR_2 == 0) {
   FUNC_3(VAR_0);
   FUNC_0(VAR_0);
  }
 }
 return 0;
}
