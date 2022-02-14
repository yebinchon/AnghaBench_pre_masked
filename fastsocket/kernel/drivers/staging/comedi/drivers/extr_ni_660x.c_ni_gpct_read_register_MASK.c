
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ni_gpct {int chip_index; TYPE_1__* counter_dev; } ;
struct comedi_device {int dummy; } ;
typedef enum ni_gpct_register { ____Placeholder_ni_gpct_register } ni_gpct_register ;
typedef enum NI_660x_Register { ____Placeholder_NI_660x_Register } NI_660x_Register ;
struct TYPE_2__ {struct comedi_device* dev; } ;


 int FUNC_0 (struct comedi_device*,int ,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static unsigned FUNC_2(struct ni_gpct *VAR_0,
          enum ni_gpct_register VAR_1)
{
 struct comedi_device *VAR_2 = VAR_0->counter_dev->dev;
 enum NI_660x_Register VAR_3 = FUNC_1(VAR_1);
 return FUNC_0(VAR_2, VAR_0->chip_index,
         VAR_3);
}
