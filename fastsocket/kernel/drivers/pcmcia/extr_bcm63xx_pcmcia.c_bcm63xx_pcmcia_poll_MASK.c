
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int csc_mask; } ;
struct bcm63xx_pcmcia_socket {unsigned int old_status; int timer; int socket; int lock; TYPE_1__ requested_state; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct bcm63xx_pcmcia_socket*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,unsigned int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(unsigned long VAR_2)
{
 struct bcm63xx_pcmcia_socket *VAR_3;
 unsigned int VAR_4, VAR_5;

 VAR_3 = (struct bcm63xx_pcmcia_socket *)VAR_2;

 FUNC_4(&VAR_3->lock);

 VAR_4 = FUNC_0(VAR_3);



 VAR_5 = (VAR_4 ^ VAR_3->old_status) & VAR_3->requested_state.csc_mask;
 VAR_3->old_status = VAR_4;
 FUNC_5(&VAR_3->lock);

 if (VAR_5)
  FUNC_3(&VAR_3->socket, VAR_5);

 FUNC_1(&VAR_3->timer,
    VAR_1 + FUNC_2(VAR_0));
}
