
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sfi_class_id_t ;
typedef int pset_cluster_type_t ;
typedef TYPE_1__* processor_t ;
typedef int perfcontrol_class_t ;
struct TYPE_3__ {int current_pri; int current_perfctl_class; int current_recommended_pset_type; int current_sfi_class; } ;



void
FUNC_0(processor_t VAR_0, int VAR_1, sfi_class_id_t VAR_2,
 pset_cluster_type_t VAR_3, perfcontrol_class_t VAR_4)
{
    VAR_0->current_pri = VAR_1;
    VAR_0->current_sfi_class = VAR_2;
    VAR_0->current_recommended_pset_type = VAR_3;
    VAR_0->current_perfctl_class = VAR_4;
}
