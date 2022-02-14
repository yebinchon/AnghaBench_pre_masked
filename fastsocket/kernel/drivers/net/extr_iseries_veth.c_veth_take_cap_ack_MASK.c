
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct veth_lpevent {int dummy; } ;
struct veth_lpar_connection {int state; int lock; int cap_ack_event; int remote_lp; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct veth_lpevent*,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (struct veth_lpar_connection*) ;

__attribute__((used)) static void FUNC_5(struct veth_lpar_connection *VAR_1,
         struct veth_lpevent *VAR_2)
{
 unsigned long VAR_3;

 FUNC_1(&VAR_1->lock, VAR_3);
 if (VAR_1->state & VAR_0) {
  FUNC_3("Received a second capabilities ack from LPAR %d.\n",
      VAR_1->remote_lp);
 } else {
  FUNC_0(&VAR_1->cap_ack_event, VAR_2,
         sizeof(VAR_1->cap_ack_event));
  VAR_1->state |= VAR_0;
  FUNC_4(VAR_1);
 }
 FUNC_2(&VAR_1->lock, VAR_3);
}
