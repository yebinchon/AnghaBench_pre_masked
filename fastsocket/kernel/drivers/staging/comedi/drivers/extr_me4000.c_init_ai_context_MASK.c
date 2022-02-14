
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_3__ {scalar_t__ sample_counter_reg; scalar_t__ irq_status_reg; scalar_t__ start_reg; scalar_t__ scan_pre_timer_high_reg; scalar_t__ scan_pre_timer_low_reg; scalar_t__ scan_timer_high_reg; scalar_t__ scan_timer_low_reg; scalar_t__ chan_pre_timer_reg; scalar_t__ chan_timer_reg; scalar_t__ data_reg; scalar_t__ channel_list_reg; scalar_t__ status_reg; scalar_t__ ctrl_reg; int irq; } ;
struct TYPE_4__ {scalar_t__ me4000_regbase; TYPE_1__ ai_context; int irq; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 TYPE_2__* VAR_13 ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_14)
{

 FUNC_0("In init_ai_context()\n");

 VAR_13->ai_context.irq = VAR_13->irq;

 VAR_13->ai_context.ctrl_reg = VAR_13->me4000_regbase + VAR_3;
 VAR_13->ai_context.status_reg =
     VAR_13->me4000_regbase + VAR_11;
 VAR_13->ai_context.channel_list_reg =
     VAR_13->me4000_regbase + VAR_0;
 VAR_13->ai_context.data_reg = VAR_13->me4000_regbase + VAR_4;
 VAR_13->ai_context.chan_timer_reg =
     VAR_13->me4000_regbase + VAR_2;
 VAR_13->ai_context.chan_pre_timer_reg =
     VAR_13->me4000_regbase + VAR_1;
 VAR_13->ai_context.scan_timer_low_reg =
     VAR_13->me4000_regbase + VAR_9;
 VAR_13->ai_context.scan_timer_high_reg =
     VAR_13->me4000_regbase + VAR_8;
 VAR_13->ai_context.scan_pre_timer_low_reg =
     VAR_13->me4000_regbase + VAR_7;
 VAR_13->ai_context.scan_pre_timer_high_reg =
     VAR_13->me4000_regbase + VAR_6;
 VAR_13->ai_context.start_reg = VAR_13->me4000_regbase + VAR_10;
 VAR_13->ai_context.irq_status_reg =
     VAR_13->me4000_regbase + VAR_12;
 VAR_13->ai_context.sample_counter_reg =
     VAR_13->me4000_regbase + VAR_5;

 return 0;
}
