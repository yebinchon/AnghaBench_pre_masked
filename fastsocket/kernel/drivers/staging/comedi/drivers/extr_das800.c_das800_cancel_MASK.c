
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ count; scalar_t__ forever; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct comedi_device*) ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_1, struct comedi_subdevice *VAR_2)
{
 VAR_0->forever = 0;
 VAR_0->count = 0;
 FUNC_0(VAR_1);
 return 0;
}
