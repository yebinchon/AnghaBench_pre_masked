
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_4__ {int layout; } ;
struct TYPE_3__ {unsigned int* caldac_state; } ;





 TYPE_2__* FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (struct comedi_device*,unsigned int,unsigned int) ;
 int FUNC_2 (struct comedi_device*,unsigned int,unsigned int) ;
 TYPE_1__* FUNC_3 (struct comedi_device*) ;

__attribute__((used)) static void FUNC_4(struct comedi_device *VAR_0, unsigned int VAR_1,
    unsigned int VAR_2)
{
 FUNC_3(VAR_0)->caldac_state[VAR_1] = VAR_2;

 switch (FUNC_0(VAR_0)->layout) {
 case 129:
 case 128:
  FUNC_1(VAR_0, VAR_1, VAR_2);
  break;
 case 130:
  FUNC_2(VAR_0, VAR_1, VAR_2);
  break;
 default:
  break;
 }
}
