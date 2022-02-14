
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_size_t ;
typedef int vm_offset_t ;
struct modctl {scalar_t__ mod_nenabled; scalar_t__ mod_loadcnt; int mod_loaded; } ;
struct TYPE_2__ {scalar_t__ fbtp_loadcnt; scalar_t__ fbtp_savedval; scalar_t__ fbtp_currentval; scalar_t__ fbtp_patchpoint; struct modctl* fbtp_ctl; struct TYPE_2__* fbtp_next; } ;
typedef TYPE_1__ fbt_probe_t ;
typedef int dtrace_id_t ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_5(void *VAR_0, dtrace_id_t VAR_1, void *VAR_2)
{
#pragma unused(arg,id)
 fbt_probe_t *VAR_3 = VAR_2;
 struct modctl *VAR_4 = ((void*)0);

 for (; VAR_3 != ((void*)0); VAR_3 = VAR_3->fbtp_next) {
     VAR_4 = VAR_3->fbtp_ctl;

     FUNC_0(VAR_4->mod_nenabled > 0);
     if (!VAR_4->mod_loaded || (VAR_4->mod_loadcnt != VAR_3->fbtp_loadcnt))
  continue;

     (void)FUNC_4( (vm_offset_t)&VAR_3->fbtp_savedval, (vm_offset_t)VAR_3->fbtp_patchpoint,
        sizeof(VAR_3->fbtp_savedval));





  FUNC_2((vm_offset_t)VAR_3->fbtp_patchpoint,(vm_size_t)sizeof(VAR_3->fbtp_savedval), 0);
  FUNC_3((vm_offset_t)VAR_3->fbtp_patchpoint,(vm_size_t)sizeof(VAR_3->fbtp_savedval), 0);

  VAR_3->fbtp_currentval = VAR_3->fbtp_savedval;
 }

 FUNC_1();
}
