
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int count; struct TYPE_4__* stage_classifier; struct TYPE_4__* alpha; struct TYPE_4__* feature; } ;
typedef TYPE_1__ ccv_bbf_classifier_cascade_t ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(ccv_bbf_classifier_cascade_t* VAR_0)
{
 int VAR_1;
 for (VAR_1 = 0; VAR_1 < VAR_0->count; ++VAR_1)
 {
  FUNC_0(VAR_0->stage_classifier[VAR_1].feature);
  FUNC_0(VAR_0->stage_classifier[VAR_1].alpha);
 }
 FUNC_0(VAR_0->stage_classifier);
 FUNC_0(VAR_0);
}
