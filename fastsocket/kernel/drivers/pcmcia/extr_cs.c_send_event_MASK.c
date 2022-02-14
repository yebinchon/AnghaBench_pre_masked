
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcmcia_socket {int state; TYPE_1__* callback; } ;
typedef int event_t ;
struct TYPE_2__ {int (* event ) (struct pcmcia_socket*,int ,int) ;int owner; } ;


 int VAR_0 ;
 int FUNC_0 (struct pcmcia_socket*,int,char*,int ,int,TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct pcmcia_socket*,int ,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct pcmcia_socket *VAR_1, event_t VAR_2, int VAR_3)
{
 int VAR_4;

 if (VAR_1->state & VAR_0)
  return 0;

 FUNC_0(VAR_1, 1, "send_event(event %d, pri %d, callback 0x%p)\n",
    VAR_2, VAR_3, VAR_1->callback);

 if (!VAR_1->callback)
  return 0;
 if (!FUNC_3(VAR_1->callback->owner))
  return 0;

 VAR_4 = VAR_1->callback->event(VAR_1, VAR_2, VAR_3);

 FUNC_1(VAR_1->callback->owner);

 return VAR_4;
}
