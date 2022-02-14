
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_4__ {scalar_t__ ao_bipolar; } ;
struct TYPE_3__ {int ao_bits; } ;


 TYPE_2__* VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static inline unsigned short FUNC_0(struct comedi_device *VAR_2,
          short VAR_3)
{


 if (VAR_0->ao_bipolar) {
  VAR_3 ^= 1 << (VAR_1->ao_bits - 1);
 }




 VAR_3 <<= (16 - VAR_1->ao_bits);
 return (unsigned short)VAR_3;
}
