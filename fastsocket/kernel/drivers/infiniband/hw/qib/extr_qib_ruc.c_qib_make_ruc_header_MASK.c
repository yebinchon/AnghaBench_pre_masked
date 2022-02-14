
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_11__ {int ah_flags; size_t sl; int dlid; int src_path_bits; int grh; } ;
struct TYPE_7__ {int device; } ;
struct qib_qp {int s_cur_size; scalar_t__ s_mig_state; int remote_qpn; int s_pkey_index; TYPE_5__ remote_ah_attr; TYPE_4__* s_hdr; int s_hdrwords; int port_num; TYPE_1__ ibqp; } ;
struct qib_other_headers {void** bth; } ;
struct qib_ibport {int* sl_to_vl; } ;
struct TYPE_12__ {int lid; } ;
struct TYPE_8__ {int grh; } ;
struct TYPE_9__ {TYPE_2__ l; } ;
struct TYPE_10__ {void** lrh; TYPE_3__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int) ;
 void* FUNC_1 (int) ;
 TYPE_6__* FUNC_2 (struct qib_ibport*) ;
 int FUNC_3 (struct qib_ibport*,int ) ;
 scalar_t__ FUNC_4 (struct qib_ibport*,int *,int *,int ,int) ;
 struct qib_ibport* FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int) ;

void FUNC_7(struct qib_qp *VAR_6, struct qib_other_headers *VAR_7,
    u32 VAR_8, u32 VAR_9)
{
 struct qib_ibport *VAR_10 = FUNC_5(VAR_6->ibqp.device, VAR_6->port_num);
 u16 VAR_11;
 u32 VAR_12;
 u32 VAR_13;


 VAR_13 = -VAR_6->s_cur_size & 3;
 VAR_12 = (VAR_6->s_cur_size + VAR_13) >> 2;
 VAR_11 = VAR_3;
 if (FUNC_6(VAR_6->remote_ah_attr.ah_flags & VAR_0)) {
  VAR_6->s_hdrwords += FUNC_4(VAR_10, &VAR_6->s_hdr->u.l.grh,
            &VAR_6->remote_ah_attr.grh,
            VAR_6->s_hdrwords, VAR_12);
  VAR_11 = VAR_4;
 }
 VAR_11 |= VAR_10->sl_to_vl[VAR_6->remote_ah_attr.sl] << 12 |
  VAR_6->remote_ah_attr.sl << 4;
 VAR_6->s_hdr->lrh[0] = FUNC_0(VAR_11);
 VAR_6->s_hdr->lrh[1] = FUNC_0(VAR_6->remote_ah_attr.dlid);
 VAR_6->s_hdr->lrh[2] = FUNC_0(VAR_6->s_hdrwords + VAR_12 + VAR_5);
 VAR_6->s_hdr->lrh[3] = FUNC_0(FUNC_2(VAR_10)->lid |
           VAR_6->remote_ah_attr.src_path_bits);
 VAR_8 |= FUNC_3(VAR_10, VAR_6->s_pkey_index);
 VAR_8 |= VAR_13 << 20;
 if (VAR_6->s_mig_state == VAR_2)
  VAR_8 |= VAR_1;
 VAR_7->bth[0] = FUNC_1(VAR_8);
 VAR_7->bth[1] = FUNC_1(VAR_6->remote_qpn);
 VAR_7->bth[2] = FUNC_1(VAR_9);
}
