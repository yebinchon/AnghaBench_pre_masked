
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ iobase; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__* VAR_4 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned int,scalar_t__) ;

int FUNC_2(struct comedi_device *VAR_5)
{
 int VAR_6 = 0, VAR_7 = 0;
 unsigned int VAR_8 = 0, VAR_9, VAR_10 = 0;
 FUNC_1(0x0, VAR_4->iobase + VAR_3);
 FUNC_1(1, VAR_4->iobase + VAR_0 +
  VAR_2);

 VAR_9 = 0x80000000;

 for (VAR_6 = 0; VAR_6 <= 7; VAR_6++) {
  VAR_10 = FUNC_0(VAR_4->iobase + VAR_0);

  while (VAR_10 == 0) {
   VAR_10 =
    FUNC_0(VAR_4->iobase + VAR_0);
   VAR_10 = (VAR_10 >> 8) & 1;
  }

  if (VAR_10) {

   VAR_8 =
    (unsigned int) ((unsigned int) (VAR_6 & 0xFF) |
    (unsigned int) ((VAR_7 << 0x8) & 0x7FFFFF00L) |
    (unsigned int) (VAR_9));
   FUNC_1(VAR_8,
    VAR_4->iobase + VAR_0 +
    VAR_1);
  }
 }

 return 0;
}
