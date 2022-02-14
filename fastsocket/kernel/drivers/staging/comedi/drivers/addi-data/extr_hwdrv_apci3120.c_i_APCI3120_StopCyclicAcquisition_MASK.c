
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {scalar_t__ iobase; } ;
struct TYPE_4__ {int us_OutputRegister; void* b_EocEosInterrupt; int b_InterruptMode; void* b_AiCyclicAcquisition; scalar_t__ ui_DmaActualBuffer; scalar_t__ b_AiContinuous; scalar_t__ ui_AiBufferPtr; scalar_t__ ui_AiActualScanPosition; scalar_t__ ui_AiActualScan; scalar_t__ i_IobaseAmcc; scalar_t__ i_IobaseAddon; } ;
struct TYPE_3__ {scalar_t__ cur_chan; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 TYPE_2__* VAR_13 ;
 int FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (struct comedi_device*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (int,scalar_t__) ;

int FUNC_7(struct comedi_device *VAR_14, struct comedi_subdevice *VAR_15)
{

 FUNC_6(0, VAR_13->i_IobaseAddon + 4);


 FUNC_6(VAR_2, VAR_13->i_IobaseAddon + 0);
 FUNC_6(0, VAR_13->i_IobaseAddon + 2);
 FUNC_6(VAR_1, VAR_13->i_IobaseAddon + 0);
 FUNC_6(0, VAR_13->i_IobaseAddon + 2);


 FUNC_5(0, VAR_13->i_IobaseAmcc + VAR_0);
 FUNC_0(VAR_14);

 VAR_13->us_OutputRegister = 0;

 FUNC_6(VAR_13->
  us_OutputRegister & VAR_6 &
  VAR_7, VAR_14->iobase + VAR_12);

 FUNC_6(VAR_5, VAR_14->iobase + VAR_12);


 FUNC_4(VAR_4,
  VAR_14->iobase + VAR_11);

 FUNC_2(VAR_14->iobase + VAR_10);
 FUNC_3(VAR_14->iobase + VAR_9);
 VAR_13->ui_AiActualScan = 0;
 VAR_13->ui_AiActualScanPosition = 0;
 VAR_15->async->cur_chan = 0;
 VAR_13->ui_AiBufferPtr = 0;
 VAR_13->b_AiContinuous = 0;
 VAR_13->ui_DmaActualBuffer = 0;

 VAR_13->b_AiCyclicAcquisition = VAR_3;
 VAR_13->b_InterruptMode = VAR_8;
 VAR_13->b_EocEosInterrupt = VAR_3;
 FUNC_1(VAR_14);
 return 0;
}
