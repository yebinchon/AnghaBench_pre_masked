
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcmcia_device {TYPE_1__* priv; } ;
struct TYPE_2__ {int stop; } ;
typedef TYPE_1__ local_info_t ;



__attribute__((used)) static int FUNC_0(struct pcmcia_device *VAR_0)
{
 local_info_t *VAR_1 = VAR_0->priv;

 VAR_1->stop = 1;

 return 0;
}
