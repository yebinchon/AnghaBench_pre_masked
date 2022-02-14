
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct retro_system_info {scalar_t__ valid_extensions; scalar_t__ library_version; scalar_t__ library_name; } ;


 int FUNC_0 (void*) ;
 int FUNC_1 (struct retro_system_info*,int ,int) ;

void FUNC_2(struct retro_system_info *VAR_0)
{
   if (!VAR_0)
      return;

   FUNC_0((void*)VAR_0->library_name);
   FUNC_0((void*)VAR_0->library_version);
   FUNC_0((void*)VAR_0->valid_extensions);
   FUNC_1(VAR_0, 0, sizeof(*VAR_0));
}
