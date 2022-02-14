
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_device {scalar_t__ subdevices; scalar_t__ private; } ;
struct TYPE_4__ {scalar_t__ has_8255; } ;
struct TYPE_3__ {scalar_t__ counter_dev; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct comedi_device*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_3)
{
 if (VAR_3->private) {
  if (VAR_2->counter_dev) {
   FUNC_0(VAR_2->counter_dev);
  }
 }
 if (VAR_3->subdevices && VAR_1.has_8255)
  FUNC_1(VAR_3, VAR_3->subdevices + VAR_0);
}
