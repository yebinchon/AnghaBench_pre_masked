
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct comedi_subdevice {TYPE_6__* async; } ;
struct comedi_device {int n_subdevices; struct comedi_subdevice* subdevices; } ;
typedef int irqreturn_t ;
struct TYPE_8__ {unsigned int chanlist_len; int * chanlist; } ;
struct TYPE_12__ {unsigned int events; TYPE_2__ cmd; } ;
struct TYPE_11__ {TYPE_1__* asics; } ;
struct TYPE_9__ {int asic; unsigned int asic_chan; int num_asic_chans; unsigned int first_chan; unsigned int enabled_mask; scalar_t__ stop_count; int spinlock; int continuous; scalar_t__ active; } ;
struct TYPE_10__ {TYPE_3__ intr; } ;
struct TYPE_7__ {int irq; unsigned long iobase; int spinlock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_1 (TYPE_6__*,short) ;
 int FUNC_2 (struct comedi_device*,struct comedi_subdevice*) ;
 TYPE_5__* VAR_10 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_6 (char*,int,int,unsigned int) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 TYPE_4__* VAR_11 ;
 int FUNC_9 (struct comedi_device*,int,int ) ;

__attribute__((used)) static irqreturn_t FUNC_10(int VAR_12, void *VAR_13)
{
 int VAR_14, VAR_15 = 0;
 struct comedi_device *VAR_16 = (struct comedi_device *)VAR_13;

 for (VAR_14 = 0; VAR_14 < VAR_6; ++VAR_14) {
  if (VAR_12 == VAR_10->asics[VAR_14].irq) {
   unsigned long VAR_17;
   unsigned VAR_18 = 0;
   unsigned long VAR_19 = VAR_10->asics[VAR_14].iobase;

   unsigned char VAR_20;

   FUNC_7(&VAR_10->asics[VAR_14].spinlock,
       VAR_17);

   VAR_20 = FUNC_3(VAR_19 + VAR_9) & 0x07;

   if (VAR_20) {
    int VAR_21;
    for (VAR_21 = 0; VAR_21 < VAR_3;
         ++VAR_21) {
     if (VAR_20 & (0x1 << VAR_21)) {
      unsigned char
          VAR_22 = 0;
      FUNC_9(VAR_16, VAR_14,
           VAR_7);
      VAR_22 =
          FUNC_3(VAR_19 +
       VAR_8 + VAR_21);

      if (VAR_22)

       FUNC_4(0, VAR_19 +
            VAR_8 +
            VAR_21);

      VAR_18 |=
          VAR_22 <<
          VAR_21 * 8;
     }
    }

    ++VAR_15;
   }

   FUNC_8(&VAR_10->asics[VAR_14].spinlock,
            VAR_17);

   if (VAR_18) {
    struct comedi_subdevice *VAR_23;

    FUNC_6
        ("PCMUIO DEBUG: got edge detect interrupt %d asic %d which_chans: %06x\n",
         VAR_12, VAR_14, VAR_18);
    for (VAR_23 = VAR_16->subdevices;
         VAR_23 < VAR_16->subdevices + VAR_16->n_subdevices;
         ++VAR_23) {
     if (VAR_11->intr.asic == VAR_14) {
      unsigned long VAR_24;
      unsigned VAR_25;

      FUNC_7(&VAR_11->
          intr.spinlock,
          VAR_24);

      VAR_25 = VAR_23->async->events;

      if (VAR_11->intr.active) {
       unsigned VAR_26 =
           ((VAR_18 >>
             VAR_11->intr.asic_chan)
            &
            ((0x1 << VAR_11->
              intr.
              num_asic_chans) -
             1)) << VAR_11->
           intr.first_chan;
       if (VAR_26 &
           VAR_11->intr.enabled_mask)
       {
        unsigned int VAR_27
            = 0;
        unsigned int VAR_28,
            VAR_29, VAR_30;

        VAR_30 =
            VAR_23->
            async->cmd.chanlist_len;
        for (VAR_28 = 0;
             VAR_28 < VAR_30;
             VAR_28++) {
         VAR_29 = FUNC_0(VAR_23->async->cmd.chanlist[VAR_28]);
         if (VAR_26 & (1U << VAR_29)) {
          VAR_27 |= (1U << VAR_28);
         }
        }

        if (FUNC_1(VAR_23->async, ((short *)&VAR_27)[0])
            &&
            FUNC_1
            (VAR_23->async,
             ((short *)
              &VAR_27)[1]))
        {
         VAR_23->async->events |= (VAR_0 | VAR_2);
        } else {


         FUNC_5
             (VAR_16,
              VAR_23);
        }


        if (!VAR_11->intr.continuous) {

         if (VAR_11->intr.stop_count > 0) {
          VAR_11->intr.stop_count--;
          if (VAR_11->intr.stop_count == 0) {
           VAR_23->async->events |= VAR_1;

           FUNC_5
               (VAR_16,
                VAR_23);
          }
         }
        }
       }
      }

      FUNC_8
          (&VAR_11->intr.spinlock,
           VAR_24);

      if (VAR_25 !=
          VAR_23->async->events) {
       FUNC_2(VAR_16, VAR_23);
      }

     }

    }
   }

  }
 }
 if (!VAR_15)
  return VAR_5;
 return VAR_4;
}
