
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct vfe_stats_cmd_data {int colorConversionEnable; int histAutoClearEnable; int clearHistEnable; int histEnable; int axwEnable; int autoFocusEnable; } ;
struct VFE_StatsCmdType {int colorConversionEnable; int histAutoClearEnable; int clearHistEnable; int histEnable; int axwEnable; int autoFocusEnable; } ;
typedef int stats ;
struct TYPE_2__ {scalar_t__ vfebase; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (struct VFE_StatsCmdType*,int ,int) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct vfe_stats_cmd_data *VAR_2)
{
 struct VFE_StatsCmdType VAR_3;
 FUNC_0(&VAR_3, 0, sizeof(VAR_3));

 VAR_3.autoFocusEnable = VAR_2->autoFocusEnable;
 VAR_3.axwEnable = VAR_2->axwEnable;
 VAR_3.histEnable = VAR_2->histEnable;
 VAR_3.clearHistEnable = VAR_2->clearHistEnable;
 VAR_3.histAutoClearEnable = VAR_2->histAutoClearEnable;
 VAR_3.colorConversionEnable = VAR_2->colorConversionEnable;

 FUNC_1(*((uint32_t *)&VAR_3), VAR_1->vfebase + VAR_0);
}
