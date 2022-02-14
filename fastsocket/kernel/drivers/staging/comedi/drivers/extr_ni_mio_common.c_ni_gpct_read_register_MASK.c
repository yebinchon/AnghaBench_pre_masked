
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ni_gpct {TYPE_1__* counter_dev; } ;
struct comedi_device {int dummy; } ;
typedef enum ni_gpct_register { ____Placeholder_ni_gpct_register } ni_gpct_register ;
struct TYPE_4__ {int (* stc_readl ) (struct comedi_device*,unsigned int) ;int (* stc_readw ) (struct comedi_device*,unsigned int) ;} ;
struct TYPE_3__ {struct comedi_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;






 TYPE_2__* VAR_2 ;
 unsigned int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct comedi_device*,unsigned int) ;
 int FUNC_3 (struct comedi_device*,unsigned int) ;

__attribute__((used)) static unsigned FUNC_4(struct ni_gpct *VAR_3,
          enum ni_gpct_register VAR_4)
{
 struct comedi_device *VAR_5 = VAR_3->counter_dev->dev;
 unsigned VAR_6;
 switch (VAR_4) {

 case 133:
  return FUNC_1(VAR_0);
  break;
 case 130:
  return FUNC_1(VAR_1);
  break;


 case 132:
 case 129:
 case 131:
 case 128:
  VAR_6 = FUNC_0(VAR_4);
  return VAR_2->stc_readl(VAR_5, VAR_6);
  break;


 default:
  VAR_6 = FUNC_0(VAR_4);
  return VAR_2->stc_readw(VAR_5, VAR_6);
  break;
 }
 return 0;
}
