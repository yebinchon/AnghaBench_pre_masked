
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {int dummy; } ;
struct comedi_cmd {unsigned int chanlist_len; int * chanlist; } ;
struct TYPE_10__ {TYPE_3__* asics; } ;
struct TYPE_7__ {scalar_t__ stop_count; int active; int asic; unsigned int enabled_mask; int num_asic_chans; int asic_chan; int first_chan; int continuous; } ;
struct TYPE_9__ {TYPE_2__ intr; } ;
struct TYPE_8__ {scalar_t__ iobase; } ;
struct TYPE_6__ {struct comedi_cmd cmd; int events; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_5__* VAR_5 ;
 int FUNC_3 (unsigned int,scalar_t__) ;
 TYPE_4__* VAR_6 ;
 int FUNC_4 (struct comedi_device*,int,int ) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_7,
        struct comedi_subdevice *VAR_8)
{
 if (!VAR_6->intr.continuous && VAR_6->intr.stop_count == 0) {

  VAR_8->async->events |= VAR_1;
  VAR_6->intr.active = 0;
  return 1;
 } else {
  unsigned VAR_9 = 0, VAR_10 = 0, VAR_11;
  int VAR_12, VAR_13, VAR_14, VAR_15;
  struct comedi_cmd *VAR_16 = &VAR_8->async->cmd;

  VAR_14 = VAR_6->intr.asic;
  if (VAR_14 < 0)
   return 1;

  VAR_6->intr.enabled_mask = 0;
  VAR_6->intr.active = 1;
  VAR_12 = VAR_6->intr.num_asic_chans / VAR_0;
  VAR_13 = VAR_6->intr.asic_chan / VAR_0;
  if (VAR_16->chanlist) {
   for (VAR_11 = 0; VAR_11 < VAR_16->chanlist_len; VAR_11++) {
    VAR_9 |= (1U << FUNC_1(VAR_16->chanlist[VAR_11]));
    VAR_10 |= (FUNC_0(VAR_16->chanlist[VAR_11])
          || FUNC_2(VAR_16->
        chanlist[VAR_11]) ? 1U : 0U)
        << FUNC_1(VAR_16->chanlist[VAR_11]);
   }
  }
  VAR_9 &= ((0x1 << VAR_6->intr.num_asic_chans) -
    1) << VAR_6->intr.first_chan;
  VAR_6->intr.enabled_mask = VAR_9;

  FUNC_4(VAR_7, VAR_14, VAR_2);
  for (VAR_15 = VAR_13; VAR_15 < VAR_13 + VAR_12; ++VAR_15) {
   unsigned VAR_17 =
       VAR_9 >> (VAR_6->intr.first_chan + (VAR_15 -
         VAR_13) *
         8) & 0xff, VAR_18 =
       VAR_10 >> (VAR_6->intr.first_chan +
      (VAR_15 - VAR_13) * 8) & 0xff;

   FUNC_3(VAR_17,
        VAR_5->asics[VAR_14].iobase + VAR_4 + VAR_15);
   FUNC_4(VAR_7, VAR_14, VAR_3);
   FUNC_3(VAR_18,
        VAR_5->asics[VAR_14].iobase + VAR_4 + VAR_15);
  }
 }
 return 0;
}
