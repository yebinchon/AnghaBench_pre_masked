
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct timeval {int tv_sec; unsigned long tv_usec; } ;
struct comedi_device {TYPE_2__* read_subdev; } ;
struct comedi_cmd {unsigned int chanlist_len; scalar_t__ stop_src; scalar_t__ stop_arg; int * chanlist; } ;
struct comedi_async {int events; struct comedi_cmd cmd; } ;
struct TYPE_5__ {struct comedi_async* async; } ;
struct TYPE_4__ {unsigned long usec_remainder; unsigned long scan_period; unsigned int usec_current; unsigned int convert_period; scalar_t__ ai_count; unsigned long usec_period; int timer; scalar_t__ timer_running; struct timeval last; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (struct comedi_device*,TYPE_2__*) ;
 int FUNC_4 (int *) ;
 TYPE_1__* VAR_2 ;
 int FUNC_5 (struct timeval*) ;
 int FUNC_6 (struct comedi_device*,int ,int ,unsigned int) ;
 scalar_t__ VAR_3 ;
 int FUNC_7 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_8(unsigned long VAR_4)
{
 struct comedi_device *VAR_5 = (struct comedi_device *)VAR_4;
 struct comedi_async *VAR_6 = VAR_5->read_subdev->async;
 struct comedi_cmd *VAR_7 = &VAR_6->cmd;
 unsigned int VAR_8, VAR_9;

 unsigned long VAR_10;
 unsigned int VAR_11;
 struct timeval VAR_12;

 FUNC_5(&VAR_12);

 VAR_10 =
     1000000 * (VAR_12.tv_sec - VAR_2->last.tv_sec) + VAR_12.tv_usec -
     VAR_2->last.tv_usec;
 VAR_2->last = VAR_12;
 VAR_11 =
     (VAR_2->usec_remainder + VAR_10) / VAR_2->scan_period;
 VAR_2->usec_remainder =
     (VAR_2->usec_remainder + VAR_10) % VAR_2->scan_period;
 VAR_6->events = 0;

 for (VAR_8 = 0; VAR_8 < VAR_11; VAR_8++) {
  for (VAR_9 = 0; VAR_9 < VAR_7->chanlist_len; VAR_9++) {
   FUNC_2(VAR_5->read_subdev,
         FUNC_6(VAR_5,
         FUNC_0(VAR_7->
          chanlist[VAR_9]),
         FUNC_1(VAR_7->
           chanlist[VAR_9]),
         VAR_2->
         usec_current +
         VAR_8 *
         VAR_2->scan_period +
         VAR_9 *
         VAR_2->
         convert_period));
  }
  VAR_2->ai_count++;
  if (VAR_7->stop_src == VAR_1
      && VAR_2->ai_count >= VAR_7->stop_arg) {
   VAR_6->events |= VAR_0;
   break;
  }
 }

 VAR_2->usec_current += VAR_10;
 VAR_2->usec_current %= VAR_2->usec_period;

 if ((VAR_6->events & VAR_0) == 0 && VAR_2->timer_running)
  FUNC_7(&VAR_2->timer, VAR_3 + 1);
 else
  FUNC_4(&VAR_2->timer);

 FUNC_3(VAR_5, VAR_5->read_subdev);
}
