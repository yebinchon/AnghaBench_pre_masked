
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdinfo {int range_type; int settling_time_0; int insn_bits_support; int subd_flags; int flags; int maxdata; int len_chanlist; int timer_type; int n_chan; int type; } ;
struct comedi_subdevice {void* busy; void* lock; int settling_time_0; int * insn_bits; scalar_t__ do_cmd; scalar_t__ range_table_list; scalar_t__ flaglist; scalar_t__ maxdata_list; int maxdata; int flags; TYPE_1__* range_table; int len_chanlist; int subdev_flags; int n_chan; int type; } ;
struct comedi_device {int n_subdevices; struct comedi_subdevice* subdevices; } ;
struct TYPE_2__ {int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct comedi_subdevice*) ;
 int FUNC_1 (struct comedi_subdinfo*,struct comedi_subdinfo*,int) ;
 int VAR_16 ;
 struct comedi_subdinfo* FUNC_2 (int,int,int ) ;
 int FUNC_3 (struct comedi_subdinfo*) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_17,
        struct comedi_subdinfo *VAR_18, void *VAR_19)
{
 int VAR_20, VAR_21;
 struct comedi_subdinfo *VAR_22, *VAR_23;
 struct comedi_subdevice *VAR_24;

 VAR_22 =
     FUNC_2(VAR_17->n_subdevices, sizeof(struct comedi_subdinfo),
      VAR_4);
 if (!VAR_22)
  return -VAR_3;


 for (VAR_21 = 0; VAR_21 < VAR_17->n_subdevices; VAR_21++) {
  VAR_24 = VAR_17->subdevices + VAR_21;
  VAR_23 = VAR_22 + VAR_21;

  VAR_23->type = VAR_24->type;
  VAR_23->n_chan = VAR_24->n_chan;
  VAR_23->subd_flags = VAR_24->subdev_flags;
  if (FUNC_0(VAR_24) & VAR_14)
   VAR_23->subd_flags |= VAR_13;

  VAR_23->timer_type = 5;
  VAR_23->len_chanlist = VAR_24->len_chanlist;
  VAR_23->maxdata = VAR_24->maxdata;
  if (VAR_24->range_table) {
   VAR_23->range_type =
       (VAR_21 << 24) | (0 << 16) | (VAR_24->range_table->length);
  } else {
   VAR_23->range_type = 0;
  }
  VAR_23->flags = VAR_24->flags;

  if (VAR_24->busy)
   VAR_23->subd_flags |= VAR_5;
  if (VAR_24->busy == VAR_19)
   VAR_23->subd_flags |= VAR_6;
  if (VAR_24->lock)
   VAR_23->subd_flags |= VAR_9;
  if (VAR_24->lock == VAR_19)
   VAR_23->subd_flags |= VAR_10;
  if (!VAR_24->maxdata && VAR_24->maxdata_list)
   VAR_23->subd_flags |= VAR_11;
  if (VAR_24->flaglist)
   VAR_23->subd_flags |= VAR_8;
  if (VAR_24->range_table_list)
   VAR_23->subd_flags |= VAR_12;
  if (VAR_24->do_cmd)
   VAR_23->subd_flags |= VAR_7;

  if (VAR_24->insn_bits != &VAR_16)
   VAR_23->insn_bits_support = VAR_0;
  else
   VAR_23->insn_bits_support = VAR_1;

  VAR_23->settling_time_0 = VAR_24->settling_time_0;
 }

 VAR_20 = FUNC_1(VAR_18, VAR_22,
      VAR_17->n_subdevices * sizeof(struct comedi_subdinfo));

 FUNC_3(VAR_22);

 return VAR_20 ? -VAR_2 : 0;
}
