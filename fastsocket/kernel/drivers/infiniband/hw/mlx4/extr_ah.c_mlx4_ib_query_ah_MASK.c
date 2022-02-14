
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int g_slid; int dgid; int gid_index; int hop_limit; int sl_tclass_flowlabel; scalar_t__ stat_rate; int dlid; int port_pd; } ;
struct TYPE_8__ {TYPE_3__ ib; } ;
struct mlx4_ib_ah {TYPE_4__ av; } ;
struct TYPE_5__ {int raw; } ;
struct TYPE_6__ {int traffic_class; int flow_label; TYPE_1__ dgid; int sgid_index; int hop_limit; } ;
struct ib_ah_attr {int sl; int port_num; int src_path_bits; TYPE_2__ grh; int ah_flags; scalar_t__ static_rate; int dlid; } ;
struct ib_ah {int device; } ;
typedef enum rdma_link_layer { ____Placeholder_rdma_link_layer } rdma_link_layer ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct ib_ah_attr*,int ,int) ;
 scalar_t__ FUNC_4 (struct mlx4_ib_ah*) ;
 int FUNC_5 (int ,int) ;
 struct mlx4_ib_ah* FUNC_6 (struct ib_ah*) ;

int FUNC_7(struct ib_ah *VAR_3, struct ib_ah_attr *VAR_4)
{
 struct mlx4_ib_ah *VAR_5 = FUNC_6(VAR_3);
 enum rdma_link_layer VAR_6;

 FUNC_3(VAR_4, 0, sizeof *VAR_4);
 VAR_4->sl = FUNC_1(VAR_5->av.ib.sl_tclass_flowlabel) >> 28;
 VAR_4->port_num = FUNC_1(VAR_5->av.ib.port_pd) >> 24;
 VAR_6 = FUNC_5(VAR_3->device, VAR_4->port_num);
 VAR_4->dlid = VAR_6 == VAR_1 ? FUNC_0(VAR_5->av.ib.dlid) : 0;
 if (VAR_5->av.ib.stat_rate)
  VAR_4->static_rate = VAR_5->av.ib.stat_rate - VAR_2;
 VAR_4->src_path_bits = VAR_5->av.ib.g_slid & 0x7F;

 if (FUNC_4(VAR_5)) {
  VAR_4->ah_flags = VAR_0;

  VAR_4->grh.traffic_class =
   FUNC_1(VAR_5->av.ib.sl_tclass_flowlabel) >> 20;
  VAR_4->grh.flow_label =
   FUNC_1(VAR_5->av.ib.sl_tclass_flowlabel) & 0xfffff;
  VAR_4->grh.hop_limit = VAR_5->av.ib.hop_limit;
  VAR_4->grh.sgid_index = VAR_5->av.ib.gid_index;
  FUNC_2(VAR_4->grh.dgid.raw, VAR_5->av.ib.dgid, 16);
 }

 return 0;
}
