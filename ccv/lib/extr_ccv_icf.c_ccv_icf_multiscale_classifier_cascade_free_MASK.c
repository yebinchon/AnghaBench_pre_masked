
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int count; TYPE_1__* cascade; } ;
typedef TYPE_2__ ccv_icf_multiscale_classifier_cascade_t ;
struct TYPE_5__ {TYPE_2__* weak_classifiers; } ;


 int FUNC_0 (TYPE_2__*) ;

void FUNC_1(ccv_icf_multiscale_classifier_cascade_t* VAR_0)
{
 int VAR_1;
 for (VAR_1 = 0; VAR_1 < VAR_0->count; VAR_1++)
  FUNC_0(VAR_0->cascade[VAR_1].weak_classifiers);
 FUNC_0(VAR_0);
}
