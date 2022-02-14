
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_device {scalar_t__ iobase; } ;
struct TYPE_4__ {scalar_t__ ai_bipolar; } ;
struct TYPE_3__ {int ai_bits; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__* VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static short FUNC_1(struct comedi_device *VAR_3)
{

 short VAR_4 = (short)FUNC_0(VAR_3->iobase + VAR_0);




 VAR_4 = VAR_4 >> (16 - VAR_2->ai_bits);



 if (VAR_1->ai_bipolar) {
  VAR_4 ^= 1 << (VAR_2->ai_bits - 1);
 }
 return VAR_4;
}
