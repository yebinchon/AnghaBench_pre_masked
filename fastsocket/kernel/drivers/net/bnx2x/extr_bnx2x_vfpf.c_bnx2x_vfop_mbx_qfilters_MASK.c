
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vfpf_set_q_filters_tlv {int flags; int rx_mask; int vf_qid; int n_multicast; int multicast; } ;
struct bnx2x_virtf {int abs_vfid; int index; } ;
struct bnx2x_vfop_filters {int dummy; } ;
struct bnx2x_vfop_cmd {void (* done ) (struct bnx2x*,struct bnx2x_virtf*) ;int block; } ;
struct bnx2x_vfop {int state; scalar_t__ rc; } ;
struct bnx2x {int dummy; } ;
typedef enum bnx2x_vfop_filters_state { ____Placeholder_bnx2x_vfop_filters_state } bnx2x_vfop_filters_state ;
struct TYPE_6__ {TYPE_2__* msg; } ;
struct TYPE_4__ {struct vfpf_set_q_filters_tlv set_q_filters; } ;
struct TYPE_5__ {TYPE_1__ req; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int ,int ,int) ;
 int VAR_6 ;





 TYPE_3__* FUNC_1 (struct bnx2x*,int ) ;
 int FUNC_2 (int ,char*,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_3 (int ,unsigned long*) ;
 void* FUNC_4 (struct bnx2x*,struct bnx2x_virtf*,struct vfpf_set_q_filters_tlv*,struct bnx2x_vfop_filters**,int ) ;
 struct bnx2x_vfop* FUNC_5 (struct bnx2x*,struct bnx2x_virtf*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct bnx2x*,struct bnx2x_virtf*,struct bnx2x_vfop*) ;
 int FUNC_8 (struct bnx2x*,struct bnx2x_virtf*,struct bnx2x_vfop_cmd*,struct bnx2x_vfop_filters*,int ,int) ;
 int FUNC_9 (struct bnx2x*,struct bnx2x_virtf*,struct bnx2x_vfop_cmd*,int ,int ,int) ;
 int FUNC_10 (struct bnx2x*,struct bnx2x_virtf*,struct bnx2x_vfop_cmd*,int ,unsigned long) ;
 int FUNC_11 (struct bnx2x*,struct bnx2x_virtf*,struct bnx2x_vfop_cmd*,struct bnx2x_vfop_filters*,int ,int) ;

__attribute__((used)) static void FUNC_12(struct bnx2x *VAR_17, struct bnx2x_virtf *VAR_18)
{
 int VAR_19;

 struct vfpf_set_q_filters_tlv *VAR_20 =
  &FUNC_1(VAR_17, VAR_18->index)->msg->req.set_q_filters;

 struct bnx2x_vfop *VAR_21 = FUNC_5(VAR_17, VAR_18);
 enum bnx2x_vfop_filters_state VAR_22 = VAR_21->state;

 struct bnx2x_vfop_cmd VAR_23 = {
  .done = FUNC_12,
  .block = 0,
 };

 FUNC_2(VAR_6, "STATE: %d\n", VAR_22);

 if (VAR_21->rc < 0)
  goto op_err;

 switch (VAR_22) {
 case 131:

  VAR_21->state = 128;


  if (VAR_20->flags & VAR_13) {

   struct bnx2x_vfop_filters *VAR_24 = ((void*)0);

   VAR_21->rc = FUNC_4(VAR_17, VAR_18, VAR_20, &VAR_24,
            VAR_7);
   if (VAR_21->rc)
    goto op_err;

   if (VAR_24) {

    VAR_19 = FUNC_8(VAR_17, VAR_18, &VAR_23, VAR_24,
            VAR_20->vf_qid,
            0);
    if (VAR_19) {
     VAR_21->rc = VAR_19;
     goto op_err;
    }
    return;
   }
  }


 case 128:

  VAR_21->state = 129;


  if (VAR_20->flags & VAR_13) {

   struct bnx2x_vfop_filters *VAR_25 = ((void*)0);

   VAR_21->rc = FUNC_4(VAR_17, VAR_18, VAR_20, &VAR_25,
            VAR_16);
   if (VAR_21->rc)
    goto op_err;

   if (VAR_25) {

    VAR_19 = FUNC_11(VAR_17, VAR_18, &VAR_23, VAR_25,
             VAR_20->vf_qid,
             0);
    if (VAR_19) {
     VAR_21->rc = VAR_19;
     goto op_err;
    }
    return;
   }
  }


 case 129:

  VAR_21->state = 130;

  if (VAR_20->flags & VAR_15) {
   unsigned long VAR_26 = 0;


   if (VAR_20->rx_mask & VAR_12)
    FUNC_3(VAR_5, &VAR_26);

   if (VAR_20->rx_mask &
     VAR_11)
    FUNC_3(VAR_4, &VAR_26);

   if (VAR_20->rx_mask & VAR_9)
    FUNC_3(VAR_1, &VAR_26);

   if (VAR_20->rx_mask & VAR_8)
    FUNC_3(VAR_0, &VAR_26);

   if (VAR_20->rx_mask & VAR_10)
    FUNC_3(VAR_3, &VAR_26);




   FUNC_3(VAR_2, &VAR_26);


   VAR_19 = FUNC_10(VAR_17, VAR_18, &VAR_23,
         VAR_20->vf_qid, VAR_26);
   if (VAR_19) {
    VAR_21->rc = VAR_19;
    goto op_err;
   }
   return;
  }


 case 130:

  VAR_21->state = 132;

  if (VAR_20->flags & VAR_14) {

   VAR_19 = FUNC_9(VAR_17, VAR_18, &VAR_23, VAR_20->multicast,
        VAR_20->n_multicast, 0);
   if (VAR_19) {
    VAR_21->rc = VAR_19;
    goto op_err;
   }
   return;
  }

op_done:
 case 132:
  FUNC_7(VAR_17, VAR_18, VAR_21);
  return;
op_err:
 FUNC_0("QFILTERS[%d:%d] error: rc %d\n",
    VAR_18->abs_vfid, VAR_20->vf_qid, VAR_21->rc);
 goto op_done;

 default:
  FUNC_6(VAR_22);
 }
}
