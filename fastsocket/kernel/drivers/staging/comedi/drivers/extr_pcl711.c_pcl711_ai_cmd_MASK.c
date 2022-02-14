
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {scalar_t__ iobase; } ;
struct comedi_cmd {scalar_t__ scan_begin_src; int scan_begin_arg; int * chanlist; } ;
struct TYPE_4__ {int mode; } ;
struct TYPE_3__ {struct comedi_cmd cmd; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_2__* VAR_7 ;
 int FUNC_0 (int ,int*,int*,int *,int ) ;
 int VAR_8 ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (struct comedi_device*,int ) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_9, struct comedi_subdevice *VAR_10)
{
 int VAR_11, VAR_12;
 struct comedi_cmd *VAR_13 = &VAR_10->async->cmd;

 FUNC_2(VAR_9, VAR_13->chanlist[0]);

 if (VAR_13->scan_begin_src == VAR_6) {
  FUNC_0(VAR_8, &VAR_11, &VAR_12,
       &VAR_13->scan_begin_arg,
       VAR_5);

  FUNC_1(0x74, VAR_9->iobase + VAR_3);
  FUNC_1(VAR_11 & 0xff, VAR_9->iobase + VAR_1);
  FUNC_1((VAR_11 >> 8) & 0xff, VAR_9->iobase + VAR_1);
  FUNC_1(0xb4, VAR_9->iobase + VAR_3);
  FUNC_1(VAR_12 & 0xff, VAR_9->iobase + VAR_2);
  FUNC_1((VAR_12 >> 8) & 0xff, VAR_9->iobase + VAR_2);


  FUNC_1(0, VAR_9->iobase + VAR_0);




  FUNC_1(VAR_7->mode | 6, VAR_9->iobase + VAR_4);
 } else {

  FUNC_1(VAR_7->mode | 3, VAR_9->iobase + VAR_4);
 }

 return 0;
}
