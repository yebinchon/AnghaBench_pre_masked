
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_device {scalar_t__ iobase; } ;
struct TYPE_4__ {scalar_t__ usefifo; } ;
struct TYPE_3__ {scalar_t__ is_818; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
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
 TYPE_2__* VAR_15 ;
 int FUNC_0 (int,scalar_t__) ;
 TYPE_1__* VAR_16 ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_17)
{
 if (VAR_15->usefifo) {
  FUNC_0(0, VAR_17->iobase + VAR_12);
  FUNC_0(0, VAR_17->iobase + VAR_11);
  FUNC_0(0, VAR_17->iobase + VAR_10);
 }
 FUNC_0(0, VAR_17->iobase + VAR_7);
 FUNC_0(0, VAR_17->iobase + VAR_6);
 FUNC_1(1);
 FUNC_0(0, VAR_17->iobase + VAR_8);
 FUNC_0(0, VAR_17->iobase + VAR_9);
 FUNC_1(1);
 FUNC_0(0, VAR_17->iobase + VAR_4);
 FUNC_0(0, VAR_17->iobase + VAR_3);
 FUNC_0(0, VAR_17->iobase + VAR_13);
 FUNC_0(0, VAR_17->iobase + VAR_2);
 FUNC_0(0xb0, VAR_17->iobase + VAR_5);
 FUNC_0(0x70, VAR_17->iobase + VAR_5);
 FUNC_0(0x30, VAR_17->iobase + VAR_5);
 if (VAR_16->is_818) {
  FUNC_0(0, VAR_17->iobase + VAR_14);
 } else {
  FUNC_0(0, VAR_17->iobase + VAR_1);
  FUNC_0(0, VAR_17->iobase + VAR_0);
 }
}
