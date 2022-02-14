
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {int dummy; } ;
struct comedi_cmd {scalar_t__ start_src; } ;
struct TYPE_4__ {scalar_t__ main_iobase; } ;
struct TYPE_3__ {int * inttrig; struct comedi_cmd cmd; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct comedi_device*,struct comedi_cmd*) ;
 TYPE_2__* FUNC_1 (struct comedi_device*) ;
 int FUNC_2 (struct comedi_device*,struct comedi_cmd*) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_4, struct comedi_subdevice *VAR_5,
        unsigned int VAR_6)
{
 struct comedi_cmd *VAR_7 = &VAR_5->async->cmd;
 int VAR_8;

 if (VAR_6 != 0)
  return -VAR_1;

 VAR_8 = FUNC_0(VAR_4, VAR_7);
 if (VAR_8 < 0)
  return -VAR_2;

 FUNC_2(VAR_4, VAR_7);

 if (VAR_7->start_src == VAR_3)
  FUNC_3(0, FUNC_1(VAR_4)->main_iobase + VAR_0);

 VAR_5->async->inttrig = ((void*)0);

 return 0;
}
