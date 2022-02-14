
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {int ai_scans_left; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_0(struct comedi_device *VAR_1,
        struct comedi_subdevice *VAR_2)
{
 VAR_0->ai_scans_left = 1;
 return 0;
}
