
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_size_t ;
typedef int vm_offset_t ;
struct modctl {scalar_t__ mod_loadcnt; int mod_loaded; int mod_nenabled; } ;
struct TYPE_2__ {scalar_t__ sdp_loadcnt; struct TYPE_2__* sdp_next; scalar_t__ sdp_patchpoint; int sdp_savedval; struct modctl* sdp_ctl; } ;
typedef TYPE_1__ sdt_probe_t ;
typedef int dtrace_id_t ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_3(void *VAR_0, dtrace_id_t VAR_1, void *VAR_2)
{
#pragma unused(arg,id)
 sdt_probe_t *VAR_3 = VAR_2;
 struct modctl *VAR_4 = VAR_3->sdp_ctl;

 VAR_4->mod_nenabled--;

 if (!VAR_4->mod_loaded || VAR_4->mod_loadcnt != VAR_3->sdp_loadcnt)
  goto err;

 while (VAR_3 != ((void*)0)) {
  (void)FUNC_2( (vm_offset_t)&VAR_3->sdp_savedval, (vm_offset_t)VAR_3->sdp_patchpoint,
                         (vm_size_t)sizeof(VAR_3->sdp_savedval));




  FUNC_0((vm_offset_t)VAR_3->sdp_patchpoint,(vm_size_t)sizeof(VAR_3->sdp_savedval), 0);
  FUNC_1((vm_offset_t)VAR_3->sdp_patchpoint,(vm_size_t)sizeof(VAR_3->sdp_savedval), 0);
  VAR_3 = VAR_3->sdp_next;
 }

err:
 ;
}
