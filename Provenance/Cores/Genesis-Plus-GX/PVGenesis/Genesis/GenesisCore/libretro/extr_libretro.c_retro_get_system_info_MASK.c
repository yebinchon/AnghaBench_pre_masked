
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct retro_system_info {char* library_name; char* library_version; char* valid_extensions; int block_extract; int need_fullpath; } ;



void FUNC_0(struct retro_system_info *VAR_0)
{
   VAR_0->library_name = "Genesis Plus GX";
   VAR_0->library_version = "v1.7.4";
   VAR_0->valid_extensions = "md|smd|bin|cue|gen|zip|MD|SMD|bin|iso|ISO|CUE|GEN|ZIP|sms|SMS|gg|GG|sg|SG";
   VAR_0->block_extract = 0;
   VAR_0->need_fullpath = 1;
}
