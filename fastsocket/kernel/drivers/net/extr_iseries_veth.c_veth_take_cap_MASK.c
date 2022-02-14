
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int xRc; } ;
struct veth_lpevent {TYPE_1__ base_event; } ;
struct veth_lpar_connection {int state; int lock; int cap_event; int remote_lp; int dst_inst; } ;
struct HvLpEvent {int dummy; } ;


 int FUNC_0 (struct HvLpEvent*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,struct veth_lpevent*,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (struct veth_lpar_connection*) ;

__attribute__((used)) static void FUNC_7(struct veth_lpar_connection *VAR_3,
     struct veth_lpevent *VAR_4)
{
 unsigned long VAR_5;

 FUNC_3(&VAR_3->lock, VAR_5);


 VAR_3->dst_inst =
  FUNC_1(VAR_3->remote_lp,
        VAR_1);

 if (VAR_3->state & VAR_2) {
  FUNC_5("Received a second capabilities from LPAR %d.\n",
      VAR_3->remote_lp);
  VAR_4->base_event.xRc = VAR_0;
  FUNC_0((struct HvLpEvent *) VAR_4);
 } else {
  FUNC_2(&VAR_3->cap_event, VAR_4, sizeof(VAR_3->cap_event));
  VAR_3->state |= VAR_2;
  FUNC_6(VAR_3);
 }
 FUNC_4(&VAR_3->lock, VAR_5);
}
