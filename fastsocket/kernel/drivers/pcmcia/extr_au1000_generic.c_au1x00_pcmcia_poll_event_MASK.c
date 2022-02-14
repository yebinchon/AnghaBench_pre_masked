
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct au1000_pcmcia_socket {int poll_timer; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct au1000_pcmcia_socket*) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_2)
{
 struct au1000_pcmcia_socket *VAR_3 = (struct au1000_pcmcia_socket *)VAR_2;
 FUNC_1("polling for events\n");

 FUNC_2(&VAR_3->poll_timer, VAR_1 + VAR_0);

 FUNC_0(VAR_3);
}
