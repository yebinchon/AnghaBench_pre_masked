
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {void* in_3d; void* match_flags; void* scan_mode; void* frame_rate; void* height; void* width; } ;
typedef TYPE_1__ TV_HDMI_ON_BEST_PARAM_T ;
typedef int HDMI_INTERLACED_T ;
typedef int EDID_MODE_MATCH_FLAG_T ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,TYPE_1__*,int,int) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static int FUNC_3(uint32_t VAR_2, uint32_t VAR_3, uint32_t VAR_4,
                                           HDMI_INTERLACED_T VAR_5, EDID_MODE_MATCH_FLAG_T VAR_6,
                                           uint32_t VAR_7) {
   TV_HDMI_ON_BEST_PARAM_T VAR_8;
   int VAR_9;

   FUNC_2("[%s]", VAR_0);
   VAR_8.width = FUNC_0(VAR_2);
   VAR_8.height = FUNC_0(VAR_3);
   VAR_8.frame_rate = FUNC_0(VAR_4);
   VAR_8.scan_mode = FUNC_0(VAR_5);
   VAR_8.match_flags = FUNC_0(VAR_6);
   VAR_8.in_3d = FUNC_0(VAR_7);

   VAR_9 = FUNC_1( VAR_1, &VAR_8, sizeof(TV_HDMI_ON_BEST_PARAM_T), 1);
   return VAR_9;
}
