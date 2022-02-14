
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_13__ {int syndrome; int cqn; } ;
struct TYPE_12__ {int port; } ;
struct TYPE_11__ {int out_param; int status; int token; } ;
struct TYPE_10__ {int qpn; } ;
struct TYPE_9__ {int srqn; } ;
struct TYPE_8__ {int cqn; } ;
struct TYPE_14__ {TYPE_6__ cq_err; TYPE_5__ port_change; TYPE_4__ cmd; TYPE_3__ qp; TYPE_2__ srq; TYPE_1__ comp; } ;
struct mthca_eqe {int type; int subtype; TYPE_7__ event; } ;
struct mthca_eq {int cons_index; int eqn; } ;
struct mthca_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mthca_dev*,int ,int) ;
 int FUNC_4 (struct mthca_dev*,int ,int ,int ) ;
 int FUNC_5 (struct mthca_dev*,int) ;
 int FUNC_6 (struct mthca_dev*,int,int ) ;
 int FUNC_7 (struct mthca_dev*,int,int ) ;
 int FUNC_8 (struct mthca_dev*,int,int ) ;
 int FUNC_9 (struct mthca_dev*,char*,...) ;
 struct mthca_eqe* FUNC_10 (struct mthca_eq*) ;
 int FUNC_11 (struct mthca_dev*,int,int) ;
 int FUNC_12 () ;
 int FUNC_13 (struct mthca_dev*,struct mthca_eq*,int ) ;
 int FUNC_14 (struct mthca_eqe*) ;
 scalar_t__ FUNC_15 (int) ;

__attribute__((used)) static int FUNC_16(struct mthca_dev *VAR_11, struct mthca_eq *VAR_12)
{
 struct mthca_eqe *VAR_13;
 int VAR_14;
 int VAR_15 = 0;
 int VAR_16 = 0;

 while ((VAR_13 = FUNC_10(VAR_12))) {




  FUNC_12();

  switch (VAR_13->type) {
  case 143:
   VAR_14 = FUNC_1(VAR_13->event.comp.cqn) & 0xffffff;
   FUNC_3(VAR_11, VAR_12->eqn, VAR_14);
   FUNC_5(VAR_11, VAR_14);
   break;

  case 137:
   FUNC_7(VAR_11, FUNC_1(VAR_13->event.qp.qpn) & 0xffffff,
           VAR_2);
   break;

  case 144:
   FUNC_7(VAR_11, FUNC_1(VAR_13->event.qp.qpn) & 0xffffff,
           VAR_0);
   break;

  case 134:
   FUNC_7(VAR_11, FUNC_1(VAR_13->event.qp.qpn) & 0xffffff,
           VAR_8);
   break;

  case 131:
   FUNC_7(VAR_11, FUNC_1(VAR_13->event.qp.qpn) & 0xffffff,
           VAR_6);
   break;

  case 132:
   FUNC_8(VAR_11, FUNC_1(VAR_13->event.srq.srqn) & 0xffffff,
     VAR_9);
   break;

  case 129:
   FUNC_7(VAR_11, FUNC_1(VAR_13->event.qp.qpn) & 0xffffff,
           VAR_5);
   break;

  case 136:
   FUNC_7(VAR_11, FUNC_1(VAR_13->event.qp.qpn) & 0xffffff,
           VAR_3);
   break;

  case 128:
   FUNC_7(VAR_11, FUNC_1(VAR_13->event.qp.qpn) & 0xffffff,
           VAR_7);
   break;

  case 130:
   FUNC_7(VAR_11, FUNC_1(VAR_13->event.qp.qpn) & 0xffffff,
           VAR_4);
   break;

  case 145:
   FUNC_4(VAR_11,
     FUNC_0(VAR_13->event.cmd.token),
     VAR_13->event.cmd.status,
     FUNC_2(VAR_13->event.cmd.out_param));
   break;

  case 135:
   FUNC_11(VAR_11,
        (FUNC_1(VAR_13->event.port_change.port) >> 28) & 3,
        VAR_13->subtype == 0x4);
   break;

  case 142:
   FUNC_9(VAR_11, "CQ %s on CQN %06x\n",
       VAR_13->event.cq_err.syndrome == 1 ?
       "overrun" : "access violation",
       FUNC_1(VAR_13->event.cq_err.cqn) & 0xffffff);
   FUNC_6(VAR_11, FUNC_1(VAR_13->event.cq_err.cqn),
           VAR_1);
   break;

  case 139:
   FUNC_9(VAR_11, "EQ overrun on EQN %d\n", VAR_12->eqn);
   break;

  case 140:
  case 133:
  case 138:
  case 141:
  default:
   FUNC_9(VAR_11, "Unhandled event %02x(%02x) on EQ %d\n",
       VAR_13->type, VAR_13->subtype, VAR_12->eqn);
   break;
  };

  FUNC_14(VAR_13);
  ++VAR_12->cons_index;
  VAR_15 = 1;
  ++VAR_16;
  if (FUNC_15(VAR_16 >= VAR_10)) {




   FUNC_13(VAR_11, VAR_12, VAR_12->cons_index);
   VAR_16 = 0;
  }
 }





 return VAR_15;
}
