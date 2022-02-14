
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int n_chan; } ;
struct comedi_insn {unsigned int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; int minor; } ;
struct TYPE_2__ {scalar_t__ hwver; int adcg; unsigned short adccon; scalar_t__ iobase1; scalar_t__ ai_bipolar; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 unsigned int VAR_8 ;
 unsigned short VAR_9 ;
 unsigned short VAR_10 ;
 unsigned short VAR_11 ;
 unsigned short VAR_12 ;
 unsigned short VAR_13 ;
 unsigned short VAR_14 ;
 unsigned short VAR_15 ;
 scalar_t__ VAR_16 ;
 unsigned int VAR_17 ;
 TYPE_1__* VAR_18 ;
 int FUNC_4 (scalar_t__,int ,int,int ) ;
 unsigned int FUNC_5 (scalar_t__) ;
 int FUNC_6 (unsigned short,scalar_t__) ;
 scalar_t__* VAR_19 ;
 unsigned int* VAR_20 ;
 unsigned int FUNC_7 (struct comedi_device*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct comedi_device *VAR_21,
      struct comedi_subdevice *VAR_22, struct comedi_insn *VAR_23,
      unsigned int *VAR_24)
{
 unsigned int VAR_25, VAR_26;
 unsigned int VAR_27, VAR_28, VAR_29;
 unsigned int VAR_30;
 unsigned int VAR_31;
 unsigned short VAR_32, VAR_33;


 VAR_27 = FUNC_1(VAR_23->chanspec);
 VAR_28 = FUNC_2(VAR_23->chanspec);
 VAR_29 = FUNC_0(VAR_23->chanspec);
 if (VAR_29 == VAR_0) {

  if (VAR_27 >= VAR_22->n_chan / 2) {
   FUNC_3("comedi%d: amplc_pci230: ai_rinsn: "
    "differential channel number out of range "
    "0 to %u\n", VAR_21->minor, (VAR_22->n_chan / 2) - 1);
   return -VAR_1;
  }
 }






 VAR_32 = VAR_15 | VAR_9;

 FUNC_4(VAR_18->iobase1 + VAR_16, 0, 2, VAR_3);
 VAR_18->ai_bipolar = VAR_19[VAR_28];
 if (VAR_29 == VAR_0) {

  VAR_30 = VAR_27 * 2;
  if (VAR_18->hwver == 0) {


   VAR_33 = 3 << VAR_30;
  } else {


   VAR_33 = 1 << VAR_30;
  }
  VAR_32 |= VAR_11;
 } else {

  VAR_33 = 1 << VAR_27;
  VAR_30 = VAR_27 & ~1;
  VAR_32 |= VAR_12;
 }
 VAR_18->adcg = (VAR_18->adcg & ~(3 << VAR_30))
     | (VAR_20[VAR_28] << VAR_30);
 if (VAR_18->ai_bipolar) {
  VAR_32 |= VAR_13;
 } else {
  VAR_32 |= VAR_14;
 }



 FUNC_6(VAR_33, VAR_21->iobase + VAR_6);


 FUNC_6(VAR_18->adcg, VAR_21->iobase + VAR_7);


 VAR_18->adccon = VAR_32;
 FUNC_6(VAR_32 | VAR_10, VAR_21->iobase + VAR_5);


 for (VAR_25 = 0; VAR_25 < VAR_23->n; VAR_25++) {


  FUNC_4(VAR_18->iobase1 + VAR_16, 0, 2,
          VAR_3);
  FUNC_4(VAR_18->iobase1 + VAR_16, 0, 2,
          VAR_4);



  for (VAR_26 = 0; VAR_26 < 100; VAR_26++) {
   VAR_31 = FUNC_5(VAR_21->iobase + VAR_5);
   if (!(VAR_31 & VAR_8))
    break;
   FUNC_9(1);
  }
  if (VAR_26 == 100) {


   FUNC_8("timeout\n");
   return -VAR_2;
  }


  VAR_24[VAR_25] = FUNC_7(VAR_21);
 }


 return VAR_25;
}
