
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct qib_ibport {int dummy; } ;
struct ib_smp {scalar_t__ mgmt_class; int return_path; int hop_cnt; int dr_slid; int mkey; int attr_mod; int attr_id; int method; } ;
struct TYPE_4__ {int dr_rtn_path; int dr_trunc_hop; int dr_slid; int mkey; int attr_mod; int attr_id; int method; int lid; } ;
struct TYPE_6__ {TYPE_1__ ntc_256; } ;
struct ib_mad_notice_attr {TYPE_3__ details; int issuer_lid; scalar_t__ toggle_count; int trap_num; int prod_type_lsb; scalar_t__ prod_type_msb; int generic_type; } ;
struct TYPE_5__ {int lid; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (TYPE_3__*,int ,int) ;
 TYPE_2__* FUNC_4 (struct qib_ibport*) ;
 int FUNC_5 (struct qib_ibport*,struct ib_mad_notice_attr*,int) ;

__attribute__((used)) static void FUNC_6(struct qib_ibport *VAR_6, struct ib_smp *VAR_7)
{
 struct ib_mad_notice_attr VAR_8;


 VAR_8.generic_type = VAR_5;
 VAR_8.prod_type_msb = 0;
 VAR_8.prod_type_lsb = VAR_1;
 VAR_8.trap_num = VAR_2;
 VAR_8.issuer_lid = FUNC_1(FUNC_4(VAR_6)->lid);
 VAR_8.toggle_count = 0;
 FUNC_3(&VAR_8.details, 0, sizeof VAR_8.details);
 VAR_8.details.ntc_256.lid = VAR_8.issuer_lid;
 VAR_8.details.ntc_256.method = VAR_7->method;
 VAR_8.details.ntc_256.attr_id = VAR_7->attr_id;
 VAR_8.details.ntc_256.attr_mod = VAR_7->attr_mod;
 VAR_8.details.ntc_256.mkey = VAR_7->mkey;
 if (VAR_7->mgmt_class == VAR_0) {
  u8 VAR_9;

  VAR_8.details.ntc_256.dr_slid = VAR_7->dr_slid;
  VAR_8.details.ntc_256.dr_trunc_hop = VAR_3;
  VAR_9 = VAR_7->hop_cnt;
  if (VAR_9 > FUNC_0(VAR_8.details.ntc_256.dr_rtn_path)) {
   VAR_8.details.ntc_256.dr_trunc_hop |=
    VAR_4;
   VAR_9 = FUNC_0(VAR_8.details.ntc_256.dr_rtn_path);
  }
  VAR_8.details.ntc_256.dr_trunc_hop |= VAR_9;
  FUNC_2(VAR_8.details.ntc_256.dr_rtn_path, VAR_7->return_path,
         VAR_9);
 }

 FUNC_5(VAR_6, &VAR_8, sizeof VAR_8);
}
