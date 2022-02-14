
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct vfe_demosaic_cfg {int abfShift; int forceAbfOn; int abfEnable; } ;
struct vfe_demosaic_abf_cfg {int maxValue; int minValue; int ratio; int lpThreshold; } ;
struct TYPE_3__ {int max; int min; int ratio; int lpThreshold; int shift; int forceOn; int enable; } ;
struct vfe_cmd_demosaic_abf_update {TYPE_1__ abfUpdate; } ;
typedef int cmdabf ;
typedef int cmd ;
struct TYPE_4__ {scalar_t__ vfebase; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_0 (struct vfe_demosaic_cfg*,int ,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int *,int) ;

void FUNC_3(struct vfe_cmd_demosaic_abf_update *VAR_3)
{
struct vfe_demosaic_cfg VAR_4;
 struct vfe_demosaic_abf_cfg VAR_5;
 uint32_t VAR_6;

 FUNC_0(&VAR_4, 0, sizeof(VAR_4));
 VAR_6 = FUNC_1(VAR_2->vfebase + VAR_1);

 VAR_4 = *((struct vfe_demosaic_cfg *)(&VAR_6));
 VAR_4.abfEnable = VAR_3->abfUpdate.enable;
 VAR_4.forceAbfOn = VAR_3->abfUpdate.forceOn;
 VAR_4.abfShift = VAR_3->abfUpdate.shift;
 FUNC_2(VAR_2->vfebase + VAR_1,
  (uint32_t *)&VAR_4, sizeof(VAR_4));

 VAR_5.lpThreshold = VAR_3->abfUpdate.lpThreshold;
 VAR_5.ratio = VAR_3->abfUpdate.ratio;
 VAR_5.minValue = VAR_3->abfUpdate.min;
 VAR_5.maxValue = VAR_3->abfUpdate.max;
 FUNC_2(VAR_2->vfebase + VAR_0,
  (uint32_t *)&VAR_5, sizeof(VAR_5));
}
