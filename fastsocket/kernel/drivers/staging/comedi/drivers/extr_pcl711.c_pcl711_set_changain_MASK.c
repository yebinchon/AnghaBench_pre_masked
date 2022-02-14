
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {scalar_t__ iobase; } ;
struct TYPE_2__ {scalar_t__ is_8112; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int,scalar_t__) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void FUNC_3(struct comedi_device *VAR_3, int VAR_4)
{
 int VAR_5;

 FUNC_2(FUNC_1(VAR_4), VAR_3->iobase + VAR_0);

 VAR_5 = FUNC_0(VAR_4);

 if (VAR_2->is_8112) {
  if (VAR_5 >= 8) {
   VAR_5 = 0x20 | (VAR_5 & 0x7);
  } else {
   VAR_5 |= 0x10;
  }
 } else {
  FUNC_2(VAR_5, VAR_3->iobase + VAR_1);
 }
}
