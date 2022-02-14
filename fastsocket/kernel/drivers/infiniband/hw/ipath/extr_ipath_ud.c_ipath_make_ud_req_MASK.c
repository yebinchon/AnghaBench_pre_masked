
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_13__ ;
typedef struct TYPE_16__ TYPE_12__ ;
typedef struct TYPE_15__ TYPE_11__ ;
typedef struct TYPE_14__ TYPE_10__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_26__ {int remote_qpn; int remote_qkey; int ah; } ;
struct TYPE_14__ {TYPE_9__ ud; } ;
struct TYPE_21__ {int imm_data; } ;
struct TYPE_15__ {scalar_t__ opcode; int send_flags; TYPE_10__ wr; TYPE_4__ ex; int num_sge; } ;
struct ipath_swqe {int length; TYPE_11__ wr; int * sg_list; } ;
struct TYPE_25__ {scalar_t__ qp_type; int qp_num; int device; } ;
struct TYPE_23__ {void** deth; int imm_data; } ;
struct TYPE_24__ {TYPE_6__ ud; } ;
struct ipath_other_headers {TYPE_7__ u; void** bth; } ;
struct TYPE_19__ {struct ipath_other_headers oth; int grh; } ;
struct TYPE_20__ {struct ipath_other_headers oth; TYPE_2__ l; } ;
struct TYPE_22__ {void** lrh; TYPE_3__ u; } ;
struct TYPE_18__ {int num_sge; int * sg_list; int sge; } ;
struct ipath_qp {size_t state; scalar_t__ s_last; scalar_t__ s_head; int s_cur; int s_size; int s_hdrwords; int s_cur_size; int qkey; int s_lock; int s_flags; TYPE_8__ ibqp; int s_next_psn; int s_pkey_index; TYPE_5__ s_hdr; TYPE_1__ s_sge; struct ipath_swqe* s_wqe; int s_dmult; TYPE_1__* s_cur_sge; int s_dma_busy; } ;
struct ipath_ibdev {TYPE_13__* dd; int n_unicast_xmit; int n_multicast_xmit; } ;
struct ib_ah_attr {int dlid; int ah_flags; int sl; int src_path_bits; int grh; int static_rate; } ;
struct TYPE_17__ {int ipath_lmc; int ipath_lid; } ;
struct TYPE_16__ {struct ib_ah_attr attr; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
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
 scalar_t__ FUNC_0 (int *) ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (int) ;
 struct ipath_swqe* FUNC_3 (struct ipath_qp*,int) ;
 int* VAR_21 ;
 int FUNC_4 (TYPE_13__*,int ) ;
 scalar_t__ FUNC_5 (struct ipath_ibdev*,int *,int *,int,int) ;
 int FUNC_6 (struct ipath_qp*,struct ipath_swqe*,int ) ;
 int FUNC_7 (struct ipath_qp*,struct ipath_swqe*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 TYPE_12__* FUNC_10 (int ) ;
 struct ipath_ibdev* FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int) ;

int FUNC_13(struct ipath_qp *VAR_22)
{
 struct ipath_ibdev *VAR_23 = FUNC_11(VAR_22->ibqp.device);
 struct ipath_other_headers *VAR_24;
 struct ib_ah_attr *VAR_25;
 struct ipath_swqe *VAR_26;
 unsigned long VAR_27;
 u32 VAR_28;
 u32 VAR_29;
 u32 VAR_30;
 u16 VAR_31;
 u16 VAR_32;
 int VAR_33 = 0;
 int VAR_34;

 FUNC_8(&VAR_22->s_lock, VAR_27);

 if (!(VAR_21[VAR_22->state] & VAR_16)) {
  if (!(VAR_21[VAR_22->state] & VAR_10))
   goto bail;

  if (VAR_22->s_last == VAR_22->s_head)
   goto bail;

  if (FUNC_0(&VAR_22->s_dma_busy)) {
   VAR_22->s_flags |= VAR_19;
   goto bail;
  }
  VAR_26 = FUNC_3(VAR_22, VAR_22->s_last);
  FUNC_6(VAR_22, VAR_26, VAR_7);
  goto done;
 }

 if (VAR_22->s_cur == VAR_22->s_head)
  goto bail;

 VAR_26 = FUNC_3(VAR_22, VAR_22->s_cur);
 VAR_34 = VAR_22->s_cur + 1;
 if (VAR_34 >= VAR_22->s_size)
  VAR_34 = 0;


 VAR_25 = &FUNC_10(VAR_26->wr.wr.ud.ah)->attr;
 if (VAR_25->dlid >= VAR_13) {
  if (VAR_25->dlid != VAR_15)
   VAR_23->n_multicast_xmit++;
  else
   VAR_23->n_unicast_xmit++;
 } else {
  VAR_23->n_unicast_xmit++;
  VAR_32 = VAR_25->dlid & ~((1 << VAR_23->dd->ipath_lmc) - 1);
  if (FUNC_12(VAR_32 == VAR_23->dd->ipath_lid)) {







   if (FUNC_0(&VAR_22->s_dma_busy)) {
    VAR_22->s_flags |= VAR_19;
    goto bail;
   }
   VAR_22->s_cur = VAR_34;
   FUNC_9(&VAR_22->s_lock, VAR_27);
   FUNC_7(VAR_22, VAR_26);
   FUNC_8(&VAR_22->s_lock, VAR_27);
   FUNC_6(VAR_22, VAR_26, VAR_6);
   goto done;
  }
 }

 VAR_22->s_cur = VAR_34;
 VAR_29 = -VAR_26->length & 3;
 VAR_28 = (VAR_26->length + VAR_29) >> 2;


 VAR_22->s_hdrwords = 7;
 VAR_22->s_cur_size = VAR_26->length;
 VAR_22->s_cur_sge = &VAR_22->s_sge;
 VAR_22->s_dmult = VAR_25->static_rate;
 VAR_22->s_wqe = VAR_26;
 VAR_22->s_sge.sge = VAR_26->sg_list[0];
 VAR_22->s_sge.sg_list = VAR_26->sg_list + 1;
 VAR_22->s_sge.num_sge = VAR_26->wr.num_sge;

 if (VAR_25->ah_flags & VAR_0) {

  VAR_22->s_hdrwords += FUNC_5(VAR_23, &VAR_22->s_hdr.u.l.grh,
       &VAR_25->grh,
       VAR_22->s_hdrwords, VAR_28);
  VAR_31 = VAR_12;
  VAR_24 = &VAR_22->s_hdr.u.l.oth;




 } else {

  VAR_31 = VAR_11;
  VAR_24 = &VAR_22->s_hdr.u.oth;
 }
 if (VAR_26->wr.opcode == VAR_8) {
  VAR_22->s_hdrwords++;
  VAR_24->u.ud.imm_data = VAR_26->wr.ex.imm_data;
  VAR_30 = VAR_3 << 24;
 } else
  VAR_30 = VAR_2 << 24;
 VAR_31 |= VAR_25->sl << 4;
 if (VAR_22->ibqp.qp_type == VAR_4)
  VAR_31 |= 0xF000;
 VAR_22->s_hdr.lrh[0] = FUNC_1(VAR_31);
 VAR_22->s_hdr.lrh[1] = FUNC_1(VAR_25->dlid);
 VAR_22->s_hdr.lrh[2] = FUNC_1(VAR_22->s_hdrwords + VAR_28 +
        VAR_20);
 VAR_32 = VAR_23->dd->ipath_lid;
 if (VAR_32) {
  VAR_32 |= VAR_25->src_path_bits &
   ((1 << VAR_23->dd->ipath_lmc) - 1);
  VAR_22->s_hdr.lrh[3] = FUNC_1(VAR_32);
 } else
  VAR_22->s_hdr.lrh[3] = VAR_1;
 if (VAR_26->wr.send_flags & VAR_5)
  VAR_30 |= 1 << 23;
 VAR_30 |= VAR_29 << 20;
 VAR_30 |= VAR_22->ibqp.qp_type == VAR_4 ? VAR_9 :
  FUNC_4(VAR_23->dd, VAR_22->s_pkey_index);
 VAR_24->bth[0] = FUNC_2(VAR_30);



 VAR_24->bth[1] = VAR_25->dlid >= VAR_13 &&
  VAR_25->dlid != VAR_15 ?
  FUNC_2(VAR_14) :
  FUNC_2(VAR_26->wr.wr.ud.remote_qpn);
 VAR_24->bth[2] = FUNC_2(VAR_22->s_next_psn++ & VAR_17);




 VAR_24->u.ud.deth[0] = FUNC_2((int)VAR_26->wr.wr.ud.remote_qkey < 0 ?
      VAR_22->qkey : VAR_26->wr.wr.ud.remote_qkey);
 VAR_24->u.ud.deth[1] = FUNC_2(VAR_22->ibqp.qp_num);

done:
 VAR_33 = 1;
 goto unlock;

bail:
 VAR_22->s_flags &= ~VAR_18;
unlock:
 FUNC_9(&VAR_22->s_lock, VAR_27);
 return VAR_33;
}
