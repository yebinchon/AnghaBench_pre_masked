
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ui_StatusRegister1 ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {int tsk_Current; scalar_t__ iobase; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned int,scalar_t__) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(int VAR_5, void *VAR_6)
{
 struct comedi_device *VAR_7 = VAR_6;
 unsigned int VAR_8 = 0;
 unsigned int VAR_9 = 0;
 unsigned int VAR_10 = 0;
 unsigned int VAR_11 = 0;
 unsigned int VAR_12 = 0;
 if (VAR_3 == 1) {
  VAR_4 = VAR_2;
  VAR_2 = VAR_2 + 1;
 }



 VAR_8 = FUNC_0(VAR_1->iobase + 128 + 16);




 VAR_9 =
  FUNC_0(VAR_1->iobase + ((VAR_4 - 1) * 32) + 20);

 if ((((VAR_8) & 0x8) == 0x8))
 {



  VAR_10 = FUNC_0(VAR_1->iobase + 128 + 12);
  VAR_10 = VAR_10 & 0xFFDF0000UL;
  FUNC_1(VAR_10, VAR_1->iobase + 128 + 12);



  VAR_11 = FUNC_0(VAR_1->iobase + 128 + 60);



  VAR_12 = FUNC_0(VAR_1->iobase + 128 + 60);
  FUNC_2(VAR_0, VAR_1->tsk_Current, 0);
 }

 else {
  if ((VAR_9 & 0x1) == 0x1) {
   FUNC_2(VAR_0, VAR_1->tsk_Current, 0);
  }
 }

 return;
}
