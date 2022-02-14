
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pcmcia_device {TYPE_1__* priv; } ;
struct TYPE_3__ {int timer; } ;
typedef TYPE_1__ bluecard_info_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct pcmcia_device*) ;

__attribute__((used)) static void FUNC_3(struct pcmcia_device *VAR_0)
{
 bluecard_info_t *VAR_1 = VAR_0->priv;

 FUNC_0(VAR_1);

 FUNC_1(&(VAR_1->timer));

 FUNC_2(VAR_0);
}
