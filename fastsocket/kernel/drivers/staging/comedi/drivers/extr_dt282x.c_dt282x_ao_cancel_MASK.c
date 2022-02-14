
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ supcsr; scalar_t__ dacsr; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_2,
       struct comedi_subdevice *VAR_3)
{
 FUNC_0(VAR_2);

 VAR_1->dacsr = 0;
 FUNC_1(0);

 VAR_1->supcsr = 0;
 FUNC_2(VAR_0);

 return 0;
}
