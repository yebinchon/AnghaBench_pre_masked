
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_socket {int dummy; } ;
struct au1000_pcmcia_socket {unsigned int status; } ;


 unsigned int FUNC_0 (struct au1000_pcmcia_socket*) ;
 struct au1000_pcmcia_socket* FUNC_1 (struct pcmcia_socket*) ;

__attribute__((used)) static int
FUNC_2(struct pcmcia_socket *VAR_0, unsigned int *VAR_1)
{
 struct au1000_pcmcia_socket *VAR_2 = FUNC_1(VAR_0);

 VAR_2->status = FUNC_0(VAR_2);
 *VAR_1 = VAR_2->status;

 return 0;
}
