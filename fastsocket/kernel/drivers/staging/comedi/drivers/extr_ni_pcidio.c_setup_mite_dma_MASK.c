
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_device {int dummy; } ;
struct TYPE_5__ {TYPE_1__* di_mite_chan; } ;
struct TYPE_4__ {int dir; } ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int,int) ;
 int FUNC_2 (struct comedi_device*) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_2, struct comedi_subdevice *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_2(VAR_2);
 if (VAR_4)
  return VAR_4;

 VAR_1->di_mite_chan->dir = VAR_0;

 FUNC_1(VAR_1->di_mite_chan, 32, 32);

 FUNC_0(VAR_1->di_mite_chan);
 return 0;
}
