
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {struct comedi_subdevice* subdevices; } ;
struct TYPE_4__ {unsigned int* ui_DmaBufferUsesize; size_t ui_DmaActualBuffer; unsigned long* ul_DmaBufferHw; int ui_AiFlags; scalar_t__ ui_AiActualScan; scalar_t__ ui_AiNbrofScans; scalar_t__ i_IobaseAmcc; scalar_t__ i_IobaseAddon; scalar_t__ b_DmaDoubleBuffer; void* b_AiCyclicAcquisition; int b_AiContinuous; int * ul_DmaBufferVirtual; } ;
struct TYPE_3__ {int events; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (struct comedi_device*,char*) ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*) ;
 TYPE_2__* VAR_21 ;
 int FUNC_2 (struct comedi_device*,struct comedi_subdevice*) ;
 unsigned int FUNC_3 (scalar_t__) ;
 int FUNC_4 (unsigned int,scalar_t__) ;
 int FUNC_5 (int,scalar_t__) ;
 int FUNC_6 (struct comedi_device*,struct comedi_subdevice*,int ,unsigned int) ;

void FUNC_7(int VAR_22, void *VAR_23)
{
 struct comedi_device *VAR_24 = VAR_23;
 struct comedi_subdevice *VAR_25 = VAR_24->subdevices + 0;
 unsigned int VAR_26, VAR_27;
 unsigned long VAR_28, VAR_29, VAR_30;

 unsigned int VAR_31;
 VAR_27 =
  VAR_21->ui_DmaBufferUsesize[VAR_21->ui_DmaActualBuffer] -
  FUNC_3(VAR_21->i_IobaseAmcc + VAR_5);

 if (VAR_27 <
  VAR_21->ui_DmaBufferUsesize[VAR_21->ui_DmaActualBuffer]) {
  FUNC_0(VAR_24, "Interrupted DMA transfer!");
 }
 if (VAR_27 & 1) {
  FUNC_0(VAR_24, "Odd count of bytes in DMA ring!");
  FUNC_2(VAR_24, VAR_25);
  VAR_21->b_AiCyclicAcquisition = VAR_13;

  return;
 }
 VAR_27 = VAR_27 >> 1;
 if (VAR_21->b_DmaDoubleBuffer) {

  VAR_26 = 1 - VAR_21->ui_DmaActualBuffer;

  VAR_31 = VAR_1 | VAR_0;
  FUNC_4(VAR_31, VAR_21->i_IobaseAddon + VAR_2);


  FUNC_5(VAR_8, VAR_21->i_IobaseAddon + 0);
  FUNC_5(VAR_15,
   VAR_21->i_IobaseAddon + 2);
  FUNC_5(VAR_7, VAR_21->i_IobaseAddon + 0);
  FUNC_5(VAR_14, VAR_21->i_IobaseAddon + 2);

  VAR_30 = VAR_21->ul_DmaBufferHw[VAR_26];
  VAR_28 = VAR_30 & 0xffff;
  VAR_30 = VAR_21->ul_DmaBufferHw[VAR_26];
  VAR_29 = VAR_30 / 65536;


  FUNC_5(VAR_10, VAR_21->i_IobaseAddon + 0);
  FUNC_5(VAR_28, VAR_21->i_IobaseAddon + 2);


  FUNC_5(VAR_9, VAR_21->i_IobaseAddon + 0);
  FUNC_5(VAR_29, VAR_21->i_IobaseAddon + 2);

  VAR_30 = VAR_21->ui_DmaBufferUsesize[VAR_26];
  VAR_28 = VAR_30 & 0xffff;
  VAR_30 = VAR_21->ui_DmaBufferUsesize[VAR_26];
  VAR_29 = VAR_30 / 65536;


  FUNC_5(VAR_12, VAR_21->i_IobaseAddon + 0);
  FUNC_5(VAR_28, VAR_21->i_IobaseAddon + 2);


  FUNC_5(VAR_11, VAR_21->i_IobaseAddon + 0);
  FUNC_5(VAR_29, VAR_21->i_IobaseAddon + 2);






  FUNC_5(3, VAR_21->i_IobaseAddon + 4);

  FUNC_4((VAR_17 |
    VAR_16),
   VAR_21->i_IobaseAmcc + VAR_3);

 }
 if (VAR_27) {
  FUNC_6(VAR_24, VAR_25,
   VAR_21->ul_DmaBufferVirtual[VAR_21->
    ui_DmaActualBuffer], VAR_27);

  if (!(VAR_21->ui_AiFlags & VAR_20)) {
   VAR_25->async->events |= VAR_19;
   FUNC_1(VAR_24, VAR_25);
  }
 }
 if (!VAR_21->b_AiContinuous)
  if (VAR_21->ui_AiActualScan >= VAR_21->ui_AiNbrofScans) {

   FUNC_2(VAR_24, VAR_25);
   VAR_21->b_AiCyclicAcquisition = VAR_13;
   VAR_25->async->events |= VAR_18;
   FUNC_1(VAR_24, VAR_25);
   return;
  }

 if (VAR_21->b_DmaDoubleBuffer) {
  VAR_21->ui_DmaActualBuffer = 1 - VAR_21->ui_DmaActualBuffer;
 } else {




  VAR_31 = VAR_1 | VAR_0;
  FUNC_4(VAR_31, VAR_21->i_IobaseAddon + VAR_2);


  FUNC_5(VAR_8, VAR_21->i_IobaseAddon + 0);
  FUNC_5(VAR_15,
   VAR_21->i_IobaseAddon + 2);
  FUNC_5(VAR_7, VAR_21->i_IobaseAddon + 0);
  FUNC_5(VAR_14, VAR_21->i_IobaseAddon + 2);




  FUNC_4(VAR_6,
   VAR_21->i_IobaseAmcc + VAR_4);

  VAR_30 = VAR_21->ul_DmaBufferHw[0];
  VAR_28 = VAR_30 & 0xffff;
  VAR_30 = VAR_21->ul_DmaBufferHw[0];
  VAR_29 = VAR_30 / 65536;
  FUNC_5(VAR_10, VAR_21->i_IobaseAddon + 0);
  FUNC_5(VAR_28, VAR_21->i_IobaseAddon + 2);
  FUNC_5(VAR_9, VAR_21->i_IobaseAddon + 0);
  FUNC_5(VAR_29, VAR_21->i_IobaseAddon + 2);

  VAR_30 = VAR_21->ui_DmaBufferUsesize[0];
  VAR_28 = VAR_30 & 0xffff;
  VAR_30 = VAR_21->ui_DmaBufferUsesize[0];
  VAR_29 = VAR_30 / 65536;
  FUNC_5(VAR_12, VAR_21->i_IobaseAddon + 0);
  FUNC_5(VAR_28, VAR_21->i_IobaseAddon + 2);
  FUNC_5(VAR_11, VAR_21->i_IobaseAddon + 0);
  FUNC_5(VAR_29, VAR_21->i_IobaseAddon + 2);






  FUNC_5(3, VAR_21->i_IobaseAddon + 4);

  FUNC_4((VAR_17 |
    VAR_16),
   VAR_21->i_IobaseAmcc + VAR_3);
 }
}
