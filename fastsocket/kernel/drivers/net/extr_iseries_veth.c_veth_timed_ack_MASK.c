
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ expires; } ;
struct veth_lpar_connection {scalar_t__ num_pending_acks; int lock; TYPE_1__ ack_timer; scalar_t__ ack_timeout; } ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct veth_lpar_connection*) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_1)
{
 struct veth_lpar_connection *VAR_2 = (struct veth_lpar_connection *) VAR_1;
 unsigned long VAR_3;


 FUNC_1(&VAR_2->lock, VAR_3);
 if (VAR_2->num_pending_acks > 0)
  FUNC_3(VAR_2);


 VAR_2->ack_timer.expires = VAR_0 + VAR_2->ack_timeout;
 FUNC_0(&VAR_2->ack_timer);
 FUNC_2(&VAR_2->lock, VAR_3);
}
