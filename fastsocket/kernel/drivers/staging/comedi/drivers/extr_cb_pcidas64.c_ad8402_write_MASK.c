
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_2__ {unsigned int* ad8402_state; scalar_t__ main_iobase; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 TYPE_1__* FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (int const) ;
 int FUNC_2 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct comedi_device *VAR_4, unsigned int VAR_5,
    unsigned int VAR_6)
{
 static const int VAR_7 = 10;
 unsigned int VAR_8, VAR_9;
 unsigned int VAR_10 = ((VAR_5 & 0x3) << 8) | (VAR_6 & 0xff);
 static const int VAR_11 = 1;

 FUNC_0(VAR_4)->ad8402_state[VAR_5] = VAR_6;

 VAR_9 = VAR_1;
 FUNC_1(VAR_11);
 FUNC_2(VAR_9, FUNC_0(VAR_4)->main_iobase + VAR_0);

 for (VAR_8 = 1 << (VAR_7 - 1); VAR_8; VAR_8 >>= 1) {
  if (VAR_10 & VAR_8)
   VAR_9 |= VAR_3;
  else
   VAR_9 &= ~VAR_3;
  FUNC_1(VAR_11);
  FUNC_2(VAR_9, FUNC_0(VAR_4)->main_iobase + VAR_0);
  FUNC_1(VAR_11);
  FUNC_2(VAR_9 | VAR_2,
         FUNC_0(VAR_4)->main_iobase + VAR_0);
 }

 FUNC_1(VAR_11);
 FUNC_2(0, FUNC_0(VAR_4)->main_iobase + VAR_0);
}
