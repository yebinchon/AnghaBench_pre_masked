
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct ifclassq {int dummy; } ;
struct TYPE_8__ {int fqs_throttle; int * fqs_classq; struct ifclassq* fqs_ifq; } ;
typedef TYPE_1__ fq_if_t ;
struct TYPE_9__ {int level; int set; } ;
typedef TYPE_2__ cqrq_throttle_t ;


 int VAR_0 ;
 int FUNC_0 (struct ifclassq*) ;


 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_4(fq_if_t *VAR_2, cqrq_throttle_t *VAR_3)
{
 struct ifclassq *VAR_4 = VAR_2->fqs_ifq;
 int VAR_5;

#pragma unused(ifq)

 FUNC_0(VAR_4);

 if (!VAR_3->set) {
  VAR_3->level = VAR_2->fqs_throttle;
  return (0);
 }

 if (VAR_3->level == VAR_2->fqs_throttle)
  return (VAR_0);


 VAR_5 = FUNC_3(VAR_2, VAR_1);
 switch (VAR_3->level) {
 case 129:
  FUNC_1(VAR_2, &VAR_2->fqs_classq[VAR_5]);
  break;
 case 128:
  FUNC_2(VAR_2, &VAR_2->fqs_classq[VAR_5]);
  break;
 default:
  break;
 }
 return (0);
}
