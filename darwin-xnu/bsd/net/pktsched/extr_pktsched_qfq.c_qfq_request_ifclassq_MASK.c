
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qfq_if {int dummy; } ;
struct ifclassq {scalar_t__ ifcq_disc; } ;
typedef int cqrq_throttle_t ;
typedef int cqrq_t ;
typedef int cqrq_stat_sc_t ;
typedef int cqrq_purge_sc_t ;
typedef int cqev_t ;







 int FUNC_0 (struct ifclassq*) ;
 int FUNC_1 (struct qfq_if*,int ) ;
 int FUNC_2 (struct qfq_if*) ;
 int FUNC_3 (struct qfq_if*,int *) ;
 int FUNC_4 (struct qfq_if*,int *) ;
 int FUNC_5 (struct qfq_if*,int *) ;

__attribute__((used)) static int
FUNC_6(struct ifclassq *VAR_0, cqrq_t VAR_1, void *VAR_2)
{
 struct qfq_if *VAR_3 = (struct qfq_if *)VAR_0->ifcq_disc;
 int VAR_4 = 0;

 FUNC_0(VAR_0);

 switch (VAR_1) {
 case 131:
  FUNC_2(VAR_3);
  break;

 case 130:
  FUNC_3(VAR_3, (cqrq_purge_sc_t *)VAR_2);
  break;

 case 132:
  FUNC_1(VAR_3, (cqev_t)VAR_2);
  break;

 case 128:
  VAR_4 = FUNC_5(VAR_3, (cqrq_throttle_t *)VAR_2);
  break;
 case 129:
  VAR_4 = FUNC_4(VAR_3, (cqrq_stat_sc_t *)VAR_2);
  break;
 }
 return (VAR_4);
}
