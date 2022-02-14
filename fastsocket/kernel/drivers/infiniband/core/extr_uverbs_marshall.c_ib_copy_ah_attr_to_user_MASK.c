
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int reserved; int traffic_class; int hop_limit; int sgid_index; int flow_label; int dgid; } ;
struct ib_uverbs_ah_attr {int is_global; scalar_t__ reserved; int port_num; int static_rate; int src_path_bits; int sl; int dlid; TYPE_3__ grh; } ;
struct TYPE_4__ {int raw; } ;
struct TYPE_5__ {int traffic_class; int hop_limit; int sgid_index; int flow_label; TYPE_1__ dgid; } ;
struct ib_ah_attr {int ah_flags; int port_num; int static_rate; int src_path_bits; int sl; int dlid; TYPE_2__ grh; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int *,int ,int) ;

void FUNC_2(struct ib_uverbs_ah_attr *VAR_1,
        struct ib_ah_attr *VAR_2)
{
 FUNC_0(VAR_1->grh.dgid, VAR_2->grh.dgid.raw, sizeof VAR_2->grh.dgid);
 VAR_1->grh.flow_label = VAR_2->grh.flow_label;
 VAR_1->grh.sgid_index = VAR_2->grh.sgid_index;
 VAR_1->grh.hop_limit = VAR_2->grh.hop_limit;
 VAR_1->grh.traffic_class = VAR_2->grh.traffic_class;
 FUNC_1(&VAR_1->grh.reserved, 0, sizeof(VAR_1->grh.reserved));
 VAR_1->dlid = VAR_2->dlid;
 VAR_1->sl = VAR_2->sl;
 VAR_1->src_path_bits = VAR_2->src_path_bits;
 VAR_1->static_rate = VAR_2->static_rate;
 VAR_1->is_global = VAR_2->ah_flags & VAR_0 ? 1 : 0;
 VAR_1->port_num = VAR_2->port_num;
 VAR_1->reserved = 0;
}
