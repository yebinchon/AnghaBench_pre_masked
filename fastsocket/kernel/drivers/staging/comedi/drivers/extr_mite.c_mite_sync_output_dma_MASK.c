
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct mite_channel {int dummy; } ;
struct TYPE_2__ {unsigned int stop_arg; scalar_t__ stop_src; } ;
struct comedi_async {unsigned int buf_read_alloc_count; unsigned int buf_read_count; int events; TYPE_1__ cmd; int prealloc_bufsz; int subdevice; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (struct comedi_async*,int ) ;
 int FUNC_2 (struct comedi_async*,int) ;
 unsigned int FUNC_3 (struct mite_channel*) ;
 unsigned int FUNC_4 (struct mite_channel*) ;
 int FUNC_5 (char*) ;

int FUNC_6(struct mite_channel *VAR_3,
    struct comedi_async *VAR_4)
{
 int VAR_5;
 u32 VAR_6, VAR_7;
 unsigned int VAR_8;
 u32 VAR_9 =
     VAR_4->cmd.stop_arg * FUNC_0(VAR_4->subdevice);

 VAR_8 = VAR_4->buf_read_alloc_count;

 FUNC_1(VAR_4, VAR_4->prealloc_bufsz);
 VAR_7 = FUNC_3(VAR_3);
 if (VAR_4->cmd.stop_src == VAR_2 &&
     (int)(VAR_7 - VAR_9) > 0)
  VAR_7 = VAR_9;
 VAR_6 = FUNC_4(VAR_3);
 if (VAR_4->cmd.stop_src == VAR_2 &&
     (int)(VAR_6 - VAR_9) > 0)
  VAR_6 = VAR_9;
 if ((int)(VAR_6 - VAR_8) > 0) {
  FUNC_5("mite: DMA underrun\n");
  VAR_4->events |= VAR_1;
  return -1;
 }
 VAR_5 = VAR_7 - VAR_4->buf_read_count;
 if (VAR_5 <= 0)
  return 0;

 if (VAR_5) {
  FUNC_2(VAR_4, VAR_5);
  VAR_4->events |= VAR_0;
 }
 return 0;
}
