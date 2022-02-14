
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct soc_pcmcia_socket {int dummy; } ;
struct TYPE_3__ {int flags; } ;
typedef TYPE_1__ socket_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static int FUNC_1(struct soc_pcmcia_socket *VAR_3,
     const socket_state_t *VAR_4)
{
 FUNC_0(VAR_0, 1);
 FUNC_0(VAR_1,
   !!(VAR_4->flags & VAR_2));

 return 0;
}
