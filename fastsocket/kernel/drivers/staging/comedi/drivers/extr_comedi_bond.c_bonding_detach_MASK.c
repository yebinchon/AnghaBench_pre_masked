
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {int minor; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct comedi_device*) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_0)
{
 FUNC_0("comedi%d: remove\n", VAR_0->minor);
 FUNC_1(VAR_0);
 return 0;
}
