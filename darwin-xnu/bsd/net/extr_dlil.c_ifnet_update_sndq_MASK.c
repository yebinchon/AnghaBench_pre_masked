
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tb_profile {int member_2; int member_1; int member_0; } ;
struct TYPE_2__ {int tbr_percent; int tbr_rate_raw; } ;
struct ifclassq {TYPE_1__ ifcq_tbr; } ;
typedef int cqev_t ;


 int VAR_0 ;
 int FUNC_0 (struct ifclassq*) ;
 int FUNC_1 (struct ifclassq*) ;
 scalar_t__ FUNC_2 (struct ifclassq*) ;
 int FUNC_3 (struct ifclassq*,struct tb_profile*,int ) ;
 int FUNC_4 (struct ifclassq*,int ) ;

void
FUNC_5(struct ifclassq *VAR_1, cqev_t VAR_2)
{
 FUNC_1(VAR_1);

 if (!(FUNC_0(VAR_1)))
  return;

 if (FUNC_2(VAR_1)) {
  struct tb_profile VAR_3 = { VAR_1->ifcq_tbr.tbr_rate_raw,
      VAR_1->ifcq_tbr.tbr_percent, 0 };
  (void) FUNC_3(VAR_1, &VAR_3, VAR_0);
 }

 FUNC_4(VAR_1, VAR_2);
}
