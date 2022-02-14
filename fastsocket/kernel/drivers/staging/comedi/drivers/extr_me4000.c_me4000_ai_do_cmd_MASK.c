
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct comedi_subdevice {TYPE_2__* async; } ;
struct comedi_device {int dummy; } ;
struct comedi_cmd {int dummy; } ;
struct TYPE_4__ {int start_reg; } ;
struct TYPE_6__ {TYPE_1__ ai_context; } ;
struct TYPE_5__ {struct comedi_cmd cmd; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*,struct comedi_cmd*,unsigned int,unsigned int,unsigned int) ;
 int FUNC_2 (struct comedi_device*,struct comedi_subdevice*,struct comedi_cmd*,unsigned int*,unsigned int*,unsigned int*) ;
 TYPE_3__* VAR_0 ;
 int FUNC_3 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_4 (struct comedi_device*,int ) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_1,
       struct comedi_subdevice *VAR_2)
{
 int VAR_3;
 unsigned int VAR_4 = 0;
 unsigned int VAR_5 = 0;
 unsigned int VAR_6 = 0;
 struct comedi_cmd *VAR_7 = &VAR_2->async->cmd;

 FUNC_0("In me4000_ai_do_cmd()\n");


 VAR_3 = FUNC_3(VAR_1, VAR_2);
 if (VAR_3)
  return VAR_3;


 VAR_3 = FUNC_2(VAR_1,
    VAR_2, VAR_7, &VAR_4, &VAR_5, &VAR_6);
 if (VAR_3)
  return VAR_3;


 VAR_3 = FUNC_1(VAR_1, VAR_2, VAR_7, VAR_4, VAR_5, VAR_6);
 if (VAR_3)
  return VAR_3;


 FUNC_4(VAR_1, VAR_0->ai_context.start_reg);

 return 0;
}
