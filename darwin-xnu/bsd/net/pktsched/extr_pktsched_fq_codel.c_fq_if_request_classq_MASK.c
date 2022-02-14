
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct ifclassq {scalar_t__ ifcq_disc; } ;
struct TYPE_7__ {int fqs_ifq; } ;
typedef TYPE_1__ fq_if_t ;
typedef int cqrq_throttle_t ;
typedef int cqrq_t ;
typedef int cqrq_stat_sc_t ;
typedef int cqrq_purge_sc_t ;
typedef int cqev_t ;







 int FUNC_0 (int ) ;
 int FUNC_1 (struct ifclassq*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (TYPE_1__*,int *) ;

int
FUNC_7(struct ifclassq *VAR_0, cqrq_t VAR_1, void *VAR_2)
{
 int VAR_3 = 0;
 fq_if_t *VAR_4 = (fq_if_t *)VAR_0->ifcq_disc;

 FUNC_1(VAR_0);




 FUNC_0(VAR_4->fqs_ifq);
 switch (VAR_1) {
 case 131:
  FUNC_3(VAR_4);
  break;
 case 130:
  FUNC_4(VAR_4, (cqrq_purge_sc_t *)VAR_2);
  break;
 case 132:
  FUNC_2(VAR_4, (cqev_t)VAR_2);
  break;
 case 128:
  FUNC_6(VAR_4, (cqrq_throttle_t *)VAR_2);
  break;
 case 129:
  FUNC_5(VAR_4, (cqrq_stat_sc_t *)VAR_2);
  break;
 }
 return (VAR_3);
}
