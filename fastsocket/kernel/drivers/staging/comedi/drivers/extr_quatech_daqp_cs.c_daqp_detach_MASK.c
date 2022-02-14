
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {int minor; } ;


 int FUNC_0 (char*,int ) ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_0)
{
 FUNC_0("comedi%d: detaching daqp\n", VAR_0->minor);

 return 0;
}
