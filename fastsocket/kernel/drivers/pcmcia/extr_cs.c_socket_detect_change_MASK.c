
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcmcia_socket {int state; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* get_status ) (struct pcmcia_socket*,int*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct pcmcia_socket*) ;
 int FUNC_2 (struct pcmcia_socket*) ;
 int FUNC_3 (struct pcmcia_socket*,int*) ;

__attribute__((used)) static void FUNC_4(struct pcmcia_socket *VAR_3)
{
 if (!(VAR_3->state & VAR_1)) {
  int VAR_4;

  if (!(VAR_3->state & VAR_0))
   FUNC_0(20);

  VAR_3->ops->get_status(VAR_3, &VAR_4);
  if ((VAR_3->state & VAR_0) &&
       !(VAR_4 & VAR_2))
   FUNC_2(VAR_3);
  if (!(VAR_3->state & VAR_0) &&
      (VAR_4 & VAR_2))
   FUNC_1(VAR_3);
 }
}
