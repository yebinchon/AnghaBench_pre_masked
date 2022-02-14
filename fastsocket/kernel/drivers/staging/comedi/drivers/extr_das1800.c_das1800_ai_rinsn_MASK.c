
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int spinlock; scalar_t__ iobase; } ;
struct TYPE_2__ {int resolution; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_3 (struct comedi_device*,char*) ;
 int FUNC_4 (scalar_t__) ;
 short FUNC_5 (scalar_t__) ;
 int FUNC_6 (int,scalar_t__) ;
 int FUNC_7 (int,scalar_t__) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 TYPE_1__* VAR_20 ;

__attribute__((used)) static int FUNC_10(struct comedi_device *VAR_21,
       struct comedi_subdevice *VAR_22,
       struct comedi_insn *VAR_23, unsigned int *VAR_24)
{
 int VAR_25, VAR_26;
 int VAR_27, VAR_28, VAR_29, VAR_30;
 int VAR_31 = 1000;
 short VAR_32;
 int VAR_33 = 0;
 unsigned long VAR_34;


 VAR_29 = FUNC_0(VAR_23->chanspec);
 VAR_33 |= VAR_19;
 if (VAR_29 != VAR_2)
  VAR_33 |= VAR_16;
 if (VAR_29 == VAR_1)
  VAR_33 |= VAR_3;

 if (FUNC_2(VAR_23->chanspec) & VAR_18)
  VAR_33 |= VAR_17;

 FUNC_6(VAR_33, VAR_21->iobase + VAR_6);
 FUNC_6(VAR_4, VAR_21->iobase + VAR_11);
 FUNC_6(0x0, VAR_21->iobase + VAR_5);
 FUNC_6(VAR_13, VAR_21->iobase + VAR_5);

 VAR_27 = FUNC_1(VAR_23->chanspec);

 VAR_28 = FUNC_2(VAR_23->chanspec) & 0x3;
 VAR_30 = VAR_27 | (VAR_28 << 8);
 FUNC_8(&VAR_21->spinlock, VAR_34);
 FUNC_6(VAR_15, VAR_21->iobase + VAR_10);
 FUNC_6(0x0, VAR_21->iobase + VAR_9);
 FUNC_7(VAR_30, VAR_21->iobase + VAR_8);
 FUNC_6(0x0, VAR_21->iobase + VAR_9);
 FUNC_6(VAR_0, VAR_21->iobase + VAR_10);

 for (VAR_26 = 0; VAR_26 < VAR_23->n; VAR_26++) {

  FUNC_6(0, VAR_21->iobase + VAR_7);
  for (VAR_25 = 0; VAR_25 < VAR_31; VAR_25++) {
   if (FUNC_4(VAR_21->iobase + VAR_11) & VAR_14)
    break;
  }
  if (VAR_25 == VAR_31) {
   FUNC_3(VAR_21, "timeout");
   return -VAR_12;
  }
  VAR_32 = FUNC_5(VAR_21->iobase + VAR_7);

  if ((VAR_33 & VAR_17) == 0)
   VAR_32 += 1 << (VAR_20->resolution - 1);
  VAR_24[VAR_26] = VAR_32;
 }
 FUNC_9(&VAR_21->spinlock, VAR_34);

 return VAR_26;
}
