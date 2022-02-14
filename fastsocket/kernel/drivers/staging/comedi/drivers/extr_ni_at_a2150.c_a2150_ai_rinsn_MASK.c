
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {unsigned int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; } ;
struct TYPE_2__ {int config_bits; int irq_dma_bits; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_1 (struct comedi_device*,int ,int) ;
 int FUNC_2 (struct comedi_device*,char*) ;
 TYPE_1__* VAR_13 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct comedi_device*) ;
 int FUNC_5 (int,scalar_t__) ;
 int FUNC_6 (char*,unsigned int) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct comedi_device *VAR_14, struct comedi_subdevice *VAR_15,
     struct comedi_insn *VAR_16, unsigned int *VAR_17)
{
 unsigned int VAR_18, VAR_19;
 static const int VAR_20 = 100000;
 static const int VAR_21 = 36;


 FUNC_5(0, VAR_14->iobase + VAR_7);


 if (FUNC_1(VAR_14, FUNC_0(VAR_16->chanspec), 1) < 0)
  return -1;


 VAR_13->config_bits &= ~VAR_0;
 VAR_13->config_bits &= ~VAR_1;


 FUNC_5(VAR_13->config_bits, VAR_14->iobase + VAR_2);


 VAR_13->irq_dma_bits &= ~VAR_4 & ~VAR_3;
 FUNC_5(VAR_13->irq_dma_bits, VAR_14->iobase + VAR_10);


 FUNC_5(0, VAR_14->iobase + VAR_12);


 FUNC_5(0, VAR_14->iobase + VAR_8);


 for (VAR_19 = 0; VAR_19 < VAR_21; VAR_19++) {
  for (VAR_18 = 0; VAR_18 < VAR_20; VAR_18++) {
   if (FUNC_3(VAR_14->iobase + VAR_11) & VAR_9)
    break;
   FUNC_7(1);
  }
  if (VAR_18 == VAR_20) {
   FUNC_2(VAR_14, "timeout");
   return -VAR_5;
  }
  FUNC_3(VAR_14->iobase + VAR_6);
 }


 for (VAR_19 = 0; VAR_19 < VAR_16->n; VAR_19++) {
  for (VAR_18 = 0; VAR_18 < VAR_20; VAR_18++) {
   if (FUNC_3(VAR_14->iobase + VAR_11) & VAR_9)
    break;
   FUNC_7(1);
  }
  if (VAR_18 == VAR_20) {
   FUNC_2(VAR_14, "timeout");
   return -VAR_5;
  }



  VAR_17[VAR_19] = FUNC_3(VAR_14->iobase + VAR_6);



  VAR_17[VAR_19] ^= 0x8000;
 }


 FUNC_5(0, VAR_14->iobase + VAR_7);

 return VAR_19;
}
