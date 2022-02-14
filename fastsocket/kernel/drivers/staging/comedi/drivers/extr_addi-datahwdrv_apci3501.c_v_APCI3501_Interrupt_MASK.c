
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ iobase; int tsk_Current; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct comedi_device*,char*) ;
 TYPE_1__* VAR_5 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (unsigned long,scalar_t__) ;
 int FUNC_3 (int ,int ,int ) ;

void FUNC_4(int VAR_6, void *VAR_7)
{
 int VAR_8;
 struct comedi_device *VAR_9 = VAR_7;
 unsigned int VAR_10;
 unsigned long VAR_11;

 VAR_11 =
  FUNC_1(VAR_5->iobase + VAR_3 + VAR_1);

 VAR_11 = (VAR_11 & 0xFFFFF9FDul);
 FUNC_2(VAR_11,
  VAR_5->iobase + VAR_3 + VAR_1);

 VAR_10 =
  FUNC_1(VAR_5->iobase + VAR_3 +
  VAR_0) & 0x1;

 if ((!VAR_10)) {
  FUNC_0(VAR_9, "IRQ from unknow source");
  return;
 }




 FUNC_3(VAR_4, VAR_5->tsk_Current, 0);
 VAR_11 =
  FUNC_1(VAR_5->iobase + VAR_3 + VAR_1);
 VAR_11 = ((VAR_11 & 0xFFFFF9FDul) | 1 << 1);
 FUNC_2(VAR_11,
  VAR_5->iobase + VAR_3 + VAR_1);
 VAR_8 = FUNC_1(VAR_5->iobase + VAR_3 +
  VAR_2) & 0x1;
 return;
}
