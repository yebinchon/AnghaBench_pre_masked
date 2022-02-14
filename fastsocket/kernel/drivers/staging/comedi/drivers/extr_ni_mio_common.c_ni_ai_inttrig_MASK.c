
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {int dummy; } ;
struct TYPE_4__ {int ai_cmd2; int (* stc_writew ) (struct comedi_device*,int,int ) ;} ;
struct TYPE_3__ {int * inttrig; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_0 (struct comedi_device*,int,int ) ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_4, struct comedi_subdevice *VAR_5,
    unsigned int VAR_6)
{
 if (VAR_6 != 0)
  return -VAR_2;

 VAR_3->stc_writew(VAR_4, VAR_1 | VAR_3->ai_cmd2,
       VAR_0);
 VAR_5->async->inttrig = ((void*)0);

 return 1;
}
