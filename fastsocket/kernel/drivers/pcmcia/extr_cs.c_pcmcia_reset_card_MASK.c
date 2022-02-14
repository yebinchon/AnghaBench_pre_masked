
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcmcia_socket {int state; int skt_mutex; TYPE_1__* callback; } ;
struct TYPE_2__ {int (* resume ) (struct pcmcia_socket*) ;int (* suspend ) (struct pcmcia_socket*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct pcmcia_socket*,int,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct pcmcia_socket*,int ,int ) ;
 scalar_t__ FUNC_4 (struct pcmcia_socket*) ;
 int FUNC_5 (struct pcmcia_socket*) ;
 int FUNC_6 (struct pcmcia_socket*) ;

int FUNC_7(struct pcmcia_socket *VAR_10)
{
 int VAR_11;

 FUNC_0(VAR_10, 1, "resetting socket\n");

 FUNC_1(&VAR_10->skt_mutex);
 do {
  if (!(VAR_10->state & VAR_8)) {
   VAR_11 = -VAR_5;
   break;
  }
  if (VAR_10->state & VAR_9) {
   VAR_11 = -VAR_4;
   break;
  }
  if (VAR_10->state & VAR_7) {
   VAR_11 = -VAR_6;
   break;
  }

  VAR_11 = FUNC_3(VAR_10, VAR_3, VAR_1);
  if (VAR_11 == 0) {
   FUNC_3(VAR_10, VAR_2, VAR_1);
   if (VAR_10->callback)
    VAR_10->callback->suspend(VAR_10);
   if (FUNC_4(VAR_10) == 0) {
    FUNC_3(VAR_10, VAR_0, VAR_1);
    if (VAR_10->callback)
     VAR_10->callback->resume(VAR_10);
   }
  }

  VAR_11 = 0;
 } while (0);
 FUNC_2(&VAR_10->skt_mutex);

 return VAR_11;
}
