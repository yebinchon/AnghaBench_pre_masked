
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int base_width; float aspect_ratio; int max_height; int max_width; int base_height; } ;
struct TYPE_7__ {int fps; int sample_rate; } ;
struct retro_system_av_info {TYPE_1__ geometry; TYPE_3__ timing; } ;
struct TYPE_6__ {scalar_t__ pal; } ;
struct TYPE_8__ {TYPE_2__ m; } ;


 TYPE_4__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct retro_system_av_info*,int ,int) ;
 int VAR_3 ;

void FUNC_1(struct retro_system_av_info *VAR_4)
{
 FUNC_0(VAR_4, 0, sizeof(*VAR_4));
 VAR_4->timing.fps = VAR_0.m.pal ? 50 : 60;
 VAR_4->timing.sample_rate = 44100;
 VAR_4->geometry.base_width = 320;
 VAR_4->geometry.base_height = VAR_3;
 VAR_4->geometry.max_width = VAR_2;
 VAR_4->geometry.max_height = VAR_1;
 VAR_4->geometry.aspect_ratio = 0.0f;
}
