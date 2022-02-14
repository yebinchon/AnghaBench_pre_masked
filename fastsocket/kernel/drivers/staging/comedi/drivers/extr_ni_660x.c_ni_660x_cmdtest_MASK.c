
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_gpct {int dummy; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {int dummy; } ;
struct comedi_cmd {int dummy; } ;


 int FUNC_0 (struct ni_gpct*,struct comedi_cmd*) ;
 struct ni_gpct* FUNC_1 (struct comedi_subdevice*) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_0,
      struct comedi_subdevice *VAR_1, struct comedi_cmd *VAR_2)
{
 struct ni_gpct *VAR_3 = FUNC_1(VAR_1);

 return FUNC_0(VAR_3, VAR_2);
}
