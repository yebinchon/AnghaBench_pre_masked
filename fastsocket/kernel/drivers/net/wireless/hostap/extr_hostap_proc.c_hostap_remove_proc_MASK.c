
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* proc; TYPE_1__* ddev; } ;
typedef TYPE_2__ local_info_t ;
struct TYPE_9__ {char* name; } ;
struct TYPE_7__ {int name; } ;


 TYPE_3__* VAR_0 ;
 int FUNC_0 (char*,TYPE_3__*) ;
 int FUNC_1 (int ,TYPE_3__*) ;

void FUNC_2(local_info_t *VAR_1)
{



 if (VAR_1->proc != ((void*)0)) {

  FUNC_0("scan_results", VAR_1->proc);




  FUNC_0("pda", VAR_1->proc);
  FUNC_0("aux_dump", VAR_1->proc);
  FUNC_0("wds", VAR_1->proc);
  FUNC_0("stats", VAR_1->proc);
  FUNC_0("bss_list", VAR_1->proc);
  FUNC_0("crypt", VAR_1->proc);

  FUNC_0("debug", VAR_1->proc);

  if (VAR_0 != ((void*)0))
   FUNC_0(VAR_1->proc->name, VAR_0);
 }

}
