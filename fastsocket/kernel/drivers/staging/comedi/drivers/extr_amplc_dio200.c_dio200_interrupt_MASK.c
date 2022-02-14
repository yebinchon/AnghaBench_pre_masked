
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {scalar_t__ subdevices; int attached; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {scalar_t__ intr_sd; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (struct comedi_device*,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_2, void *VAR_3)
{
 struct comedi_device *VAR_4 = VAR_3;
 int VAR_5;

 if (!VAR_4->attached) {
  return VAR_0;
 }

 if (VAR_1->intr_sd >= 0) {
  VAR_5 = FUNC_1(VAR_4,
        VAR_4->subdevices +
        VAR_1->intr_sd);
 } else {
  VAR_5 = 0;
 }

 return FUNC_0(VAR_5);
}
