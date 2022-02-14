
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct retro_system_info {char* library_name; char* library_version; int need_fullpath; char* valid_extensions; } ;


 int FUNC_0 (struct retro_system_info*,int ,int) ;

void FUNC_1(
      struct retro_system_info *VAR_0)
{
   FUNC_0(VAR_0, 0, sizeof(*VAR_0));
   VAR_0->library_name = "";
   VAR_0->library_version = "";
   VAR_0->need_fullpath = 0;
   VAR_0->valid_extensions = "";
}
