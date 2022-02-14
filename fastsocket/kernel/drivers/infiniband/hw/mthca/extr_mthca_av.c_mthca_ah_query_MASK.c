
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int gid_table_len; } ;
struct mthca_dev {TYPE_1__ limits; } ;
struct mthca_ah {scalar_t__ type; TYPE_4__* av; } ;
struct TYPE_6__ {int raw; } ;
struct TYPE_7__ {int traffic_class; int flow_label; int sgid_index; TYPE_2__ dgid; int hop_limit; } ;
struct ib_ah_attr {int sl; int port_num; int src_path_bits; int ah_flags; TYPE_3__ grh; int static_rate; int dlid; } ;
struct ib_ah {int device; } ;
struct TYPE_8__ {int msg_sr; int g_slid; int gid_index; int dgid; int hop_limit; int sl_tclass_flowlabel; int port_pd; int dlid; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct ib_ah_attr*,int ,int) ;
 scalar_t__ FUNC_4 (struct mthca_ah*) ;
 int FUNC_5 (struct mthca_dev*,int,int) ;
 struct mthca_ah* FUNC_6 (struct ib_ah*) ;
 struct mthca_dev* FUNC_7 (int ) ;

int FUNC_8(struct ib_ah *VAR_3, struct ib_ah_attr *VAR_4)
{
 struct mthca_ah *VAR_5 = FUNC_6(VAR_3);
 struct mthca_dev *VAR_6 = FUNC_7(VAR_3->device);


 if (VAR_5->type == VAR_2)
  return -VAR_0;

 FUNC_3(VAR_4, 0, sizeof *VAR_4);
 VAR_4->dlid = FUNC_0(VAR_5->av->dlid);
 VAR_4->sl = FUNC_1(VAR_5->av->sl_tclass_flowlabel) >> 28;
 VAR_4->port_num = FUNC_1(VAR_5->av->port_pd) >> 24;
 VAR_4->static_rate = FUNC_5(VAR_6, VAR_5->av->msg_sr & 0x7,
            VAR_4->port_num);
 VAR_4->src_path_bits = VAR_5->av->g_slid & 0x7F;
 VAR_4->ah_flags = FUNC_4(VAR_5) ? VAR_1 : 0;

 if (VAR_4->ah_flags) {
  VAR_4->grh.traffic_class =
   FUNC_1(VAR_5->av->sl_tclass_flowlabel) >> 20;
  VAR_4->grh.flow_label =
   FUNC_1(VAR_5->av->sl_tclass_flowlabel) & 0xfffff;
  VAR_4->grh.hop_limit = VAR_5->av->hop_limit;
  VAR_4->grh.sgid_index = VAR_5->av->gid_index &
           (VAR_6->limits.gid_table_len - 1);
  FUNC_2(VAR_4->grh.dgid.raw, VAR_5->av->dgid, 16);
 }

 return 0;
}
