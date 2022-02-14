
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct vfe_cmd_chroma_suppression_config {int nn1; int mm1; int n3; int n1; int m3; int m1; int enable; } ;
struct vfe_chroma_suppress_cfg {int nn1; int mm1; int n3; int n1; int m3; int m1; } ;
typedef int cmd ;
struct TYPE_3__ {int chromaSuppressionEnable; } ;
struct TYPE_4__ {scalar_t__ vfebase; TYPE_1__ vfeModuleEnableLocal; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (struct vfe_chroma_suppress_cfg*,int ,int) ;
 int FUNC_1 (scalar_t__,int *,int) ;

void FUNC_2(struct vfe_cmd_chroma_suppression_config *VAR_2)
{
 struct vfe_chroma_suppress_cfg VAR_3;
 FUNC_0(&VAR_3, 0, sizeof(VAR_3));

 VAR_1->vfeModuleEnableLocal.chromaSuppressionEnable = VAR_2->enable;

 VAR_3.m1 = VAR_2->m1;
 VAR_3.m3 = VAR_2->m3;
 VAR_3.n1 = VAR_2->n1;
 VAR_3.n3 = VAR_2->n3;
 VAR_3.mm1 = VAR_2->mm1;
 VAR_3.nn1 = VAR_2->nn1;

 FUNC_1(VAR_1->vfebase + VAR_0,
  (uint32_t *)&VAR_3, sizeof(VAR_3));
}
