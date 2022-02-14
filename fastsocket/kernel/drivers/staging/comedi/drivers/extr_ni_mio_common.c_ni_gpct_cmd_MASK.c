
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_gpct {int counter_index; } ;
struct comedi_subdevice {int async; struct ni_gpct* private; } ;
struct comedi_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct comedi_device*,char*) ;
 int FUNC_1 (struct comedi_device*,int ,int) ;
 int FUNC_2 (struct comedi_device*,int ,int ) ;
 int FUNC_3 (struct ni_gpct*,int *,int *,int *,int *) ;
 int FUNC_4 (struct ni_gpct*,int ) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_2, struct comedi_subdevice *VAR_3)
{
 int VAR_4;
 VAR_4 = -VAR_1;

 return VAR_4;
}
