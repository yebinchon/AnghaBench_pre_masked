
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ ai_cmd_running; scalar_t__ base_addr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_4, struct comedi_subdevice *VAR_5)
{

 FUNC_0(VAR_2, VAR_0);


 FUNC_1(0, VAR_3->base_addr + VAR_1);

 VAR_3->ai_cmd_running = 0;

 return 0;
}
