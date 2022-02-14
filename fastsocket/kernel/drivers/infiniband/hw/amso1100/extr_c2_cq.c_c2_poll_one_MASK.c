
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_wc {int byte_len; int opcode; scalar_t__ pkey_index; scalar_t__ dlid_path_bits; scalar_t__ src_qp; scalar_t__ sl; scalar_t__ slid; scalar_t__ wc_flags; int * qp; int wr_id; int status; } ;
struct TYPE_2__ {int context; } ;
struct c2wr_ce {int bytes_rcvd; TYPE_1__ hdr; scalar_t__ qp_user_context; } ;
struct c2_qp {int sq_mq; int rq_mq; int ibqp; } ;
struct c2_dev {int dummy; } ;
struct c2_cq {int mq; } ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct c2wr_ce* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (struct c2wr_ce*) ;
 int FUNC_6 (struct c2wr_ce*) ;
 int FUNC_7 (struct c2wr_ce*) ;

__attribute__((used)) static inline int FUNC_8(struct c2_dev *VAR_6,
         struct c2_cq *VAR_7, struct ib_wc *VAR_8)
{
 struct c2wr_ce *VAR_9;
 struct c2_qp *VAR_10;
 int VAR_11 = 0;

 VAR_9 = FUNC_2(&VAR_7->mq);
 if (!VAR_9) {
  return -VAR_0;
 }






 while ((VAR_10 =
  (struct c2_qp *) (unsigned long) VAR_9->qp_user_context) == ((void*)0)) {
  FUNC_3(&VAR_7->mq);
  VAR_9 = FUNC_2(&VAR_7->mq);
  if (!VAR_9)
   return -VAR_0;
 }

 VAR_8->status = FUNC_1(FUNC_6(VAR_9));
 VAR_8->wr_id = VAR_9->hdr.context;
 VAR_8->qp = &VAR_10->ibqp;
 VAR_8->wc_flags = 0;
 VAR_8->slid = 0;
 VAR_8->sl = 0;
 VAR_8->src_qp = 0;
 VAR_8->dlid_path_bits = 0;
 VAR_8->pkey_index = 0;

 switch (FUNC_5(VAR_9)) {
 case 128:
  VAR_8->opcode = VAR_5;
  break;
 case 130:
  VAR_8->opcode = VAR_3;
  break;
 case 131:
  VAR_8->opcode = VAR_2;
  break;
 case 132:
  VAR_8->opcode = VAR_1;
  break;
 case 129:
  VAR_8->byte_len = FUNC_0(VAR_9->bytes_rcvd);
  VAR_8->opcode = VAR_4;
  VAR_11 = 1;
  break;
 default:
  break;
 }


 if (VAR_11)
  FUNC_4(&VAR_10->rq_mq, 1);
 else
  FUNC_4(&VAR_10->sq_mq,
          FUNC_0(FUNC_7(VAR_9)) + 1);


 FUNC_3(&VAR_7->mq);

 return 0;
}
