
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_socket {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pcmcia_socket*) ;
 int FUNC_1 (struct pcmcia_socket*) ;

__attribute__((used)) static int FUNC_2(struct pcmcia_socket *VAR_2)
{
 if (!(VAR_2->state & VAR_1))
  return -VAR_0;

 FUNC_0(VAR_2);
 return FUNC_1(VAR_2);
}
