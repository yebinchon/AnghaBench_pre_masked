
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {void* plx9080_iobase; } ;


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
 int VAR_10 ;
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
 int FUNC_1 (struct comedi_device*,int) ;
 int FUNC_2 (struct comedi_device*) ;
 TYPE_1__* FUNC_3 (struct comedi_device*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (int,void*) ;

__attribute__((used)) static void FUNC_7(struct comedi_device *VAR_23)
{
 uint32_t VAR_24;
 void *VAR_25 = FUNC_3(VAR_23)->plx9080_iobase;


 FUNC_0(" plx interrupt status 0x%x\n",
      FUNC_5(VAR_25 + VAR_19));
 FUNC_0(" plx id bits 0x%x\n", FUNC_5(VAR_25 + VAR_18));
 FUNC_0(" plx control reg 0x%x\n",
      FUNC_5(FUNC_3(VAR_23)->plx9080_iobase + VAR_3));

 FUNC_0(" plx revision 0x%x\n",
      FUNC_5(VAR_25 + VAR_22));
 FUNC_0(" plx dma channel 0 mode 0x%x\n",
      FUNC_5(VAR_25 + VAR_8));
 FUNC_0(" plx dma channel 1 mode 0x%x\n",
      FUNC_5(VAR_25 + VAR_12));
 FUNC_0(" plx dma channel 0 pci address 0x%x\n",
      FUNC_5(VAR_25 + VAR_9));
 FUNC_0(" plx dma channel 0 local address 0x%x\n",
      FUNC_5(VAR_25 + VAR_7));
 FUNC_0(" plx dma channel 0 transfer size 0x%x\n",
      FUNC_5(VAR_25 + VAR_11));
 FUNC_0(" plx dma channel 0 descriptor 0x%x\n",
      FUNC_5(VAR_25 + VAR_6));
 FUNC_0(" plx dma channel 0 command status 0x%x\n",
      FUNC_4(VAR_25 + VAR_5));
 FUNC_0(" plx dma channel 0 threshold 0x%x\n",
      FUNC_5(VAR_25 + VAR_10));
 FUNC_0(" plx bigend 0x%x\n", FUNC_5(VAR_25 + VAR_2));



 VAR_24 = 0;

 FUNC_6(VAR_24, FUNC_3(VAR_23)->plx9080_iobase + VAR_2);

 FUNC_2(VAR_23);

 FUNC_1(VAR_23, 0);
 FUNC_1(VAR_23, 1);


 VAR_24 = 0;

 VAR_24 |= VAR_13;

 VAR_24 |= VAR_16;

 VAR_24 |= VAR_17;

 VAR_24 |= VAR_20;

 VAR_24 |= VAR_14;

 VAR_24 |= VAR_4;

 VAR_24 |= VAR_15;
 VAR_24 |= VAR_21;
 FUNC_6(VAR_24, VAR_25 + VAR_8);
}
