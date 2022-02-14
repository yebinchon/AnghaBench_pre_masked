
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct intel_sdvo_preferred_input_timing_args {int scaled; scalar_t__ interlace; scalar_t__ height; scalar_t__ width; scalar_t__ clock; } ;
struct intel_sdvo {TYPE_1__* sdvo_lvds_fixed_mode; scalar_t__ is_lvds; } ;
typedef int args ;
struct TYPE_2__ {scalar_t__ hdisplay; scalar_t__ vdisplay; } ;


 int VAR_0 ;
 int FUNC_0 (struct intel_sdvo*,int ,struct intel_sdvo_preferred_input_timing_args*,int) ;
 int FUNC_1 (struct intel_sdvo_preferred_input_timing_args*,int ,int) ;

__attribute__((used)) static bool
FUNC_2(struct intel_sdvo *VAR_1,
      uint16_t VAR_2,
      uint16_t VAR_3,
      uint16_t VAR_4)
{
 struct intel_sdvo_preferred_input_timing_args VAR_5;

 FUNC_1(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.clock = VAR_2;
 VAR_5.width = VAR_3;
 VAR_5.height = VAR_4;
 VAR_5.interlace = 0;

 if (VAR_1->is_lvds &&
    (VAR_1->sdvo_lvds_fixed_mode->hdisplay != VAR_3 ||
     VAR_1->sdvo_lvds_fixed_mode->vdisplay != VAR_4))
  VAR_5.scaled = 1;

 return FUNC_0(VAR_1,
        VAR_0,
        &VAR_5, sizeof(VAR_5));
}
