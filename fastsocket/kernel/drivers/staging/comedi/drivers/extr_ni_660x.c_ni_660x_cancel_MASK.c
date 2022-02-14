
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_gpct {int dummy; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {int dummy; } ;


 int FUNC_0 (struct comedi_device*,struct ni_gpct*) ;
 int FUNC_1 (struct ni_gpct*) ;
 struct ni_gpct* FUNC_2 (struct comedi_subdevice*) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_0, struct comedi_subdevice *VAR_1)
{
 struct ni_gpct *VAR_2 = FUNC_2(VAR_1);
 int VAR_3;

 VAR_3 = FUNC_1(VAR_2);
 FUNC_0(VAR_0, VAR_2);
 return VAR_3;
}
