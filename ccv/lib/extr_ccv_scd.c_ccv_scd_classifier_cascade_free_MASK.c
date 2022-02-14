
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int count; struct TYPE_5__* classifiers; struct TYPE_5__* features; } ;
typedef TYPE_1__ ccv_scd_stump_classifier_t ;
typedef TYPE_1__ ccv_scd_classifier_cascade_t ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(ccv_scd_classifier_cascade_t* VAR_0)
{
 int VAR_1;
 for (VAR_1 = 0; VAR_1 < VAR_0->count; VAR_1++)
 {
  ccv_scd_stump_classifier_t* VAR_2 = VAR_0->classifiers + VAR_1;
  FUNC_0(VAR_2->features);
 }
 FUNC_0(VAR_0->classifiers);
 FUNC_0(VAR_0);
}
