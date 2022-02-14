
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_socket {int state; int skt_mutex; struct pcmcia_callback* callback; } ;
struct pcmcia_callback {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct pcmcia_socket*,int ,int ) ;

int FUNC_3(struct pcmcia_socket *VAR_5, struct pcmcia_callback *VAR_6)
{
        int VAR_7 = 0;


 FUNC_0(&VAR_5->skt_mutex);

 if (VAR_6) {

  if (VAR_5->callback) {
   VAR_7 = -VAR_2;
   goto err;
  }

  VAR_5->callback = VAR_6;

  if ((VAR_5->state & (VAR_4|VAR_3)) == VAR_4)
   FUNC_2(VAR_5, VAR_0, VAR_1);
 } else
  VAR_5->callback = ((void*)0);
 err:
 FUNC_1(&VAR_5->skt_mutex);

 return VAR_7;
}
