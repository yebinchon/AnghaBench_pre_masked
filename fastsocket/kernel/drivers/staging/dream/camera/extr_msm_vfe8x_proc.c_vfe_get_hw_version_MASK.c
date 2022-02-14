
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct vfe_hw_ver {int majorVersion; int minorVersion; int coreVersion; } ;
struct vfe_cmd_hw_version {int majorVersion; int minorVersion; int coreVersion; } ;
struct TYPE_2__ {scalar_t__ vfebase; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (scalar_t__) ;

void FUNC_1(struct vfe_cmd_hw_version *VAR_2)
{
 uint32_t VAR_3;
 struct vfe_hw_ver VAR_4;

 VAR_3 = FUNC_0(VAR_1->vfebase + VAR_0);

 VAR_4 = *((struct vfe_hw_ver *)&VAR_3);

 VAR_2->coreVersion = VAR_4.coreVersion;
 VAR_2->minorVersion = VAR_4.minorVersion;
 VAR_2->majorVersion = VAR_4.majorVersion;
}
