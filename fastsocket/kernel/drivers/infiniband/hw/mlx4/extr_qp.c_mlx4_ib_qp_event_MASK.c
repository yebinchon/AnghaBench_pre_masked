
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx4_qp {int qpn; } ;
struct ib_qp {int qp_context; int (* event_handler ) (struct ib_event*,int ) ;int device; } ;
struct TYPE_3__ {struct ib_qp* qp; } ;
struct ib_event {int event; TYPE_1__ element; int device; } ;
typedef enum mlx4_event { ____Placeholder_mlx4_event } mlx4_event ;
struct TYPE_4__ {int alt_port; int port; struct ib_qp ibqp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*,int,int ) ;
 int FUNC_1 (struct ib_event*,int ) ;
 TYPE_2__* FUNC_2 (struct mlx4_qp*) ;

__attribute__((used)) static void FUNC_3(struct mlx4_qp *VAR_8, enum mlx4_event VAR_9)
{
 struct ib_event VAR_10;
 struct ib_qp *VAR_11 = &FUNC_2(VAR_8)->ibqp;

 if (VAR_9 == 134)
  FUNC_2(VAR_8)->port = FUNC_2(VAR_8)->alt_port;

 if (VAR_11->event_handler) {
  VAR_10.device = VAR_11->device;
  VAR_10.element.qp = VAR_11;
  switch (VAR_9) {
  case 134:
   VAR_10.event = VAR_1;
   break;
  case 135:
   VAR_10.event = VAR_0;
   break;
  case 132:
   VAR_10.event = VAR_7;
   break;
  case 131:
   VAR_10.event = VAR_5;
   break;
  case 129:
   VAR_10.event = VAR_4;
   break;
  case 133:
   VAR_10.event = VAR_2;
   break;
  case 128:
   VAR_10.event = VAR_6;
   break;
  case 130:
   VAR_10.event = VAR_3;
   break;
  default:
   FUNC_0("Unexpected event type %d "
          "on QP %06x\n", VAR_9, VAR_8->qpn);
   return;
  }

  VAR_11->event_handler(&VAR_10, VAR_11->qp_context);
 }
}
