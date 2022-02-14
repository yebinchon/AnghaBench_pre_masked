
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct au1000_pcmcia_socket {int nr; int cs_state; TYPE_1__* ops; } ;
typedef int socket_state_t ;
struct TYPE_2__ {int (* configure_socket ) (struct au1000_pcmcia_socket*,int *) ;} ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct au1000_pcmcia_socket*,int *) ;

__attribute__((used)) static int
FUNC_2(struct au1000_pcmcia_socket *VAR_0, socket_state_t *VAR_1)
{
 int VAR_2;

 VAR_2 = VAR_0->ops->configure_socket(VAR_0, VAR_1);
 if (VAR_2 == 0) {
  VAR_0->cs_state = *VAR_1;
 }

 if (VAR_2 < 0)
  FUNC_0("unable to configure socket %d\n", VAR_0->nr);

 return VAR_2;
}
