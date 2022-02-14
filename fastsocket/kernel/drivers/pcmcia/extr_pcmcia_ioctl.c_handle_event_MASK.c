
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* next; } ;
typedef TYPE_1__ user_info_t ;
struct pcmcia_socket {int queue; TYPE_1__* user; } ;
typedef int event_t ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct pcmcia_socket *VAR_0, event_t VAR_1)
{
    user_info_t *VAR_2;
    for (VAR_2 = VAR_0->user; VAR_2; VAR_2 = VAR_2->next)
 FUNC_0(VAR_2, VAR_1);
    FUNC_1(&VAR_0->queue);
}
