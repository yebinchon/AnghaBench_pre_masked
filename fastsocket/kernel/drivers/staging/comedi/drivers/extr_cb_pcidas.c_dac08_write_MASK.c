
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_2__ {unsigned int dac08_value; scalar_t__ control_status; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (struct comedi_device*) ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (unsigned int,scalar_t__) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_3, unsigned int VAR_4)
{
 if (VAR_2->dac08_value == VAR_4)
  return 1;

 VAR_2->dac08_value = VAR_4;

 FUNC_1(FUNC_0(VAR_3) | (VAR_4 & 0xff),
      VAR_2->control_status + VAR_0);
 FUNC_2(1);
 FUNC_1(FUNC_0(VAR_3) | VAR_1 | (VAR_4 & 0xff),
      VAR_2->control_status + VAR_0);
 FUNC_2(1);
 FUNC_1(FUNC_0(VAR_3) | (VAR_4 & 0xff),
      VAR_2->control_status + VAR_0);
 FUNC_2(1);

 return 1;
}
