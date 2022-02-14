
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_socket {int state; int skt_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct pcmcia_socket*,int,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct pcmcia_socket*,int ,int ) ;
 int FUNC_4 (struct pcmcia_socket*) ;

int FUNC_5(struct pcmcia_socket *VAR_5)
{
 int VAR_6;

 FUNC_0(VAR_5, 1, "user eject request\n");

 FUNC_1(&VAR_5->skt_mutex);
 do {
  if (!(VAR_5->state & VAR_4)) {
   VAR_6 = -VAR_3;
   break;
  }

  VAR_6 = FUNC_3(VAR_5, VAR_0, VAR_1);
  if (VAR_6 != 0) {
   VAR_6 = -VAR_2;
   break;
  }

  FUNC_4(VAR_5);
  VAR_6 = 0;
 } while (0);
 FUNC_2(&VAR_5->skt_mutex);

 return VAR_6;
}
