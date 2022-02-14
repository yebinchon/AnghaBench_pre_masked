
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {scalar_t__ iobase; } ;


 int FUNC_0 (char*,int,unsigned int,unsigned int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (unsigned int,scalar_t__) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3(struct comedi_device *VAR_4, int VAR_5, unsigned int VAR_6,
     unsigned int VAR_7)
{
 FUNC_1(0x32, VAR_4->iobase + VAR_3);
 FUNC_1(0xff, VAR_4->iobase + VAR_0);
 FUNC_1(0x00, VAR_4->iobase + VAR_0);
 FUNC_2(1);
 FUNC_1(0xb4, VAR_4->iobase + VAR_3);
 FUNC_1(0x74, VAR_4->iobase + VAR_3);
 FUNC_2(1);

 if (VAR_5 == 1) {
  FUNC_0("mode %d, divisor1 %d, divisor2 %d\n", VAR_5, VAR_6,
   VAR_7);
  FUNC_1(VAR_7 & 0xff, VAR_4->iobase + VAR_2);
  FUNC_1((VAR_7 >> 8) & 0xff, VAR_4->iobase + VAR_2);
  FUNC_1(VAR_6 & 0xff, VAR_4->iobase + VAR_1);
  FUNC_1((VAR_6 >> 8) & 0xff, VAR_4->iobase + VAR_1);
 }



}
