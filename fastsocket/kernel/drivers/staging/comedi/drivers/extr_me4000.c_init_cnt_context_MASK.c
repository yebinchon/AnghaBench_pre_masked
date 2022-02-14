
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_3__ {scalar_t__ counter_2_reg; scalar_t__ counter_1_reg; scalar_t__ counter_0_reg; scalar_t__ ctrl_reg; } ;
struct TYPE_4__ {scalar_t__ timer_regbase; TYPE_1__ cnt_context; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_2__* VAR_4 ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_5)
{

 FUNC_0("In init_cnt_context()\n");

 VAR_4->cnt_context.ctrl_reg = VAR_4->timer_regbase + VAR_3;
 VAR_4->cnt_context.counter_0_reg =
     VAR_4->timer_regbase + VAR_0;
 VAR_4->cnt_context.counter_1_reg =
     VAR_4->timer_regbase + VAR_1;
 VAR_4->cnt_context.counter_2_reg =
     VAR_4->timer_regbase + VAR_2;

 return 0;
}
