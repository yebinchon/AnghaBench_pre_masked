
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {int control_1; scalar_t__ me_regbase; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_2, struct comedi_subdevice *VAR_3)
{



 VAR_1->control_1 &= 0xFFFC;
 FUNC_0(VAR_1->control_1, VAR_1->me_regbase + VAR_0);

 return 0;
}
