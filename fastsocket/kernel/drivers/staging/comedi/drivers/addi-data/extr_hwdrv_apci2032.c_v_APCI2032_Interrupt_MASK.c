
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_2__ {int tsk_Current; scalar_t__ iobase; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_6 ;

void FUNC_4(int VAR_7, void *VAR_8)
{
 struct comedi_device *VAR_9 = VAR_8;
 unsigned int VAR_10;

 VAR_10 = FUNC_0(VAR_5->iobase + VAR_3) & 0x1;

 if (VAR_10 == 0) {
  FUNC_2("\nInterrupt from unKnown source\n");
 }
 if (VAR_10) {

  VAR_6 =
   FUNC_0(VAR_5->iobase +
   VAR_2) & 0x3;
  FUNC_1(0x0,
   VAR_5->iobase + VAR_0 +
   VAR_1);
  if (VAR_6 == 1) {

   FUNC_3(VAR_4, VAR_5->tsk_Current, 0);
  }
  else {
   if (VAR_6 == 2) {

    FUNC_3(VAR_4, VAR_5->tsk_Current, 0);
   }
  }
 }

 return;

}
