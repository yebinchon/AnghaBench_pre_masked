
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int async; } ;
struct comedi_device {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct comedi_device*) ;
 int FUNC_3 (struct comedi_subdevice*) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_0,
         struct comedi_subdevice *VAR_1,
         unsigned long VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(FUNC_1(FUNC_2(VAR_0), FUNC_3(VAR_1)),
         VAR_1->async);
 if (VAR_3 < 0)
  return VAR_3;

 return 0;
}
