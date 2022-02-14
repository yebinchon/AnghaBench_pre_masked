
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; } ;
struct TYPE_2__ {scalar_t__ adc_coding; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 TYPE_1__* VAR_10 ;
 void* FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_11,
     struct comedi_subdevice *VAR_12,
     struct comedi_insn *VAR_13, unsigned int *VAR_14)
{
 int VAR_15, VAR_16;
 int VAR_17;
 int VAR_18;
 int VAR_19;




 VAR_17 = FUNC_0(VAR_13->chanspec);
 VAR_18 = FUNC_1(VAR_13->chanspec);







 FUNC_3(VAR_17 | (VAR_18 << 6), VAR_11->iobase + VAR_4);

 for (VAR_15 = 0; VAR_15 < VAR_13->n; VAR_15++) {

  FUNC_3(0, VAR_11->iobase + VAR_5);

  for (VAR_16 = 0; VAR_16 < VAR_2; VAR_16++) {

   VAR_19 = FUNC_2(VAR_11->iobase + VAR_8);



   if (VAR_19 & VAR_6) {

    VAR_14[VAR_15] = FUNC_2(VAR_11->iobase + VAR_1);

    if (VAR_10->adc_coding == VAR_9) {
     VAR_14[VAR_15] ^= 0x800;
    }
    break;
   }
   if (VAR_19 & VAR_7) {
    FUNC_4("atmio16d: a/d FIFO overflow\n");
    FUNC_3(0, VAR_11->iobase + VAR_0);

    return -VAR_3;
   }
  }

  if (VAR_16 == VAR_2) {
   FUNC_4("atmio16d: timeout\n");

   return -VAR_3;
  }
 }

 return VAR_15;
}
