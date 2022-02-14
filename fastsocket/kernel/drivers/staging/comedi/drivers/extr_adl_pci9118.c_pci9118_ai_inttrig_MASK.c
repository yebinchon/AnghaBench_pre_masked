
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {scalar_t__ iobase; } ;
struct TYPE_4__ {unsigned int ai_inttrig_start; int ai_do; int AdControlReg; int ai_divisor2; int ai_divisor1; int AdFunctionReg; int IntControlReg; int ai12_startstop; } ;
struct TYPE_3__ {int * inttrig; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 TYPE_2__* VAR_6 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (struct comedi_device*,int,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_7,
         struct comedi_subdevice *VAR_8, unsigned int VAR_9)
{
 if (VAR_9 != VAR_6->ai_inttrig_start)
  return -VAR_1;

 VAR_6->ai12_startstop &= ~VAR_5;
 VAR_8->async->inttrig = ((void*)0);

 FUNC_0(VAR_6->IntControlReg, VAR_7->iobase + VAR_4);
 FUNC_0(VAR_6->AdFunctionReg, VAR_7->iobase + VAR_3);
 if (VAR_6->ai_do != 3) {
  FUNC_1(VAR_7, VAR_6->ai_do, VAR_6->ai_divisor1,
       VAR_6->ai_divisor2);
  VAR_6->AdControlReg |= VAR_0;
 }
 FUNC_0(VAR_6->AdControlReg, VAR_7->iobase + VAR_2);

 return 1;
}
