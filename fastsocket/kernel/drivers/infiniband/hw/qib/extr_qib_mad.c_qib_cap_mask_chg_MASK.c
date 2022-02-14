
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct qib_ibport {int port_cap_flags; } ;
struct TYPE_4__ {int new_cap_mask; int lid; } ;
struct TYPE_6__ {TYPE_1__ ntc_144; } ;
struct ib_mad_notice_attr {TYPE_3__ details; int issuer_lid; scalar_t__ toggle_count; int trap_num; int prod_type_lsb; scalar_t__ prod_type_msb; int generic_type; } ;
struct TYPE_5__ {int lid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*,int ,int) ;
 TYPE_2__* FUNC_3 (struct qib_ibport*) ;
 int FUNC_4 (struct qib_ibport*,struct ib_mad_notice_attr*,int) ;

void FUNC_5(struct qib_ibport *VAR_3)
{
 struct ib_mad_notice_attr VAR_4;

 VAR_4.generic_type = VAR_2;
 VAR_4.prod_type_msb = 0;
 VAR_4.prod_type_lsb = VAR_0;
 VAR_4.trap_num = VAR_1;
 VAR_4.issuer_lid = FUNC_0(FUNC_3(VAR_3)->lid);
 VAR_4.toggle_count = 0;
 FUNC_2(&VAR_4.details, 0, sizeof VAR_4.details);
 VAR_4.details.ntc_144.lid = VAR_4.issuer_lid;
 VAR_4.details.ntc_144.new_cap_mask = FUNC_1(VAR_3->port_cap_flags);

 FUNC_4(VAR_3, &VAR_4, sizeof VAR_4);
}
