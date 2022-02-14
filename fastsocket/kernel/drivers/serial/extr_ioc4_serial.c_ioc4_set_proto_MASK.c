
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ioc4_port {TYPE_2__* ip_mem; struct hooks* ip_hooks; } ;
struct hooks {size_t rs422_select_pin; } ;
struct TYPE_4__ {TYPE_1__* gppr; } ;
struct TYPE_3__ {int raw; } ;




 int FUNC_0 (int,int *) ;

__attribute__((used)) static int FUNC_1(struct ioc4_port *VAR_0, int VAR_1)
{
 struct hooks *VAR_2 = VAR_0->ip_hooks;

 switch (VAR_1) {
 case 129:

  FUNC_0(0, (&VAR_0->ip_mem->gppr[VAR_2->rs422_select_pin].raw));
  break;

 case 128:

  FUNC_0(1, (&VAR_0->ip_mem->gppr[VAR_2->rs422_select_pin].raw));
  break;

 default:
  return 1;
 }
 return 0;
}
