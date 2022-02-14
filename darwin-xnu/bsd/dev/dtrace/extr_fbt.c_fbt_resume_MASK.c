
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_size_t ;
typedef int vm_offset_t ;
struct modctl {scalar_t__ mod_nenabled; scalar_t__ mod_loadcnt; int mod_modname; int mod_loaded; } ;
typedef scalar_t__ perfCallback ;
struct TYPE_2__ {scalar_t__ fbtp_loadcnt; scalar_t__ fbtp_patchval; scalar_t__ fbtp_currentval; scalar_t__ fbtp_patchpoint; int fbtp_name; struct modctl* fbtp_ctl; struct TYPE_2__* fbtp_next; } ;
typedef TYPE_1__ fbt_probe_t ;
typedef int dtrace_id_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int ,int ) ;
 int FUNC_2 (scalar_t__*,int *,scalar_t__) ;
 int FUNC_3 () ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ,int) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void
FUNC_7(void *VAR_4, dtrace_id_t VAR_5, void *VAR_6)
{
#pragma unused(arg,id)
 fbt_probe_t *VAR_7 = VAR_6;
 struct modctl *VAR_8 = ((void*)0);

 for (; VAR_7 != ((void*)0); VAR_7 = VAR_7->fbtp_next) {
     VAR_8 = VAR_7->fbtp_ctl;

     FUNC_0(VAR_8->mod_nenabled > 0);
     if (!VAR_8->mod_loaded || (VAR_8->mod_loadcnt != VAR_7->fbtp_loadcnt))
  continue;

     FUNC_2(&VAR_3, ((void*)0), VAR_1);
     if (VAR_3 != (perfCallback)VAR_1) {
  if (VAR_2) {
   FUNC_1(VAR_0, "fbt_resume is failing for probe %s "
       "in module %s: tempDTraceTrapHook already occupied.",
       VAR_7->fbtp_name, VAR_8->mod_modname);
  }
  return;
     }

     (void)FUNC_6( (vm_offset_t)&VAR_7->fbtp_patchval, (vm_offset_t)VAR_7->fbtp_patchpoint,
        sizeof(VAR_7->fbtp_patchval));




  FUNC_4((vm_offset_t)VAR_7->fbtp_patchpoint,(vm_size_t)sizeof(VAR_7->fbtp_patchval), 0);
  FUNC_5((vm_offset_t)VAR_7->fbtp_patchpoint,(vm_size_t)sizeof(VAR_7->fbtp_patchval), 0);

       VAR_7->fbtp_currentval = VAR_7->fbtp_patchval;
 }

 FUNC_3();
}
