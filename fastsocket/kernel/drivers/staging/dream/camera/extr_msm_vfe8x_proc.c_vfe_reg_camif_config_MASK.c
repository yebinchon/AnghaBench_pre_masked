
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int misrEnable; int binningEnable; int irqSubSampleEnable; int busSubSampleEnable; int vfeSubSampleEnable; int syncMode; int hSyncEdge; int vSyncEdge; } ;
struct vfe_camif_cfg_data {TYPE_1__ camifCfgFromCmd; int camif2BusEnable; int camif2OutputEnable; } ;
struct VFE_CAMIFConfigType {int misrEnable; int binningEnable; int irqSubsampleEnable; int camif2busEnable; int camif2vfeEnable; int busSubsampleEnable; int vfeSubsampleEnable; int syncMode; int HSyncEdge; int VSyncEdge; } ;
typedef int cfg ;
struct TYPE_4__ {scalar_t__ vfebase; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (struct VFE_CAMIFConfigType*,int ,int) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct vfe_camif_cfg_data *VAR_2)
{
 struct VFE_CAMIFConfigType VAR_3;

 FUNC_0(&VAR_3, 0, sizeof(VAR_3));

 VAR_3.VSyncEdge =
  VAR_2->camifCfgFromCmd.vSyncEdge;

 VAR_3.HSyncEdge =
  VAR_2->camifCfgFromCmd.hSyncEdge;

 VAR_3.syncMode =
  VAR_2->camifCfgFromCmd.syncMode;

 VAR_3.vfeSubsampleEnable =
  VAR_2->camifCfgFromCmd.vfeSubSampleEnable;

 VAR_3.busSubsampleEnable =
  VAR_2->camifCfgFromCmd.busSubSampleEnable;

 VAR_3.camif2vfeEnable =
  VAR_2->camif2OutputEnable;

 VAR_3.camif2busEnable =
  VAR_2->camif2BusEnable;

 VAR_3.irqSubsampleEnable =
  VAR_2->camifCfgFromCmd.irqSubSampleEnable;

 VAR_3.binningEnable =
  VAR_2->camifCfgFromCmd.binningEnable;

 VAR_3.misrEnable =
  VAR_2->camifCfgFromCmd.misrEnable;


 FUNC_1(*((uint32_t *)&VAR_3), VAR_1->vfebase + VAR_0);
}
