
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {scalar_t__ subdevices; scalar_t__ iobase; int attached; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int ai12_startstop; unsigned int AdControlReg; int (* int_ai_func ) (struct comedi_device*,scalar_t__,unsigned int,unsigned int,unsigned int) ;scalar_t__ ai_neverending; int ai_divisor2; int ai_divisor1; scalar_t__ ai_do; scalar_t__ iobase_a; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_1__* VAR_12 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (unsigned int,scalar_t__) ;
 int FUNC_3 (struct comedi_device*,int ) ;
 int FUNC_4 (struct comedi_device*,scalar_t__,int ,int ) ;
 int FUNC_5 (struct comedi_device*,scalar_t__,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_13, void *VAR_14)
{
 struct comedi_device *VAR_15 = VAR_14;
 unsigned int VAR_16 = 0, VAR_17, VAR_18;

 if (!VAR_15->attached)
  return VAR_5;

 VAR_16 = FUNC_0(VAR_15->iobase + VAR_9) & 0xf;
 VAR_17 = FUNC_0(VAR_12->iobase_a + VAR_0);



 if ((!VAR_16) && (!(VAR_17 & VAR_1)))
  return VAR_5;

 FUNC_2(VAR_17 | 0x00ff0000, VAR_12->iobase_a + VAR_0);

 VAR_18 = FUNC_1(VAR_15->iobase + VAR_8) & 0x1ff;

 if (VAR_12->ai_do) {
  if (VAR_12->ai12_startstop)
   if ((VAR_18 & VAR_2) && (VAR_16 & VAR_6)) {
    if (VAR_12->ai12_startstop & VAR_10) {
     VAR_12->ai12_startstop &=
         ~VAR_10;
     if (!(VAR_12->ai12_startstop &
           VAR_11))
      FUNC_3(VAR_15, VAR_3);
     FUNC_4(VAR_15, VAR_12->ai_do, VAR_12->ai_divisor1, VAR_12->ai_divisor2);
     FUNC_2(VAR_12->AdControlReg,
          VAR_15->iobase + VAR_7);
    } else {
     if (VAR_12->ai12_startstop &
         VAR_11) {
      VAR_12->ai12_startstop &=
          ~VAR_11;
      FUNC_3(VAR_15, VAR_3);
      VAR_12->ai_neverending = 0;
     }
    }
   }

  (VAR_12->int_ai_func) (VAR_15, VAR_15->subdevices + 0, VAR_18,
     VAR_17, VAR_16);

 }
 return VAR_4;
}
