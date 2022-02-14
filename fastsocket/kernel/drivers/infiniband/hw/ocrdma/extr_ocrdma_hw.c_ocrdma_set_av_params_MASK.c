
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


union ib_gid {int * raw; } ;
typedef int u8 ;
typedef int u32 ;
struct ocrdma_qp {TYPE_3__* dev; int sgid_idx; } ;
struct TYPE_6__ {int tclass_sq_psn; int rnt_rc_sl_fl; int hop_lmt_rq_psn; int dmac_b0_to_b3; int vlan_dmac_b4_to_b5; int * sgid; int * dgid; } ;
struct ocrdma_modify_qp {int flags; TYPE_2__ params; } ;
struct TYPE_8__ {int * raw; } ;
struct TYPE_5__ {int traffic_class; int flow_label; int hop_limit; TYPE_4__ dgid; int sgid_index; } ;
struct ib_ah_attr {int ah_flags; TYPE_1__ grh; } ;
struct ib_qp_attr {struct ib_ah_attr ah_attr; } ;
struct TYPE_7__ {int ibdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int,int ,union ib_gid*) ;
 int FUNC_3 (TYPE_3__*,TYPE_4__*,int*) ;
 int FUNC_4 (union ib_gid*) ;

__attribute__((used)) static void FUNC_5(struct ocrdma_qp *VAR_7,
    struct ocrdma_modify_qp *VAR_8,
    struct ib_qp_attr *VAR_9)
{
 struct ib_ah_attr *VAR_10 = &VAR_9->ah_attr;
 union ib_gid VAR_11;
 u32 VAR_12;
 u8 VAR_13[6];
 if ((VAR_10->ah_flags & VAR_0) == 0)
  return;
 VAR_8->params.tclass_sq_psn |=
     (VAR_10->grh.traffic_class << VAR_3);
 VAR_8->params.rnt_rc_sl_fl |=
     (VAR_10->grh.flow_label & VAR_1);
 VAR_8->params.hop_lmt_rq_psn |=
     (VAR_10->grh.hop_limit << VAR_2);
 VAR_8->flags |= VAR_5;
 FUNC_0(&VAR_8->params.dgid[0], &VAR_10->grh.dgid.raw[0],
        sizeof(VAR_8->params.dgid));
 FUNC_2(&VAR_7->dev->ibdev, 1,
    VAR_10->grh.sgid_index, &VAR_11);
 VAR_7->sgid_idx = VAR_10->grh.sgid_index;
 FUNC_0(&VAR_8->params.sgid[0], &VAR_11.raw[0], sizeof(VAR_8->params.sgid));
 FUNC_3(VAR_7->dev, &VAR_10->grh.dgid, &VAR_13[0]);
 VAR_8->params.dmac_b0_to_b3 = VAR_13[0] | (VAR_13[1] << 8) |
    (VAR_13[2] << 16) | (VAR_13[3] << 24);

 FUNC_1(&VAR_8->params.dgid[0], sizeof(VAR_8->params.dgid));
 FUNC_1(&VAR_8->params.sgid[0], sizeof(VAR_8->params.sgid));
 VAR_8->params.vlan_dmac_b4_to_b5 = VAR_13[4] | (VAR_13[5] << 8);
 VAR_12 = FUNC_4(&VAR_11);
 if (VAR_12 && (VAR_12 < 0x1000)) {
  VAR_8->params.vlan_dmac_b4_to_b5 |=
      VAR_12 << VAR_4;
  VAR_8->flags |= VAR_6;
 }
}
