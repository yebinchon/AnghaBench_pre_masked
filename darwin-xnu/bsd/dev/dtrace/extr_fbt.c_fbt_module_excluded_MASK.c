
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct modctl {scalar_t__ mod_address; scalar_t__ mod_size; scalar_t__ mod_loaded; int mod_modname; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,char*) ;
 int FUNC_2 (struct modctl*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_3 (int ,char*) ;

int
FUNC_4(struct modctl* VAR_3)
{
 FUNC_0(!FUNC_2(VAR_3));

 if (VAR_3->mod_address == 0 || VAR_3->mod_size == 0) {
  return VAR_1;
 }

 if (VAR_3->mod_loaded == 0) {
         return VAR_1;
 }




 if (VAR_2)
  return VAR_0;
 if (FUNC_3(VAR_3->mod_modname, "AppleACPIEC") != ((void*)0))
  return VAR_1;

 if (FUNC_3(VAR_3->mod_modname, "AppleACPIPlatform") != ((void*)0))
  return VAR_1;

 if (FUNC_3(VAR_3->mod_modname, "AppleRTC") != ((void*)0))
  return VAR_1;

 if (FUNC_3(VAR_3->mod_modname, "IOACPIFamily") != ((void*)0))
  return VAR_1;

 if (FUNC_3(VAR_3->mod_modname, "AppleIntelCPUPowerManagement") != ((void*)0))
  return VAR_1;

 if (FUNC_3(VAR_3->mod_modname, "AppleProfile") != ((void*)0))
  return VAR_1;

 if (FUNC_3(VAR_3->mod_modname, "AppleIntelProfile") != ((void*)0))
  return VAR_1;

 if (FUNC_3(VAR_3->mod_modname, "AppleEFI") != ((void*)0))
  return VAR_1;
 return VAR_0;
}
