
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int burst_phase; int bleed; int fringing; int artifacts; int resolution; int sharpness; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (char*,int *) ;
 scalar_t__ FUNC_1 (char*,char*) ;

int FUNC_2(char *VAR_2, char *VAR_3)
{
 if (FUNC_1(VAR_2, "FILTER_NTSC_SHARPNESS") == 0)
  return FUNC_0(VAR_3, &VAR_1.sharpness);
 else if (FUNC_1(VAR_2, "FILTER_NTSC_RESOLUTION") == 0)
  return FUNC_0(VAR_3, &VAR_1.resolution);
 else if (FUNC_1(VAR_2, "FILTER_NTSC_ARTIFACTS") == 0)
  return FUNC_0(VAR_3, &VAR_1.artifacts);
 else if (FUNC_1(VAR_2, "FILTER_NTSC_FRINGING") == 0)
  return FUNC_0(VAR_3, &VAR_1.fringing);
 else if (FUNC_1(VAR_2, "FILTER_NTSC_BLEED") == 0)
  return FUNC_0(VAR_3, &VAR_1.bleed);
 else if (FUNC_1(VAR_2, "FILTER_NTSC_BURST_PHASE") == 0)
  return FUNC_0(VAR_3, &VAR_1.burst_phase);
 else
  return VAR_0;
}
