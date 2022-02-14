
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_3__ {int chan_timer_reg; int chan_pre_timer_reg; int scan_timer_high_reg; int scan_timer_low_reg; int scan_pre_timer_high_reg; int scan_pre_timer_low_reg; } ;
struct TYPE_4__ {TYPE_1__ ai_context; } ;


 int FUNC_0 (char*) ;
 TYPE_2__* VAR_0 ;
 int FUNC_1 (struct comedi_device*,unsigned int,int ) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_1,
      unsigned int VAR_2,
      unsigned int VAR_3, unsigned int VAR_4)
{

 FUNC_0("In ai_write_timer()\n");

 FUNC_1(VAR_1, VAR_2 - 1,
      VAR_0->ai_context.scan_pre_timer_low_reg);
 FUNC_1(VAR_1, 0x0, VAR_0->ai_context.scan_pre_timer_high_reg);

 if (VAR_3) {
  FUNC_1(VAR_1, VAR_3 - 1,
       VAR_0->ai_context.scan_timer_low_reg);
  FUNC_1(VAR_1, 0x0, VAR_0->ai_context.scan_timer_high_reg);
 }

 FUNC_1(VAR_1, VAR_4 - 1, VAR_0->ai_context.chan_pre_timer_reg);
 FUNC_1(VAR_1, VAR_4 - 1, VAR_0->ai_context.chan_timer_reg);
}
