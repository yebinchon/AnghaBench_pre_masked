
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_fifo {int base; int uevent; int channel; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct nouveau_fifo *VAR_0)
{
 FUNC_0(VAR_0->channel);
 FUNC_2(&VAR_0->uevent);
 FUNC_1(&VAR_0->base);
}
