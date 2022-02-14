
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {scalar_t__ iobase; } ;
struct TYPE_2__ {unsigned short us_OutputRegister; scalar_t__ b_ModeSelectRegister; scalar_t__ b_ExttrigEnable; scalar_t__ b_Timer2Interrupt; scalar_t__ b_Timer2Mode; scalar_t__ b_OutputMemoryStatus; scalar_t__ ui_EocEosConversionTime; int b_InterruptMode; void* b_EocEosInterrupt; void* b_AiCyclicAcquisition; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 TYPE_1__* VAR_17 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (unsigned short,scalar_t__) ;
 int FUNC_4 (int) ;

int FUNC_5(struct comedi_device *VAR_18)
{
 unsigned int VAR_19;
 unsigned short VAR_20;

 VAR_17->b_AiCyclicAcquisition = VAR_10;
 VAR_17->b_EocEosInterrupt = VAR_10;
 VAR_17->b_InterruptMode = VAR_11;
 VAR_17->ui_EocEosConversionTime = 0;
 VAR_17->b_OutputMemoryStatus = 0;


 VAR_17->b_Timer2Mode = 0;
 VAR_17->b_Timer2Interrupt = 0;
 VAR_17->b_ExttrigEnable = 0;


 VAR_17->b_ModeSelectRegister = 0;
 FUNC_2(VAR_17->b_ModeSelectRegister,
  VAR_18->iobase + VAR_15);


 VAR_17->us_OutputRegister = 0;
 FUNC_3(VAR_17->us_OutputRegister, VAR_18->iobase + VAR_16);





 FUNC_3(8191 | VAR_0, VAR_18->iobase + VAR_8);
 FUNC_3(8191 | VAR_1, VAR_18->iobase + VAR_8);
 FUNC_3(8191 | VAR_2, VAR_18->iobase + VAR_8);
 FUNC_3(8191 | VAR_3, VAR_18->iobase + VAR_8);

 FUNC_3(8191 | VAR_4, VAR_18->iobase + VAR_9);
 FUNC_3(8191 | VAR_5, VAR_18->iobase + VAR_9);
 FUNC_3(8191 | VAR_6, VAR_18->iobase + VAR_9);
 FUNC_3(8191 | VAR_7, VAR_18->iobase + VAR_9);




 FUNC_4(10);

 FUNC_1(VAR_18->iobase + 0);
 FUNC_0(VAR_18->iobase + VAR_13);
 FUNC_1(VAR_18->iobase + VAR_12);


 for (VAR_19 = 0; VAR_19 < 16; VAR_19++) {
  VAR_20 = VAR_19 << 8;
  FUNC_3(VAR_20, VAR_18->iobase + VAR_14);
 }
 return 0;
}
