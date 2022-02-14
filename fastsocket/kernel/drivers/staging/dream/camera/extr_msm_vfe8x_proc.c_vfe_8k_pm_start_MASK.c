
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vfe_cmd_bus_pm_start {scalar_t__ output2YWrPmEnable; scalar_t__ output2CbcrWrPmEnable; scalar_t__ output1YWrPmEnable; scalar_t__ output1CbcrWrPmEnable; } ;
struct TYPE_6__ {void* pmEnabled; } ;
struct TYPE_5__ {void* pmEnabled; } ;
struct TYPE_7__ {scalar_t__ encYWrPathEn; scalar_t__ encCbcrWrPathEn; scalar_t__ viewYWrPathEn; scalar_t__ viewCbcrWrPathEn; } ;
struct TYPE_8__ {scalar_t__ vfebase; TYPE_2__ encPath; TYPE_1__ viewPath; TYPE_3__ vfeBusConfigLocal; } ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_4__* VAR_3 ;
 int FUNC_0 (struct vfe_cmd_bus_pm_start*) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct vfe_cmd_bus_pm_start *VAR_4)
{
 VAR_4->output1CbcrWrPmEnable = VAR_3->vfeBusConfigLocal.viewCbcrWrPathEn;
 VAR_4->output1YWrPmEnable = VAR_3->vfeBusConfigLocal.viewYWrPathEn;
 VAR_4->output2CbcrWrPmEnable = VAR_3->vfeBusConfigLocal.encCbcrWrPathEn;
 VAR_4->output2YWrPmEnable = VAR_3->vfeBusConfigLocal.encYWrPathEn;

 if (VAR_4->output1CbcrWrPmEnable || VAR_4->output1YWrPmEnable)
  VAR_3->viewPath.pmEnabled = VAR_0;

 if (VAR_4->output2CbcrWrPmEnable || VAR_4->output2YWrPmEnable)
  VAR_3->encPath.pmEnabled = VAR_0;

 FUNC_0(VAR_4);

 FUNC_1(VAR_2, VAR_3->vfebase + VAR_1);
}
