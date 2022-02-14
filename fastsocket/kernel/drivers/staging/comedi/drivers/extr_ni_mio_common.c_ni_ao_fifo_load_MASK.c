
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef short u32 ;
struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_device {int dummy; } ;
struct comedi_cmd {int chanlist_len; int * chanlist; } ;
struct comedi_async {int cur_chan; int events; struct comedi_cmd cmd; } ;
struct TYPE_2__ {int reg_type; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_1 (struct comedi_async*,short*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (short,int ) ;
 int FUNC_3 (short,int ) ;

__attribute__((used)) static void FUNC_4(struct comedi_device *VAR_6,
       struct comedi_subdevice *VAR_7, int VAR_8)
{
 struct comedi_async *VAR_9 = VAR_7->async;
 struct comedi_cmd *VAR_10 = &VAR_9->cmd;
 int VAR_11;
 int VAR_12;
 short VAR_13;
 u32 VAR_14;
 int VAR_15;
 int VAR_16 = 1;

 VAR_11 = VAR_9->cur_chan;
 for (VAR_12 = 0; VAR_12 < VAR_8; VAR_12++) {
  VAR_16 &= FUNC_1(VAR_9, &VAR_13);
  if (VAR_16 == 0)
   break;

  VAR_15 = FUNC_0(VAR_10->chanlist[VAR_11]);

  if (VAR_3.reg_type & VAR_5) {
   VAR_14 = VAR_13 & 0xffff;

   if (VAR_3.reg_type != VAR_4) {
    VAR_16 &= FUNC_1(VAR_9, &VAR_13);
    if (VAR_16 == 0)
     break;
    VAR_11++;
    VAR_12++;
    VAR_14 |= (VAR_13 << 16) & 0xffff0000;
   }
   FUNC_2(VAR_14, VAR_2);
  } else {
   FUNC_3(VAR_13, VAR_1);
  }
  VAR_11++;
  VAR_11 %= VAR_10->chanlist_len;
 }
 VAR_9->cur_chan = VAR_11;
 if (VAR_16 == 0) {
  VAR_9->events |= VAR_0;
 }
}
