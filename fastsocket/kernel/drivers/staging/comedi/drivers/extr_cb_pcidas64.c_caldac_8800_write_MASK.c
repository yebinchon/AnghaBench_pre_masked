
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int uint8_t ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ main_iobase; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct comedi_device*,char*) ;
 TYPE_1__* FUNC_1 (struct comedi_device*) ;
 int FUNC_2 (int const) ;
 int FUNC_3 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_4, unsigned int VAR_5,
        uint8_t VAR_6)
{
 static const int VAR_7 = 8;
 static const int VAR_8 = 11;
 unsigned int VAR_9 = ((VAR_5 & 0x7) << 8) | VAR_6;
 unsigned int VAR_10, VAR_11;
 static const int VAR_12 = 1;

 if (VAR_5 >= VAR_7) {
  FUNC_0(VAR_4, "illegal caldac channel");
  return -1;
 }
 for (VAR_10 = 1 << (VAR_8 - 1); VAR_10; VAR_10 >>= 1) {
  VAR_11 = 0;
  if (VAR_9 & VAR_10)
   VAR_11 |= VAR_3;
  FUNC_2(VAR_12);
  FUNC_3(VAR_11, FUNC_1(VAR_4)->main_iobase + VAR_0);
  VAR_11 |= VAR_2;
  FUNC_2(VAR_12);
  FUNC_3(VAR_11, FUNC_1(VAR_4)->main_iobase + VAR_0);
 }
 FUNC_2(VAR_12);
 FUNC_3(VAR_1, FUNC_1(VAR_4)->main_iobase + VAR_0);
 FUNC_2(VAR_12);
 FUNC_3(0, FUNC_1(VAR_4)->main_iobase + VAR_0);
 FUNC_2(VAR_12);
 return 0;
}
