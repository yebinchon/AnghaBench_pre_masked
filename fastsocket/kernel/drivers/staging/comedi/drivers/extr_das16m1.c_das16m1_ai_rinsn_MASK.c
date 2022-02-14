
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; } ;
struct TYPE_2__ {int control_state; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct comedi_device*,char*) ;
 TYPE_1__* VAR_9 ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 unsigned int FUNC_7 (int ) ;
 int FUNC_8 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct comedi_device *VAR_10,
       struct comedi_subdevice *VAR_11,
       struct comedi_insn *VAR_12, unsigned int *VAR_13)
{
 int VAR_14, VAR_15;
 int VAR_16;
 const int VAR_17 = 1000;


 VAR_9->control_state &= ~VAR_6 & ~VAR_8;
 FUNC_8(VAR_9->control_state, VAR_10->iobase + VAR_2);


 FUNC_8(0, VAR_10->iobase + VAR_3);
 VAR_16 =
     FUNC_2(FUNC_0(VAR_12->chanspec)) | FUNC_3(FUNC_1(VAR_12->chanspec));
 FUNC_8(VAR_16, VAR_10->iobase + VAR_4);

 for (VAR_15 = 0; VAR_15 < VAR_12->n; VAR_15++) {

  FUNC_8(0, VAR_10->iobase + VAR_0);

  FUNC_8(0, VAR_10->iobase);

  for (VAR_14 = 0; VAR_14 < VAR_17; VAR_14++) {
   if (FUNC_5(VAR_10->iobase + VAR_1) & VAR_7)
    break;
  }
  if (VAR_14 == VAR_17) {
   FUNC_4(VAR_10, "timeout");
   return -VAR_5;
  }
  VAR_13[VAR_15] = FUNC_7(FUNC_6(VAR_10->iobase));
 }

 return VAR_15;
}
