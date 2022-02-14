
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_2__ {int clock_ns; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static unsigned FUNC_0(const struct comedi_device *VAR_1, int VAR_2)
{
 return VAR_0->clock_ns * (VAR_2 + 1);
}
