
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_device {int spinlock; scalar_t__ iobase; int irq; } ;
struct comedi_cmd {int stop_src; int stop_arg; int chanlist_len; int flags; scalar_t__ convert_src; scalar_t__ scan_begin_src; int start_src; int * chanlist; } ;
struct comedi_async {struct comedi_cmd cmd; } ;
typedef enum transfer_type { ____Placeholder_transfer_type } transfer_type ;
struct TYPE_4__ {int command2_bits; int command3_bits; int count; int current_transfer; int command6_bits; int command1_bits; int command4_bits; int divisor_b0; int divisor_a0; int divisor_b1; int dma_transfer_size; int (* write_byte ) (int,scalar_t__) ;scalar_t__ dma_chan; int dma_buffer; } ;
struct TYPE_3__ {scalar_t__ bustype; scalar_t__ register_layout; int* ai_range_code; scalar_t__* ai_range_is_unipolar; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
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
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 scalar_t__ VAR_27 ;
 int VAR_28 ;
 scalar_t__ VAR_29 ;
 int VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;




 int VAR_36 ;
 scalar_t__ VAR_37 ;
 int VAR_38 ;
 unsigned long FUNC_4 () ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct comedi_device*,char*) ;
 TYPE_2__* VAR_39 ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 int VAR_40 ;
 int VAR_41 ;
 scalar_t__ VAR_42 ;
 int VAR_43 ;
 scalar_t__ VAR_44 ;
 int FUNC_9 (struct comedi_device*,struct comedi_cmd*) ;
 scalar_t__ FUNC_10 (struct comedi_cmd*) ;
 scalar_t__ FUNC_11 (struct comedi_cmd*) ;
 scalar_t__ FUNC_12 (struct comedi_cmd*) ;
 int FUNC_13 (struct comedi_device*) ;
 int FUNC_14 (struct comedi_device*,scalar_t__,int,int,int) ;
 int FUNC_15 (struct comedi_cmd) ;
 scalar_t__ FUNC_16 (struct comedi_cmd*) ;
 int FUNC_17 (unsigned long) ;
 int VAR_45 ;
 int FUNC_18 (scalar_t__,int ) ;
 int FUNC_19 (scalar_t__,int) ;
 int FUNC_20 (int *,unsigned long) ;
 int FUNC_21 (int *,unsigned long) ;
 int FUNC_22 (int,scalar_t__) ;
 int FUNC_23 (int,scalar_t__) ;
 int FUNC_24 (int,scalar_t__) ;
 int FUNC_25 (int,scalar_t__) ;
 int FUNC_26 (int,scalar_t__) ;
 int FUNC_27 (int,scalar_t__) ;
 int FUNC_28 (int,scalar_t__) ;
 int FUNC_29 (int,scalar_t__) ;
 int FUNC_30 (int,scalar_t__) ;
 int FUNC_31 (int,scalar_t__) ;
 int FUNC_32 (int,scalar_t__) ;
 int FUNC_33 (int,scalar_t__) ;
 TYPE_1__* VAR_46 ;
 int FUNC_34 (int) ;
 int FUNC_35 (int ) ;

__attribute__((used)) static int FUNC_36(struct comedi_device *VAR_47, struct comedi_subdevice *VAR_48)
{
 int VAR_49, VAR_50, VAR_51;
 unsigned long VAR_52;
 int VAR_53;
 struct comedi_async *VAR_54 = VAR_48->async;
 struct comedi_cmd *VAR_55 = &VAR_54->cmd;
 enum transfer_type VAR_56;
 unsigned long VAR_57;

 if (!VAR_47->irq) {
  FUNC_6(VAR_47, "no irq assigned, cannot perform command");
  return -1;
 }

 VAR_50 = FUNC_3(VAR_55->chanlist[0]);
 VAR_51 = FUNC_1(VAR_55->chanlist[0]);


 FUNC_20(&VAR_47->spinlock, VAR_57);
 VAR_39->command2_bits &= ~VAR_35 & ~VAR_24 & ~VAR_34;
 VAR_39->write_byte(VAR_39->command2_bits, VAR_47->iobase + VAR_12);
 FUNC_21(&VAR_47->spinlock, VAR_57);

 VAR_39->command3_bits = 0;
 VAR_39->write_byte(VAR_39->command3_bits, VAR_47->iobase + VAR_13);


 if (VAR_55->stop_src == 131) {
  VAR_39->count = VAR_55->stop_arg * VAR_55->chanlist_len;
 }

 if (VAR_55->stop_src == 130) {

  VAR_53 = FUNC_14(VAR_47, VAR_47->iobase + VAR_16,
      1, 3, 0);
  if (VAR_53 < 0) {
   FUNC_6(VAR_47, "error loading counter a1");
   return -1;
  }
 } else
  VAR_39->write_byte(VAR_26,
        VAR_47->iobase + VAR_17);


 if (VAR_39->dma_chan &&

     (VAR_55->flags & (VAR_38 | VAR_36)) == 0 &&

     VAR_46->bustype == VAR_42) {
  VAR_56 = VAR_43;
 } else if (VAR_46->register_layout == VAR_44 &&

     (VAR_55->flags & VAR_38) == 0 &&

     (VAR_55->stop_src != 131 || VAR_39->count > 256)) {
  VAR_56 = VAR_40;
 } else
  VAR_56 = VAR_41;
 VAR_39->current_transfer = VAR_56;


 if (VAR_46->register_layout == VAR_44) {

  if (VAR_51 != VAR_9)
   VAR_39->command6_bits |= VAR_1;
  else
   VAR_39->command6_bits &= ~VAR_1;

  if (VAR_46->ai_range_is_unipolar[VAR_50])
   VAR_39->command6_bits |= VAR_7;
  else
   VAR_39->command6_bits &= ~VAR_7;

  if (VAR_56 == VAR_40)
   VAR_39->command6_bits |= VAR_3;
  else
   VAR_39->command6_bits &= ~VAR_3;

  if (VAR_55->stop_src == 130)
   VAR_39->command6_bits |= VAR_0;
  else
   VAR_39->command6_bits &= ~VAR_0;

  if (FUNC_11(VAR_55) == VAR_32)
   VAR_39->command6_bits |= VAR_6;
  else
   VAR_39->command6_bits &= ~VAR_6;

  VAR_39->write_byte(VAR_39->command6_bits,
        VAR_47->iobase + VAR_15);
 }


 VAR_39->command1_bits = 0;
 if (FUNC_11(VAR_55) == VAR_32)
  VAR_49 = FUNC_2(VAR_55->chanlist[VAR_55->chanlist_len - 1]);
 else
  VAR_49 = FUNC_2(VAR_55->chanlist[0]);

 if (FUNC_11(VAR_55) != VAR_33 && VAR_51 == VAR_8)
  VAR_49 *= 2;
 VAR_39->command1_bits |= FUNC_0(VAR_49);
 VAR_39->command1_bits |= VAR_46->ai_range_code[VAR_50];
 VAR_39->write_byte(VAR_39->command1_bits, VAR_47->iobase + VAR_11);

 if (FUNC_11(VAR_55) == VAR_32 ||
     FUNC_11(VAR_55) == VAR_31) {
  VAR_39->command1_bits |= VAR_5;


  FUNC_34(1);
  VAR_39->write_byte(VAR_39->command1_bits,
        VAR_47->iobase + VAR_11);
 }

 VAR_39->command4_bits = 0;
 if (VAR_55->convert_src != 130)
  VAR_39->command4_bits |= VAR_22;


 if (FUNC_16(VAR_55) == 0) {
  VAR_39->command4_bits |= VAR_30;
  if (VAR_55->scan_begin_src == 130)
   VAR_39->command4_bits |= VAR_23;
 }

 if (VAR_51 == VAR_8)
  VAR_39->command4_bits |= VAR_2;
 VAR_39->write_byte(VAR_39->command4_bits, VAR_47->iobase + VAR_14);

 VAR_39->write_byte(VAR_55->chanlist_len,
       VAR_47->iobase + VAR_27);

 VAR_39->write_byte(VAR_28,
       VAR_47->iobase + VAR_29);

 if (VAR_55->convert_src == VAR_37 || VAR_55->scan_begin_src == VAR_37) {

  FUNC_9(VAR_47, VAR_55);

  VAR_53 = FUNC_14(VAR_47, VAR_47->iobase + VAR_18,
      0, VAR_39->divisor_b0, 3);
  if (VAR_53 < 0) {
   FUNC_6(VAR_47, "error loading counter b0");
   return -1;
  }
 }

 if (FUNC_10(VAR_55)) {

  VAR_53 = FUNC_14(VAR_47, VAR_47->iobase + VAR_16,
      0, VAR_39->divisor_a0, 2);
  if (VAR_53 < 0) {
   FUNC_6(VAR_47, "error loading counter a0");
   return -1;
  }
 } else
  VAR_39->write_byte(VAR_25,
        VAR_47->iobase + VAR_17);


 if (FUNC_12(VAR_55)) {

  VAR_53 = FUNC_14(VAR_47, VAR_47->iobase + VAR_18,
      1, VAR_39->divisor_b1, 2);
  if (VAR_53 < 0) {
   FUNC_6(VAR_47, "error loading counter b1");
   return -1;
  }
 }

 FUNC_13(VAR_47);


 if (VAR_56 == VAR_43) {
  VAR_52 = FUNC_4();
  FUNC_7(VAR_39->dma_chan);


  FUNC_5(VAR_39->dma_chan);
  FUNC_18(VAR_39->dma_chan,
        FUNC_35(VAR_39->dma_buffer));

  VAR_39->dma_transfer_size = FUNC_15(*VAR_55);
  if (VAR_55->stop_src == 131 &&
      VAR_39->count * VAR_45 < VAR_39->dma_transfer_size) {
   VAR_39->dma_transfer_size =
       VAR_39->count * VAR_45;
  }
  FUNC_19(VAR_39->dma_chan, VAR_39->dma_transfer_size);
  FUNC_8(VAR_39->dma_chan);
  FUNC_17(VAR_52);

  VAR_39->command3_bits |= VAR_20 | VAR_19;
 } else
  VAR_39->command3_bits &= ~VAR_20 & ~VAR_19;


 VAR_39->command3_bits |= VAR_21;

 if (VAR_56 == VAR_41)
  VAR_39->command3_bits |= VAR_4;
 else
  VAR_39->command3_bits &= ~VAR_4;
 VAR_39->write_byte(VAR_39->command3_bits, VAR_47->iobase + VAR_13);





 FUNC_20(&VAR_47->spinlock, VAR_57);
 VAR_39->command2_bits |= VAR_10;
 switch (VAR_55->start_src) {
 case 130:
  VAR_39->command2_bits |= VAR_24;
  VAR_39->command2_bits &= ~VAR_34 & ~VAR_35;
  break;
 case 128:
  VAR_39->command2_bits |= VAR_35;
  VAR_39->command2_bits &= ~VAR_34 & ~VAR_24;
  break;
 default:
  FUNC_6(VAR_47, "bug with start_src");
  return -1;
  break;
 }
 switch (VAR_55->stop_src) {
 case 130:
  VAR_39->command2_bits |= VAR_24 | VAR_34;
  break;
 case 131:
 case 129:
  break;
 default:
  FUNC_6(VAR_47, "bug with stop_src");
  return -1;
 }
 VAR_39->write_byte(VAR_39->command2_bits, VAR_47->iobase + VAR_12);
 FUNC_21(&VAR_47->spinlock, VAR_57);

 return 0;
}
