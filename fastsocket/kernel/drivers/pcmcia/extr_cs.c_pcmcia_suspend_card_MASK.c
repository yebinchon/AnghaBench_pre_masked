
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcmcia_socket {int state; int skt_mutex; TYPE_1__* callback; } ;
struct TYPE_2__ {int (* suspend ) (struct pcmcia_socket*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pcmcia_socket*,int,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct pcmcia_socket*) ;
 int FUNC_4 (struct pcmcia_socket*) ;

int FUNC_5(struct pcmcia_socket *VAR_4)
{
 int VAR_5;

 FUNC_0(VAR_4, 1, "suspending socket\n");

 FUNC_1(&VAR_4->skt_mutex);
 do {
  if (!(VAR_4->state & VAR_3)) {
   VAR_5 = -VAR_0;
   break;
  }
  if (VAR_4->state & VAR_2) {
   VAR_5 = -VAR_1;
   break;
  }
  if (VAR_4->callback) {
   VAR_5 = VAR_4->callback->suspend(VAR_4);
   if (VAR_5)
    break;
  }
  VAR_5 = FUNC_3(VAR_4);
 } while (0);
 FUNC_2(&VAR_4->skt_mutex);

 return VAR_5;
}
