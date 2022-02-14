
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int xmb_color_theme; } ;
typedef TYPE_1__ video_frame_info_t ;
 float* VAR_0 ;
 float* VAR_1 ;
 float* VAR_2 ;
 float* VAR_3 ;
 float* VAR_4 ;
 float* VAR_5 ;
 float* VAR_6 ;
 float* VAR_7 ;
 float* VAR_8 ;
 float* VAR_9 ;
 float* VAR_10 ;
 float* VAR_11 ;

__attribute__((used)) static float *FUNC_0(video_frame_info_t *VAR_12)
{
   switch (VAR_12->xmb_color_theme)
   {
      case 137:
         return &VAR_2[0];
      case 132:
         return &VAR_7[0];
      case 135:
         return &VAR_4[0];
      case 136:
         return &VAR_3[0];
      case 139:
         return &VAR_0[0];
      case 129:
         return &VAR_10[0];
      case 128:
         return &VAR_11[0];
      case 138:
         return &VAR_1[0];
      case 133:
         return &VAR_6[0];
      case 131:
         return &VAR_8[0];
      case 130:
         return &VAR_9[0];
      case 134:
      default:
         break;
   }

   return &VAR_5[0];
}
