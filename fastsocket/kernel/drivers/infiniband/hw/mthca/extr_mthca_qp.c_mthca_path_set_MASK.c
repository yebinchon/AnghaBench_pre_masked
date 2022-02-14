
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct mthca_qp_path {int g_mylmc; scalar_t__ mgid_index; void* sl_tclass_flowlabel; int rgid; int hop_limit; int static_rate; int rlid; } ;
struct TYPE_4__ {scalar_t__ gid_table_len; } ;
struct mthca_dev {TYPE_1__ limits; } ;
struct TYPE_5__ {int raw; } ;
struct TYPE_6__ {scalar_t__ sgid_index; int traffic_class; int flow_label; TYPE_2__ dgid; int hop_limit; } ;
struct ib_ah_attr {int src_path_bits; int ah_flags; int sl; TYPE_3__ grh; int static_rate; int dlid; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct mthca_dev*,char*,scalar_t__,scalar_t__) ;
 int FUNC_4 (struct mthca_dev*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct mthca_dev *VAR_1, const struct ib_ah_attr *VAR_2,
     struct mthca_qp_path *VAR_3, u8 VAR_4)
{
 VAR_3->g_mylmc = VAR_2->src_path_bits & 0x7f;
 VAR_3->rlid = FUNC_0(VAR_2->dlid);
 VAR_3->static_rate = FUNC_4(VAR_1, VAR_2->static_rate, VAR_4);

 if (VAR_2->ah_flags & VAR_0) {
  if (VAR_2->grh.sgid_index >= VAR_1->limits.gid_table_len) {
   FUNC_3(VAR_1, "sgid_index (%u) too large. max is %d\n",
      VAR_2->grh.sgid_index, VAR_1->limits.gid_table_len-1);
   return -1;
  }

  VAR_3->g_mylmc |= 1 << 7;
  VAR_3->mgid_index = VAR_2->grh.sgid_index;
  VAR_3->hop_limit = VAR_2->grh.hop_limit;
  VAR_3->sl_tclass_flowlabel =
   FUNC_1((VAR_2->sl << 28) |
        (VAR_2->grh.traffic_class << 20) |
        (VAR_2->grh.flow_label));
  FUNC_2(VAR_3->rgid, VAR_2->grh.dgid.raw, 16);
 } else
  VAR_3->sl_tclass_flowlabel = FUNC_1(VAR_2->sl << 28);

 return 0;
}
