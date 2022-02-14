
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mite_struct {scalar_t__ daq_io_addr; scalar_t__ mite_io_addr; } ;
struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_device {scalar_t__ attached; int irq; struct comedi_subdevice* subdevices; } ;
struct comedi_async {int events; } ;
typedef int irqreturn_t ;
struct TYPE_5__ {struct mite_struct* mite; int mite_channel_lock; TYPE_1__* di_mite_chan; } ;
struct TYPE_4__ {int channel; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (char*,...) ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_2 (struct comedi_async*,short) ;
 TYPE_3__* VAR_30 ;
 int FUNC_3 (int ) ;
 unsigned int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (TYPE_1__*,struct comedi_async*) ;
 int FUNC_7 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (scalar_t__) ;
 long FUNC_12 (scalar_t__) ;
 int FUNC_13 (int *,unsigned long) ;
 int FUNC_14 (int *,unsigned long) ;
 int VAR_31 ;
 int FUNC_15 (int,scalar_t__) ;
 int FUNC_16 (int ,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_17(int VAR_32, void *VAR_33)
{
 struct comedi_device *VAR_34 = VAR_33;
 struct comedi_subdevice *VAR_35 = VAR_34->subdevices;
 struct comedi_async *VAR_36 = VAR_35->async;
 struct mite_struct *VAR_37 = VAR_30->mite;


 long int VAR_38 = 0;
 short VAR_39 = 0;
 short VAR_40 = 0;
 int VAR_41;
 int VAR_42;
 int VAR_43 = 0;
 unsigned int VAR_44 = 0;
 unsigned long VAR_45;


 if (VAR_34->attached == 0) {

  return VAR_21;
 }

 VAR_42 = FUNC_11(VAR_30->mite->daq_io_addr +
         VAR_23);
 VAR_41 = FUNC_11(VAR_30->mite->daq_io_addr + VAR_18);

 FUNC_0("ni_pcidio_interrupt: status=0x%02x,flags=0x%02x\n",
  VAR_42, VAR_41);
 FUNC_8(VAR_41);
 FUNC_9(VAR_42);




 FUNC_13(&VAR_30->mite_channel_lock, VAR_45);
 if (VAR_30->di_mite_chan)
  VAR_44 = FUNC_4(VAR_30->di_mite_chan);





 if (VAR_44 & VAR_4) {
  if (VAR_44 & VAR_5) {
   FUNC_16(VAR_0,
          VAR_37->mite_io_addr +
          FUNC_1(VAR_30->di_mite_chan->channel));
   FUNC_6(VAR_30->di_mite_chan, VAR_35->async);

  }
  if (VAR_44 & ~(VAR_4 | VAR_5 | VAR_1 | VAR_2 |
     VAR_3 | VAR_6)) {
   FUNC_0("unknown mite interrupt, disabling IRQ\n");
   VAR_36->events |= VAR_8 | VAR_9;
   FUNC_3(VAR_34->irq);
  }
 }
 FUNC_14(&VAR_30->mite_channel_lock, VAR_45);

 while (VAR_42 & VAR_15) {
  VAR_43++;
  if (VAR_43 > 20) {
   FUNC_0("too much work in interrupt\n");
   FUNC_15(0x00,
          VAR_30->mite->daq_io_addr +
          VAR_24);
   break;
  }

  VAR_41 &= VAR_22;

  if (VAR_41 & VAR_28) {

   while (VAR_41 & VAR_28) {
    VAR_43++;
    if (VAR_43 > 100) {
     FUNC_0("too much work in interrupt\n");
     FUNC_15(0x00,
            VAR_30->mite->daq_io_addr +
            VAR_24);
     goto out;
    }
    VAR_38 =
        FUNC_12(VAR_30->mite->daq_io_addr +
       VAR_16);
    VAR_39 = VAR_38 & 0xffff;
    VAR_40 = (VAR_38 & 0xffff0000) >> 16;
    FUNC_2(VAR_36, VAR_39);
    FUNC_2(VAR_36, VAR_40);

    VAR_41 = FUNC_11(VAR_30->mite->daq_io_addr +
           VAR_18);
   }




   VAR_36->events |= VAR_7;
  }

  if (VAR_41 & VAR_14) {
   FUNC_0("CountExpired\n");
   FUNC_15(VAR_10,
          VAR_30->mite->daq_io_addr +
          VAR_19);
   VAR_36->events |= VAR_8;

   FUNC_15(0x00, VAR_30->mite->daq_io_addr + VAR_25);
   break;
  } else if (VAR_41 & VAR_29) {
   FUNC_0("Waited\n");
   FUNC_15(VAR_13,
          VAR_30->mite->daq_io_addr +
          VAR_17);
   VAR_36->events |= VAR_8 | VAR_9;
   break;
  } else if (VAR_41 & VAR_26) {
   FUNC_0("PrimaryTC\n");
   FUNC_15(VAR_11,
          VAR_30->mite->daq_io_addr +
          VAR_17);
   VAR_36->events |= VAR_8;
  } else if (VAR_41 & VAR_27) {
   FUNC_0("SecondaryTC\n");
   FUNC_15(VAR_12,
          VAR_30->mite->daq_io_addr +
          VAR_17);
   VAR_36->events |= VAR_8;
  }
  VAR_41 = FUNC_11(VAR_30->mite->daq_io_addr + VAR_18);
  VAR_42 = FUNC_11(VAR_30->mite->daq_io_addr +
          VAR_23);




 }

out:
 FUNC_7(VAR_34, VAR_35);







 return VAR_20;
}
