
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct retro_system_info {char* library_name; char* valid_extensions; int need_fullpath; int library_version; } ;


 int VAR_0 ;
 int FUNC_0 (struct retro_system_info*,int ,int) ;

void FUNC_1(struct retro_system_info *VAR_1)
{
 FUNC_0(VAR_1, 0, sizeof(*VAR_1));
 VAR_1->library_name = "PicoDrive";
 VAR_1->library_version = VAR_0;
 VAR_1->valid_extensions = "bin|gen|smd|md|32x|cue|iso|sms";
 VAR_1->need_fullpath = 1;
}
