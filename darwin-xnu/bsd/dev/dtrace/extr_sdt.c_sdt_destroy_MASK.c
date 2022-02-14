
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct module {int sdt_nprobes; } ;
struct modctl {scalar_t__ mod_loadcnt; scalar_t__ mod_mp; scalar_t__ mod_loaded; } ;
struct TYPE_4__ {scalar_t__ sdp_loadcnt; int sdp_namelen; struct TYPE_4__* sdp_next; struct TYPE_4__* sdp_name; struct TYPE_4__* sdp_hashnext; int sdp_patchpoint; struct modctl* sdp_ctl; } ;
typedef TYPE_1__ sdt_probe_t ;
typedef int dtrace_id_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int) ;
 TYPE_1__** VAR_0 ;

__attribute__((used)) static void
FUNC_3(void *VAR_1, dtrace_id_t VAR_2, void *VAR_3)
{
#pragma unused(arg,id)
 sdt_probe_t *VAR_4 = VAR_3, *VAR_5, *VAR_6, *VAR_7;
 int VAR_8;





 struct modctl *VAR_9 = VAR_4->sdp_ctl;

 if (VAR_9 != ((void*)0) && VAR_9->mod_loadcnt == VAR_4->sdp_loadcnt) {
  if ((VAR_9->mod_loadcnt == VAR_4->sdp_loadcnt &&
      VAR_9->mod_loaded)) {
   ((struct module *)(VAR_9->mod_mp))->sdt_nprobes--;
  }
 }


 while (VAR_4 != ((void*)0)) {
  VAR_5 = VAR_4;




  VAR_8 = FUNC_1(VAR_4->sdp_patchpoint);
  VAR_6 = ((void*)0);
  VAR_7 = VAR_0[VAR_8];

  while (VAR_7 != VAR_4) {
   FUNC_0(VAR_7 != ((void*)0));
   VAR_6 = VAR_7;
   VAR_7 = VAR_7->sdp_hashnext;
  }

  if (VAR_6 != ((void*)0)) {
   VAR_6->sdp_hashnext = VAR_4->sdp_hashnext;
  } else {
   VAR_0[VAR_8] = VAR_4->sdp_hashnext;
  }

  FUNC_2(VAR_4->sdp_name, VAR_4->sdp_namelen);
  VAR_4 = VAR_4->sdp_next;
  FUNC_2(VAR_5, sizeof (sdt_probe_t));
 }
}
