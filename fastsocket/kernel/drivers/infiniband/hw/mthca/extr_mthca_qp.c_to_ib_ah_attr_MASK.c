
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mthca_qp_path {int g_mylmc; int static_rate; int mgid_index; int rgid; int sl_tclass_flowlabel; int hop_limit; int rlid; int port_pkey; } ;
struct TYPE_4__ {int num_ports; int gid_table_len; } ;
struct mthca_dev {TYPE_1__ limits; } ;
struct TYPE_5__ {int raw; } ;
struct TYPE_6__ {int sgid_index; int traffic_class; int flow_label; TYPE_2__ dgid; int hop_limit; } ;
struct ib_ah_attr {int port_num; int sl; int src_path_bits; int ah_flags; TYPE_3__ grh; int static_rate; int dlid; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct ib_ah_attr*,int ,int) ;
 int FUNC_4 (struct mthca_dev*,int,int) ;

__attribute__((used)) static void FUNC_5(struct mthca_dev *VAR_1, struct ib_ah_attr *VAR_2,
    struct mthca_qp_path *VAR_3)
{
 FUNC_3(VAR_2, 0, sizeof *VAR_2);
 VAR_2->port_num = (FUNC_1(VAR_3->port_pkey) >> 24) & 0x3;

 if (VAR_2->port_num == 0 || VAR_2->port_num > VAR_1->limits.num_ports)
  return;

 VAR_2->dlid = FUNC_0(VAR_3->rlid);
 VAR_2->sl = FUNC_1(VAR_3->sl_tclass_flowlabel) >> 28;
 VAR_2->src_path_bits = VAR_3->g_mylmc & 0x7f;
 VAR_2->static_rate = FUNC_4(VAR_1,
           VAR_3->static_rate & 0xf,
           VAR_2->port_num);
 VAR_2->ah_flags = (VAR_3->g_mylmc & (1 << 7)) ? VAR_0 : 0;
 if (VAR_2->ah_flags) {
  VAR_2->grh.sgid_index = VAR_3->mgid_index & (VAR_1->limits.gid_table_len - 1);
  VAR_2->grh.hop_limit = VAR_3->hop_limit;
  VAR_2->grh.traffic_class =
   (FUNC_1(VAR_3->sl_tclass_flowlabel) >> 20) & 0xff;
  VAR_2->grh.flow_label =
   FUNC_1(VAR_3->sl_tclass_flowlabel) & 0xfffff;
  FUNC_2(VAR_2->grh.dgid.raw,
   VAR_3->rgid, sizeof VAR_2->grh.dgid.raw);
 }
}
