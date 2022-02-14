
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct veth_msg {int token; } ;
struct TYPE_3__ {int num_buffers; int ack_timeout; int ack_threshold; } ;
struct TYPE_4__ {unsigned long data; int function; } ;
struct veth_lpar_connection {size_t remote_lp; int reset_timeout; int num_events; TYPE_1__ local_caps; struct veth_msg* msgs; int kobject; int pending_acks; TYPE_2__ reset_timer; TYPE_2__ ack_timer; int statemachine_wq; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (size_t,size_t) ;
 int FUNC_1 (int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_2__*) ;
 struct veth_msg* FUNC_3 (int,int,int ) ;
 int FUNC_4 (int *,int *) ;
 struct veth_lpar_connection* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,int,int) ;
 int FUNC_7 (int *) ;
 size_t VAR_6 ;
 int FUNC_8 (size_t,int) ;
 struct veth_lpar_connection** VAR_7 ;
 int FUNC_9 (char*,size_t) ;
 int VAR_8 ;
 int FUNC_10 (struct veth_lpar_connection*,struct veth_msg*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_11(u8 VAR_12)
{
 struct veth_lpar_connection *VAR_13;
 struct veth_msg *VAR_14;
 int VAR_15;

 if ( (VAR_12 == VAR_6)
      || ! FUNC_0(VAR_6, VAR_12) )
  return 0;

 VAR_13 = FUNC_5(sizeof(*VAR_13), VAR_2);
 if (! VAR_13)
  return -VAR_1;

 VAR_13->remote_lp = VAR_12;
 FUNC_7(&VAR_13->lock);
 FUNC_1(&VAR_13->statemachine_wq, VAR_9);

 FUNC_2(&VAR_13->ack_timer);
 VAR_13->ack_timer.function = VAR_10;
 VAR_13->ack_timer.data = (unsigned long) VAR_13;

 FUNC_2(&VAR_13->reset_timer);
 VAR_13->reset_timer.function = VAR_11;
 VAR_13->reset_timer.data = (unsigned long) VAR_13;
 VAR_13->reset_timeout = 5 * VAR_3 * (VAR_4 / 1000000);

 FUNC_6(&VAR_13->pending_acks, 0xff, sizeof (VAR_13->pending_acks));

 VAR_7[VAR_12] = VAR_13;



 FUNC_4(&VAR_13->kobject, &VAR_8);

 VAR_14 = FUNC_3(VAR_5, sizeof(struct veth_msg), VAR_2);
 if (! VAR_14) {
  FUNC_9("Can't allocate buffers for LPAR %d.\n", VAR_12);
  return -VAR_1;
 }

 VAR_13->msgs = VAR_14;

 for (VAR_15 = 0; VAR_15 < VAR_5; VAR_15++) {
  VAR_14[VAR_15].token = VAR_15;
  FUNC_10(VAR_13, VAR_14 + VAR_15);
 }

 VAR_13->num_events = FUNC_8(VAR_12, 2 + VAR_5);

 if (VAR_13->num_events < (2 + VAR_5)) {
  FUNC_9("Can't allocate enough events for LPAR %d.\n", VAR_12);
  return -VAR_1;
 }

 VAR_13->local_caps.num_buffers = VAR_5;
 VAR_13->local_caps.ack_threshold = VAR_0;
 VAR_13->local_caps.ack_timeout = VAR_4;

 return 0;
}
