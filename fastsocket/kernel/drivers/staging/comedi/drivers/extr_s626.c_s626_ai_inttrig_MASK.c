
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {int * inttrig; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_3,
      struct comedi_subdevice *VAR_4, unsigned int VAR_5)
{
 if (VAR_5 != 0)
  return -VAR_0;

 FUNC_0("s626_ai_inttrig: trigger adc start...");


 FUNC_1(VAR_2, VAR_1);

 VAR_4->async->inttrig = ((void*)0);

 FUNC_0(" done\n");

 return 1;
}
