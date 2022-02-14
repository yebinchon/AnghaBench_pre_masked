
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct bnx2x_virtf {scalar_t__ state; int abs_vfid; int op_rc; } ;
struct TYPE_9__ {int type; int length; } ;
struct TYPE_10__ {TYPE_4__ tl; } ;
struct bnx2x_vf_mbx {TYPE_5__ first_tlv; TYPE_3__* msg; } ;
struct bnx2x {int dummy; } ;
struct TYPE_6__ {int * tlv_buffer; } ;
struct TYPE_7__ {TYPE_1__ tlv_buf_size; } ;
struct TYPE_8__ {TYPE_2__ req; } ;


 int FUNC_0 (char*,int,int ,scalar_t__) ;
 int VAR_0 ;







 int FUNC_1 (int ,char*,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct bnx2x*,struct bnx2x_virtf*,int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct bnx2x*,struct bnx2x_virtf*,int) ;
 int FUNC_5 (struct bnx2x*,struct bnx2x_virtf*,struct bnx2x_vf_mbx*) ;
 int FUNC_6 (struct bnx2x*,struct bnx2x_virtf*,struct bnx2x_vf_mbx*) ;
 int FUNC_7 (struct bnx2x*,struct bnx2x_virtf*,struct bnx2x_vf_mbx*) ;
 int FUNC_8 (struct bnx2x*,struct bnx2x_virtf*,struct bnx2x_vf_mbx*) ;
 int FUNC_9 (struct bnx2x*,struct bnx2x_virtf*) ;
 int FUNC_10 (struct bnx2x*,struct bnx2x_virtf*,struct bnx2x_vf_mbx*) ;
 int FUNC_11 (struct bnx2x*,struct bnx2x_virtf*,struct bnx2x_vf_mbx*) ;
 int FUNC_12 (struct bnx2x*,struct bnx2x_virtf*,struct bnx2x_vf_mbx*) ;
 int FUNC_13 () ;
 int FUNC_14 (struct bnx2x*,int ) ;

__attribute__((used)) static void FUNC_15(struct bnx2x *VAR_4, struct bnx2x_virtf *VAR_5,
      struct bnx2x_vf_mbx *VAR_6)
{
 int VAR_7;


 if (FUNC_3(VAR_6->first_tlv.tl.type)) {



  FUNC_2(VAR_4, VAR_5, VAR_6->first_tlv.tl.type);


  switch (VAR_6->first_tlv.tl.type) {
  case 134:
   FUNC_5(VAR_4, VAR_5, VAR_6);
   return;
  case 132:
   FUNC_7(VAR_4, VAR_5, VAR_6);
   return;
  case 130:
   FUNC_11(VAR_4, VAR_5, VAR_6);
   return;
  case 129:
   FUNC_10(VAR_4, VAR_5, VAR_6);
   return;
  case 128:
   FUNC_12(VAR_4, VAR_5, VAR_6);
   return;
  case 133:
   FUNC_6(VAR_4, VAR_5, VAR_6);
   return;
  case 131:
   FUNC_8(VAR_4, VAR_5, VAR_6);
   return;
  }

 } else {






  FUNC_0("unknown TLV. type %d length %d vf->state was %d. first 20 bytes of mailbox buffer:\n",
     VAR_6->first_tlv.tl.type, VAR_6->first_tlv.tl.length,
     VAR_5->state);
  for (VAR_7 = 0; VAR_7 < 20; VAR_7++)
   FUNC_1(VAR_0, "%x ",
    VAR_6->msg->req.tlv_buf_size.tlv_buffer[VAR_7]);
 }


 if (VAR_5->state == VAR_2 || VAR_5->state == VAR_3) {

  VAR_5->op_rc = VAR_1;


  FUNC_9(VAR_4, VAR_5);
 } else {




  FUNC_14(VAR_4, VAR_5->abs_vfid);

  FUNC_13();
  FUNC_4(VAR_4, VAR_5, VAR_6->first_tlv.tl.type);
 }
}
