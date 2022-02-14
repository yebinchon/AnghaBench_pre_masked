
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_device {int dummy; } ;
struct TYPE_3__ {int ctrl_reg; } ;
struct TYPE_4__ {TYPE_1__ ai_context; } ;


 int FUNC_0 (char*) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 TYPE_2__* VAR_2 ;
 unsigned long FUNC_1 (struct comedi_device*,int ) ;
 int FUNC_2 (struct comedi_device*,int,int ) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_3,
       struct comedi_subdevice *VAR_4)
{
 unsigned long VAR_5;

 FUNC_0("In me4000_ai_cancel()\n");


 VAR_5 = FUNC_1(VAR_3, VAR_2->ai_context.ctrl_reg);
 VAR_5 &= ~(VAR_1 | VAR_0);
 FUNC_2(VAR_3, VAR_5, VAR_2->ai_context.ctrl_reg);


 FUNC_2(VAR_3, 0x0, VAR_2->ai_context.ctrl_reg);

 return 0;
}
