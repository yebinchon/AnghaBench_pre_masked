
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_device {scalar_t__ iobase; } ;
struct TYPE_4__ {unsigned int* ao_readback; unsigned short daccon; int * hwrange; } ;
struct TYPE_3__ {int ao_bits; } ;


 unsigned short FUNC_0 (unsigned short,int ,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned short VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_2__* VAR_8 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (unsigned short,scalar_t__) ;
 TYPE_1__* VAR_9 ;

__attribute__((used)) static void
FUNC_3(struct comedi_device *VAR_10, int VAR_11, int VAR_12,
     unsigned int VAR_13)
{
 unsigned short VAR_14;


 VAR_8->ao_readback[VAR_11] = VAR_13;

 FUNC_2(1 << VAR_11, VAR_10->iobase + VAR_0);

 VAR_8->daccon = FUNC_0(VAR_8->daccon, VAR_8->hwrange[VAR_12],
      (VAR_4 |
       VAR_5));
 FUNC_2(VAR_8->daccon | VAR_2,
      VAR_10->iobase + VAR_1);





 VAR_14 = (unsigned short)VAR_13 << (16 - VAR_9->ao_bits);
 if ((VAR_8->daccon & VAR_4) ==
     VAR_3) {
  VAR_14 ^= 0x8000;
 }

 FUNC_2(VAR_14, VAR_10->iobase + VAR_6);

 FUNC_1(VAR_10->iobase + VAR_7);
}
