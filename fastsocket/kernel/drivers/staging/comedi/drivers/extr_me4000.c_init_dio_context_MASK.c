
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_3__ {scalar_t__ port_3_reg; scalar_t__ port_2_reg; scalar_t__ port_1_reg; scalar_t__ port_0_reg; scalar_t__ ctrl_reg; scalar_t__ dir_reg; } ;
struct TYPE_4__ {scalar_t__ me4000_regbase; TYPE_1__ dio_context; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_2__* VAR_6 ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_7)
{

 FUNC_0("In init_dio_context()\n");

 VAR_6->dio_context.dir_reg = VAR_6->me4000_regbase + VAR_1;
 VAR_6->dio_context.ctrl_reg = VAR_6->me4000_regbase + VAR_0;
 VAR_6->dio_context.port_0_reg =
     VAR_6->me4000_regbase + VAR_2;
 VAR_6->dio_context.port_1_reg =
     VAR_6->me4000_regbase + VAR_3;
 VAR_6->dio_context.port_2_reg =
     VAR_6->me4000_regbase + VAR_4;
 VAR_6->dio_context.port_3_reg =
     VAR_6->me4000_regbase + VAR_5;

 return 0;
}
