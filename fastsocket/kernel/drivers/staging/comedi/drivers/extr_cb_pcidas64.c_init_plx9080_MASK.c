
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct comedi_device {int dummy; } ;
struct TYPE_5__ {scalar_t__ layout; } ;
struct TYPE_4__ {void* plx9080_iobase; int plx_intcsr_bits; int plx_control_bits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int FUNC_1 (struct comedi_device*,int) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 TYPE_2__* FUNC_3 (struct comedi_device*) ;
 int FUNC_4 (struct comedi_device*) ;
 TYPE_1__* FUNC_5 (struct comedi_device*) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (int,void*) ;

__attribute__((used)) static void FUNC_9(struct comedi_device *VAR_37)
{
 uint32_t VAR_38;
 void *VAR_39 = FUNC_5(VAR_37)->plx9080_iobase;

 FUNC_5(VAR_37)->plx_control_bits =
     FUNC_7(FUNC_5(VAR_37)->plx9080_iobase + VAR_12);


 FUNC_0(" plx interrupt status 0x%x\n",
      FUNC_7(VAR_39 + VAR_29));
 FUNC_0(" plx id bits 0x%x\n", FUNC_7(VAR_39 + VAR_28));
 FUNC_0(" plx control reg 0x%x\n", FUNC_5(VAR_37)->plx_control_bits);
 FUNC_0(" plx mode/arbitration reg 0x%x\n",
      FUNC_7(VAR_39 + VAR_33));
 FUNC_0(" plx region0 reg 0x%x\n",
      FUNC_7(VAR_39 + VAR_34));
 FUNC_0(" plx region1 reg 0x%x\n",
      FUNC_7(VAR_39 + VAR_35));

 FUNC_0(" plx revision 0x%x\n",
      FUNC_7(VAR_39 + VAR_36));
 FUNC_0(" plx dma channel 0 mode 0x%x\n",
      FUNC_7(VAR_39 + VAR_17));
 FUNC_0(" plx dma channel 1 mode 0x%x\n",
      FUNC_7(VAR_39 + VAR_21));
 FUNC_0(" plx dma channel 0 pci address 0x%x\n",
      FUNC_7(VAR_39 + VAR_18));
 FUNC_0(" plx dma channel 0 local address 0x%x\n",
      FUNC_7(VAR_39 + VAR_16));
 FUNC_0(" plx dma channel 0 transfer size 0x%x\n",
      FUNC_7(VAR_39 + VAR_20));
 FUNC_0(" plx dma channel 0 descriptor 0x%x\n",
      FUNC_7(VAR_39 + VAR_15));
 FUNC_0(" plx dma channel 0 command status 0x%x\n",
      FUNC_6(VAR_39 + VAR_14));
 FUNC_0(" plx dma channel 0 threshold 0x%x\n",
      FUNC_7(VAR_39 + VAR_19));
 FUNC_0(" plx bigend 0x%x\n", FUNC_7(VAR_39 + VAR_11));




 VAR_38 = 0;

 FUNC_8(VAR_38, FUNC_5(VAR_37)->plx9080_iobase + VAR_11);

 FUNC_4(VAR_37);

 FUNC_1(VAR_37, 0);
 FUNC_1(VAR_37, 1);


 VAR_38 = 0;

 VAR_38 |= VAR_22;

 VAR_38 |= VAR_25;

 VAR_38 |= VAR_26;

 VAR_38 |= VAR_27;

 VAR_38 |= VAR_30;

 VAR_38 |= VAR_23;

 VAR_38 |= VAR_13;

 VAR_38 |= VAR_24;

 if (FUNC_3(VAR_37)->layout == VAR_10) {
  VAR_38 |= VAR_32;
 } else {
  VAR_38 |= VAR_31;
 }
 FUNC_8(VAR_38, VAR_39 + VAR_21);
 if (FUNC_2(FUNC_3(VAR_37)))
  FUNC_8(VAR_38, VAR_39 + VAR_17);


 FUNC_5(VAR_37)->plx_intcsr_bits |=
     VAR_2 | VAR_7 | VAR_8 | VAR_9 | VAR_6 | VAR_5 |
     VAR_3 | VAR_4;
 FUNC_8(FUNC_5(VAR_37)->plx_intcsr_bits,
        FUNC_5(VAR_37)->plx9080_iobase + VAR_29);
}
