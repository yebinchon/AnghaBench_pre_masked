
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct local_info_t {int eos; struct comedi_subdevice* s; struct comedi_device* dev; int interrupt_mode; scalar_t__ stop; } ;
struct comedi_subdevice {scalar_t__ private; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_3 (int ) ;
 int VAR_14 ;
 int FUNC_4 (int ) ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_5 (struct comedi_device*,struct comedi_subdevice*) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int,scalar_t__) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int *,int ) ;
 int VAR_20 ;

__attribute__((used)) static int FUNC_11(struct comedi_device *VAR_21,
        struct comedi_subdevice *VAR_22,
        struct comedi_insn *VAR_23, unsigned int *VAR_24)
{
 struct local_info_t *VAR_25 = (struct local_info_t *)VAR_22->private;
 int VAR_26;
 int VAR_27;
 int VAR_28 = 10000;

 if (VAR_25->stop) {
  return -VAR_19;
 }


 FUNC_5(VAR_21, VAR_22);

 FUNC_8(0, VAR_21->iobase + VAR_1);


 FUNC_8(VAR_6, VAR_21->iobase + VAR_2);



 VAR_27 = FUNC_3(FUNC_1(VAR_23->chanspec))
     | FUNC_4(FUNC_2(VAR_23->chanspec));

 if (FUNC_0(VAR_23->chanspec) == VAR_0) {
  VAR_27 |= VAR_14;
 }

 VAR_27 |= VAR_15;

 FUNC_8(VAR_27 & 0xff, VAR_21->iobase + VAR_13);
 FUNC_8(VAR_27 >> 8, VAR_21->iobase + VAR_13);



 FUNC_8(VAR_5, VAR_21->iobase + VAR_2);



 VAR_27 = VAR_11 | VAR_10
     | VAR_9 | VAR_8;

 FUNC_8(VAR_27, VAR_21->iobase + VAR_7);





 while (--VAR_28
        && (FUNC_7(VAR_21->iobase + VAR_16) & VAR_17)) ;
 if (!VAR_28) {
  FUNC_9("daqp: couldn't clear interrupts in status register\n");
  return -1;
 }


 FUNC_10(&VAR_25->eos, 0);
 VAR_25->interrupt_mode = VAR_20;
 VAR_25->dev = VAR_21;
 VAR_25->s = VAR_22;

 for (VAR_26 = 0; VAR_26 < VAR_23->n; VAR_26++) {


  FUNC_8(VAR_3 | VAR_4,
       VAR_21->iobase + VAR_2);



  if (FUNC_6(&VAR_25->eos))
   return -VAR_18;

  VAR_24[VAR_26] = FUNC_7(VAR_21->iobase + VAR_12);
  VAR_24[VAR_26] |= FUNC_7(VAR_21->iobase + VAR_12) << 8;
  VAR_24[VAR_26] ^= 0x8000;
 }

 return VAR_23->n;
}
