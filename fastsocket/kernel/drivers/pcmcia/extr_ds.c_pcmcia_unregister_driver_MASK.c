
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; } ;
struct pcmcia_driver {TYPE_1__ drv; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int,char*,int ) ;
 int FUNC_2 (struct pcmcia_driver*) ;

void FUNC_3(struct pcmcia_driver *VAR_0)
{
 FUNC_1(3, "unregistering driver %s\n", VAR_0->drv.name);
 FUNC_0(&VAR_0->drv);
 FUNC_2(VAR_0);
}
