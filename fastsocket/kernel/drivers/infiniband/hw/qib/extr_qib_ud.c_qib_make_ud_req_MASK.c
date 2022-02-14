
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_24__ {int remote_qpn; int remote_qkey; int pkey_index; int ah; } ;
struct TYPE_13__ {TYPE_9__ ud; } ;
struct TYPE_19__ {int imm_data; } ;
struct TYPE_14__ {scalar_t__ opcode; int send_flags; TYPE_10__ wr; TYPE_4__ ex; int num_sge; } ;
struct qib_swqe {int length; TYPE_11__ wr; int * sg_list; } ;
struct TYPE_23__ {scalar_t__ qp_type; int qp_num; int device; } ;
struct TYPE_16__ {int total_len; int num_sge; int * sg_list; int sge; } ;
struct qib_qp {size_t state; scalar_t__ s_last; scalar_t__ s_head; int s_cur; int s_size; int s_hdrwords; int s_cur_size; int qkey; int s_lock; int s_flags; TYPE_8__ ibqp; int s_next_psn; int s_pkey_index; TYPE_5__* s_hdr; TYPE_1__ s_sge; struct qib_swqe* s_wqe; int s_srate; TYPE_1__* s_cur_sge; int s_dma_busy; int port_num; } ;
struct qib_pportdata {int lmc; int lid; } ;
struct TYPE_21__ {void** deth; int imm_data; } ;
struct TYPE_22__ {TYPE_6__ ud; } ;
struct qib_other_headers {TYPE_7__ u; void** bth; } ;
struct qib_ibport {int* sl_to_vl; int n_unicast_xmit; int n_multicast_xmit; } ;
struct ib_ah_attr {int dlid; int ah_flags; int sl; int src_path_bits; int grh; int static_rate; } ;
struct TYPE_17__ {struct qib_other_headers oth; int grh; } ;
struct TYPE_18__ {struct qib_other_headers oth; TYPE_2__ l; } ;
struct TYPE_20__ {void** lrh; TYPE_3__ u; } ;
struct TYPE_15__ {struct ib_ah_attr attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ FUNC_0 (int *) ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (int) ;
 struct qib_swqe* FUNC_3 (struct qib_qp*,int) ;
 int* VAR_23 ;
 struct qib_pportdata* FUNC_4 (struct qib_ibport*) ;
 int FUNC_5 (struct qib_ibport*,int ) ;
 scalar_t__ FUNC_6 (struct qib_ibport*,int *,int *,int,int) ;
 int FUNC_7 (struct qib_qp*,struct qib_swqe*,int ) ;
 int FUNC_8 (struct qib_qp*,struct qib_swqe*) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 TYPE_12__* FUNC_11 (int ) ;
 struct qib_ibport* FUNC_12 (int ,int ) ;
 scalar_t__ FUNC_13 (int) ;

int FUNC_14(struct qib_qp *VAR_24)
{
 struct qib_other_headers *VAR_25;
 struct ib_ah_attr *VAR_26;
 struct qib_pportdata *VAR_27;
 struct qib_ibport *VAR_28;
 struct qib_swqe *VAR_29;
 unsigned long VAR_30;
 u32 VAR_31;
 u32 VAR_32;
 u32 VAR_33;
 u16 VAR_34;
 u16 VAR_35;
 int VAR_36 = 0;
 int VAR_37;

 FUNC_9(&VAR_24->s_lock, VAR_30);

 if (!(VAR_23[VAR_24->state] & VAR_18)) {
  if (!(VAR_23[VAR_24->state] & VAR_12))
   goto bail;

  if (VAR_24->s_last == VAR_24->s_head)
   goto bail;

  if (FUNC_0(&VAR_24->s_dma_busy)) {
   VAR_24->s_flags |= VAR_21;
   goto bail;
  }
  VAR_29 = FUNC_3(VAR_24, VAR_24->s_last);
  FUNC_7(VAR_24, VAR_29, VAR_9);
  goto done;
 }

 if (VAR_24->s_cur == VAR_24->s_head)
  goto bail;

 VAR_29 = FUNC_3(VAR_24, VAR_24->s_cur);
 VAR_37 = VAR_24->s_cur + 1;
 if (VAR_37 >= VAR_24->s_size)
  VAR_37 = 0;


 VAR_28 = FUNC_12(VAR_24->ibqp.device, VAR_24->port_num);
 VAR_27 = FUNC_4(VAR_28);
 VAR_26 = &FUNC_11(VAR_29->wr.wr.ud.ah)->attr;
 if (VAR_26->dlid >= VAR_15) {
  if (VAR_26->dlid != VAR_17)
   VAR_28->n_multicast_xmit++;
  else
   VAR_28->n_unicast_xmit++;
 } else {
  VAR_28->n_unicast_xmit++;
  VAR_35 = VAR_26->dlid & ~((1 << VAR_27->lmc) - 1);
  if (FUNC_13(VAR_35 == VAR_27->lid)) {







   if (FUNC_0(&VAR_24->s_dma_busy)) {
    VAR_24->s_flags |= VAR_21;
    goto bail;
   }
   VAR_24->s_cur = VAR_37;
   FUNC_10(&VAR_24->s_lock, VAR_30);
   FUNC_8(VAR_24, VAR_29);
   FUNC_9(&VAR_24->s_lock, VAR_30);
   FUNC_7(VAR_24, VAR_29, VAR_8);
   goto done;
  }
 }

 VAR_24->s_cur = VAR_37;
 VAR_32 = -VAR_29->length & 3;
 VAR_31 = (VAR_29->length + VAR_32) >> 2;


 VAR_24->s_hdrwords = 7;
 VAR_24->s_cur_size = VAR_29->length;
 VAR_24->s_cur_sge = &VAR_24->s_sge;
 VAR_24->s_srate = VAR_26->static_rate;
 VAR_24->s_wqe = VAR_29;
 VAR_24->s_sge.sge = VAR_29->sg_list[0];
 VAR_24->s_sge.sg_list = VAR_29->sg_list + 1;
 VAR_24->s_sge.num_sge = VAR_29->wr.num_sge;
 VAR_24->s_sge.total_len = VAR_29->length;

 if (VAR_26->ah_flags & VAR_0) {

  VAR_24->s_hdrwords += FUNC_6(VAR_28, &VAR_24->s_hdr->u.l.grh,
            &VAR_26->grh,
            VAR_24->s_hdrwords, VAR_31);
  VAR_34 = VAR_14;
  VAR_25 = &VAR_24->s_hdr->u.l.oth;




 } else {

  VAR_34 = VAR_13;
  VAR_25 = &VAR_24->s_hdr->u.oth;
 }
 if (VAR_29->wr.opcode == VAR_10) {
  VAR_24->s_hdrwords++;
  VAR_25->u.ud.imm_data = VAR_29->wr.ex.imm_data;
  VAR_33 = VAR_4 << 24;
 } else
  VAR_33 = VAR_3 << 24;
 VAR_34 |= VAR_26->sl << 4;
 if (VAR_24->ibqp.qp_type == VAR_6)
  VAR_34 |= 0xF000;
 else
  VAR_34 |= VAR_28->sl_to_vl[VAR_26->sl] << 12;
 VAR_24->s_hdr->lrh[0] = FUNC_1(VAR_34);
 VAR_24->s_hdr->lrh[1] = FUNC_1(VAR_26->dlid);
 VAR_24->s_hdr->lrh[2] = FUNC_1(VAR_24->s_hdrwords + VAR_31 + VAR_22);
 VAR_35 = VAR_27->lid;
 if (VAR_35) {
  VAR_35 |= VAR_26->src_path_bits & ((1 << VAR_27->lmc) - 1);
  VAR_24->s_hdr->lrh[3] = FUNC_1(VAR_35);
 } else
  VAR_24->s_hdr->lrh[3] = VAR_2;
 if (VAR_29->wr.send_flags & VAR_7)
  VAR_33 |= VAR_1;
 VAR_33 |= VAR_32 << 20;
 VAR_33 |= VAR_24->ibqp.qp_type == VAR_6 ? VAR_11 :
  FUNC_5(VAR_28, VAR_24->ibqp.qp_type == VAR_5 ?
        VAR_29->wr.wr.ud.pkey_index : VAR_24->s_pkey_index);
 VAR_25->bth[0] = FUNC_2(VAR_33);



 VAR_25->bth[1] = VAR_26->dlid >= VAR_15 &&
  VAR_26->dlid != VAR_17 ?
  FUNC_2(VAR_16) :
  FUNC_2(VAR_29->wr.wr.ud.remote_qpn);
 VAR_25->bth[2] = FUNC_2(VAR_24->s_next_psn++ & VAR_19);




 VAR_25->u.ud.deth[0] = FUNC_2((int)VAR_29->wr.wr.ud.remote_qkey < 0 ?
      VAR_24->qkey : VAR_29->wr.wr.ud.remote_qkey);
 VAR_25->u.ud.deth[1] = FUNC_2(VAR_24->ibqp.qp_num);

done:
 VAR_36 = 1;
 goto unlock;

bail:
 VAR_24->s_flags &= ~VAR_20;
unlock:
 FUNC_10(&VAR_24->s_lock, VAR_30);
 return VAR_36;
}
