
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {scalar_t__ iobase; } ;
struct TYPE_2__ {int IntControlReg; int AdControlReg; int AdFunctionReg; int* ao_data; scalar_t__ exttrg_users; scalar_t__ cnt0_users; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 TYPE_1__* VAR_15 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (struct comedi_device*,int ,int ,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_16)
{
 VAR_15->IntControlReg = 0;
 VAR_15->exttrg_users = 0;
 FUNC_0(VAR_16->iobase + VAR_12);
 FUNC_1(VAR_15->IntControlReg, VAR_16->iobase + VAR_12);
 FUNC_1(0x30, VAR_16->iobase + VAR_7);

 FUNC_2(VAR_16, 0, 0, 0);
 VAR_15->AdControlReg = 0;
 FUNC_1(VAR_15->AdControlReg, VAR_16->iobase + VAR_2);
 FUNC_1(0, VAR_16->iobase + VAR_6);
 FUNC_1(1, VAR_16->iobase + VAR_14);
 FUNC_1(2, VAR_16->iobase + VAR_14);
 VAR_15->AdFunctionReg = VAR_0 | VAR_1;
 FUNC_1(VAR_15->AdFunctionReg, VAR_16->iobase + VAR_3);

 VAR_15->ao_data[0] = 2047;
 VAR_15->ao_data[1] = 2047;
 FUNC_1(VAR_15->ao_data[0], VAR_16->iobase + VAR_8);
 FUNC_1(VAR_15->ao_data[1], VAR_16->iobase + VAR_9);
 FUNC_1(0, VAR_16->iobase + VAR_11);
 FUNC_3(10);
 FUNC_0(VAR_16->iobase + VAR_5);
 FUNC_1(0, VAR_16->iobase + VAR_10);
 FUNC_1(0, VAR_16->iobase + VAR_13);
 FUNC_0(VAR_16->iobase + VAR_4);
 FUNC_0(VAR_16->iobase + VAR_13);
 VAR_15->AdControlReg = 0;
 FUNC_1(VAR_15->AdControlReg, VAR_16->iobase + VAR_2);

 VAR_15->cnt0_users = 0;
 VAR_15->exttrg_users = 0;

 return 0;
}
