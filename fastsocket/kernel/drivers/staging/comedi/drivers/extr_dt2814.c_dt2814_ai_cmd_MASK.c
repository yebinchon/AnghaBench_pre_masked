
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {scalar_t__ iobase; } ;
struct comedi_cmd {int flags; int stop_arg; int * chanlist; int scan_begin_arg; } ;
struct TYPE_4__ {int ntrig; } ;
struct TYPE_3__ {struct comedi_cmd cmd; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_4, struct comedi_subdevice *VAR_5)
{
 struct comedi_cmd *VAR_6 = &VAR_5->async->cmd;
 int VAR_7;
 int VAR_8;

 VAR_8 =
     FUNC_1(&VAR_6->scan_begin_arg,
          VAR_6->flags & VAR_2);

 VAR_7 = FUNC_0(VAR_6->chanlist[0]);

 VAR_3->ntrig = VAR_6->stop_arg;
 FUNC_2(VAR_7 | VAR_1 | (VAR_8 << 5), VAR_4->iobase + VAR_0);

 return 0;

}
