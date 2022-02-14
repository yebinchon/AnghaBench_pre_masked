
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct comedi_cmd {int dummy; } ;
struct TYPE_2__ {int layout; } ;



 TYPE_1__* FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (struct comedi_device*,struct comedi_cmd const*) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_0,
    const struct comedi_cmd *VAR_1)
{
 switch (FUNC_0(VAR_0)->layout) {
 case 128:
  FUNC_1(VAR_0, VAR_1);
  break;
 default:
  break;
 }
}
