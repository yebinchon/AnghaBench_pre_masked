
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_socket {int state; int skt_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pcmcia_socket*,int,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct pcmcia_socket*) ;

int FUNC_4(struct pcmcia_socket *VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_3, 1, "user insert request\n");

 FUNC_1(&VAR_3->skt_mutex);
 do {
  if (VAR_3->state & VAR_2) {
   VAR_4 = -VAR_0;
   break;
  }
  if (FUNC_3(VAR_3) == -VAR_1) {
   VAR_4 = -VAR_1;
   break;
  }
  VAR_4 = 0;
 } while (0);
 FUNC_2(&VAR_3->skt_mutex);

 return VAR_4;
}
