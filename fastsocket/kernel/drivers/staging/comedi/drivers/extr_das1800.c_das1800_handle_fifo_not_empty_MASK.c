
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {scalar_t__ iobase; } ;
struct comedi_cmd {scalar_t__ stop_src; } ;
struct TYPE_4__ {scalar_t__ count; } ;
struct TYPE_3__ {struct comedi_cmd cmd; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct comedi_subdevice*,short) ;
 TYPE_2__* VAR_6 ;
 int FUNC_1 (scalar_t__) ;
 short FUNC_2 (scalar_t__) ;
 short FUNC_3 (struct comedi_device*,short) ;

__attribute__((used)) static void FUNC_4(struct comedi_device *VAR_7,
       struct comedi_subdevice *VAR_8)
{
 short VAR_9;
 int VAR_10;
 struct comedi_cmd *VAR_11 = &VAR_8->async->cmd;

 VAR_10 = FUNC_1(VAR_7->iobase + VAR_0) & VAR_5;

 while (FUNC_1(VAR_7->iobase + VAR_2) & VAR_3) {
  if (VAR_11->stop_src == VAR_4 && VAR_6->count == 0)
   break;
  VAR_9 = FUNC_2(VAR_7->iobase + VAR_1);

  if (!VAR_10) ;
  VAR_9 = FUNC_3(VAR_7, VAR_9);
  FUNC_0(VAR_8, VAR_9);
  if (VAR_11->stop_src == VAR_4)
   VAR_6->count--;
 }

 return;
}
