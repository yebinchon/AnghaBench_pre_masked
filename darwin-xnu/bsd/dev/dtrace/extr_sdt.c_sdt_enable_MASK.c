
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_size_t ;
typedef int vm_offset_t ;
struct modctl {scalar_t__ mod_loadcnt; int mod_modname; int mod_loaded; int mod_nenabled; } ;
struct TYPE_2__ {scalar_t__ sdp_loadcnt; struct TYPE_2__* sdp_next; scalar_t__ sdp_patchpoint; int sdp_patchval; int sdp_name; struct modctl* sdp_ctl; } ;
typedef TYPE_1__ sdt_probe_t ;
typedef scalar_t__ perfCallback ;
typedef int dtrace_id_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (scalar_t__*,int *,scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int
FUNC_5(void *VAR_4, dtrace_id_t VAR_5, void *VAR_6)
{
#pragma unused(arg,id)
 sdt_probe_t *VAR_7 = VAR_6;
 struct modctl *VAR_8 = VAR_7->sdp_ctl;

 VAR_8->mod_nenabled++;





 if (!VAR_8->mod_loaded) {
  if (VAR_2) {
   FUNC_0(VAR_0, "sdt is failing for probe %s "
       "(module %s unloaded)",
       VAR_7->sdp_name, VAR_8->mod_modname);
  }
  goto err;
 }






 if (VAR_8->mod_loadcnt != VAR_7->sdp_loadcnt) {
  if (VAR_2) {
   FUNC_0(VAR_0, "sdt is failing for probe %s "
       "(module %s reloaded)",
       VAR_7->sdp_name, VAR_8->mod_modname);
  }
  goto err;
 }

 FUNC_1(&VAR_3, ((void*)0), VAR_1);
 if (VAR_3 != (perfCallback)VAR_1) {
  if (VAR_2) {
   FUNC_0(VAR_0, "sdt_enable is failing for probe %s "
       "in module %s: tempDTraceTrapHook already occupied.",
       VAR_7->sdp_name, VAR_8->mod_modname);
  }
  return (0);
 }

 while (VAR_7 != ((void*)0)) {
  (void)FUNC_4( (vm_offset_t)&VAR_7->sdp_patchval, (vm_offset_t)VAR_7->sdp_patchpoint,
                         (vm_size_t)sizeof(VAR_7->sdp_patchval));





  FUNC_2((vm_offset_t)VAR_7->sdp_patchpoint,(vm_size_t)sizeof(VAR_7->sdp_patchval), 0);
  FUNC_3((vm_offset_t)VAR_7->sdp_patchpoint,(vm_size_t)sizeof(VAR_7->sdp_patchval), 0);

  VAR_7 = VAR_7->sdp_next;
 }

err:
 return (0);
}
