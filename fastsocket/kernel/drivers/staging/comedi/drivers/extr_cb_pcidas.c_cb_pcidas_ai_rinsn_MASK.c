
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int chanspec; int n; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ adc_fifo; scalar_t__ control_status; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int FUNC_0 (int) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 unsigned int FUNC_4 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int FUNC_5 (int) ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int FUNC_6 (struct comedi_device*) ;
 TYPE_1__* VAR_11 ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct comedi_device *VAR_12,
         struct comedi_subdevice *VAR_13,
         struct comedi_insn *VAR_14, unsigned int *VAR_15)
{
 int VAR_16, VAR_17;
 unsigned int VAR_18;
 static const int VAR_19 = 10000;
 int VAR_20;

 if (VAR_14->chanspec & VAR_5) {
  FUNC_8(FUNC_6(VAR_12),
       VAR_11->control_status + VAR_4);
  VAR_20 = 0;
 } else {
  FUNC_8(0, VAR_11->control_status + VAR_4);
  VAR_20 = FUNC_2(VAR_14->chanspec);
 }

 VAR_18 = FUNC_0(VAR_20) |
     FUNC_4(VAR_20) | FUNC_5(FUNC_3(VAR_14->chanspec));

 if (FUNC_3(VAR_14->chanspec) & VAR_8)
  VAR_18 |= VAR_10;

 if (FUNC_1(VAR_14->chanspec) != VAR_3)
  VAR_18 |= VAR_9;
 FUNC_8(VAR_18, VAR_11->control_status + VAR_2);


 FUNC_8(0, VAR_11->adc_fifo + VAR_1);


 for (VAR_16 = 0; VAR_16 < VAR_14->n; VAR_16++) {

  FUNC_8(0, VAR_11->adc_fifo + VAR_0);



  for (VAR_17 = 0; VAR_17 < VAR_19; VAR_17++) {
   if (FUNC_7(VAR_11->control_status + VAR_2) & VAR_6)
    break;
  }
  if (VAR_17 == VAR_19)
   return -VAR_7;


  VAR_15[VAR_16] = FUNC_7(VAR_11->adc_fifo + VAR_0);
 }


 return VAR_16;
}
