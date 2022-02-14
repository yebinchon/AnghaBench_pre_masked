
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct qib_ibport {int n_pkt_drops; int qkey_violations; int pkey_violations; } ;
struct TYPE_4__ {void* qp2; void* sl_qp1; void* key; scalar_t__ lid2; scalar_t__ lid1; } ;
struct TYPE_6__ {TYPE_1__ ntc_257_258; } ;
struct ib_mad_notice_attr {TYPE_3__ details; scalar_t__ toggle_count; int issuer_lid; scalar_t__ trap_num; int prod_type_lsb; scalar_t__ prod_type_msb; int generic_type; } ;
typedef scalar_t__ __be16 ;
struct TYPE_5__ {int lid; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*,int ,int) ;
 TYPE_2__* FUNC_3 (struct qib_ibport*) ;
 int FUNC_4 (struct qib_ibport*,struct ib_mad_notice_attr*,int) ;

void FUNC_5(struct qib_ibport *VAR_3, __be16 VAR_4, u32 VAR_5, u32 VAR_6,
     u32 VAR_7, u32 VAR_8, __be16 VAR_9, __be16 VAR_10)
{
 struct ib_mad_notice_attr VAR_11;

 if (VAR_4 == VAR_1)
  VAR_3->pkey_violations++;
 else
  VAR_3->qkey_violations++;
 VAR_3->n_pkt_drops++;


 VAR_11.generic_type = VAR_2;
 VAR_11.prod_type_msb = 0;
 VAR_11.prod_type_lsb = VAR_0;
 VAR_11.trap_num = VAR_4;
 VAR_11.issuer_lid = FUNC_0(FUNC_3(VAR_3)->lid);
 VAR_11.toggle_count = 0;
 FUNC_2(&VAR_11.details, 0, sizeof VAR_11.details);
 VAR_11.details.ntc_257_258.lid1 = VAR_9;
 VAR_11.details.ntc_257_258.lid2 = VAR_10;
 VAR_11.details.ntc_257_258.key = FUNC_1(VAR_5);
 VAR_11.details.ntc_257_258.sl_qp1 = FUNC_1((VAR_6 << 28) | VAR_7);
 VAR_11.details.ntc_257_258.qp2 = FUNC_1(VAR_8);

 FUNC_4(VAR_3, &VAR_11, sizeof VAR_11);
}
