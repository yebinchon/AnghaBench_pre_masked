
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; } ;
struct TYPE_4__ {int control_state; } ;
struct TYPE_3__ {size_t ai_pg; int ai_nbits; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int** VAR_13 ;
 size_t VAR_14 ;
 TYPE_2__* VAR_15 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (char*) ;
 TYPE_1__* VAR_16 ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_17, struct comedi_subdevice *VAR_18,
     struct comedi_insn *VAR_19, unsigned int *VAR_20)
{
 int VAR_21, VAR_22;
 int VAR_23;
 int VAR_24;
 int VAR_25, VAR_26;


 VAR_15->control_state &= ~VAR_5 & ~VAR_10 & ~VAR_12;
 FUNC_3(VAR_15->control_state, VAR_17->iobase + VAR_3);


 VAR_24 = FUNC_0(VAR_19->chanspec);
 VAR_24 |= FUNC_0(VAR_19->chanspec) << 4;
 FUNC_3(VAR_24, VAR_17->iobase + VAR_6);


 if (VAR_16->ai_pg != VAR_14) {
  VAR_23 = FUNC_1(VAR_19->chanspec);
  FUNC_3((VAR_13[VAR_16->ai_pg])[VAR_23],
       VAR_17->iobase + VAR_4);
 }

 for (VAR_22 = 0; VAR_22 < VAR_19->n; VAR_22++) {

  FUNC_4(0, VAR_17->iobase + VAR_9);

  for (VAR_21 = 0; VAR_21 < VAR_8; VAR_21++) {
   if (!(FUNC_2(VAR_17->iobase + VAR_7) & VAR_0))
    break;
  }
  if (VAR_21 == VAR_8) {
   FUNC_5("das16: timeout\n");
   return -VAR_11;
  }
  VAR_25 = FUNC_2(VAR_17->iobase + VAR_2);
  VAR_26 = FUNC_2(VAR_17->iobase + VAR_1);
  if (VAR_16->ai_nbits == 12) {
   VAR_20[VAR_22] = ((VAR_26 >> 4) & 0xf) | (VAR_25 << 4);
  } else {
   VAR_20[VAR_22] = VAR_26 | (VAR_25 << 8);
  }
 }

 return VAR_22;
}
