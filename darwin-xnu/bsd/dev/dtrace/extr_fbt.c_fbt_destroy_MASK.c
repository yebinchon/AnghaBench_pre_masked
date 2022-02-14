
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* fbtp_next; struct TYPE_4__* fbtp_hashnext; int fbtp_patchpoint; } ;
typedef TYPE_1__ fbt_probe_t ;
typedef int dtrace_id_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_1__** VAR_0 ;
 int FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_3(void *VAR_1, dtrace_id_t VAR_2, void *VAR_3)
{
#pragma unused(arg,id)
 fbt_probe_t *VAR_4 = VAR_3, *VAR_5, *VAR_6, *VAR_7;
 int VAR_8;

 do {



  VAR_8 = FUNC_1(VAR_4->fbtp_patchpoint);
  VAR_7 = ((void*)0);
  VAR_6 = VAR_0[VAR_8];

  while (VAR_6 != VAR_4) {
   FUNC_0(VAR_6 != ((void*)0));
   VAR_7 = VAR_6;
   VAR_6 = VAR_6->fbtp_hashnext;
  }

  if (VAR_7 != ((void*)0)) {
   VAR_7->fbtp_hashnext = VAR_4->fbtp_hashnext;
  } else {
   VAR_0[VAR_8] = VAR_4->fbtp_hashnext;
  }

  VAR_5 = VAR_4->fbtp_next;
  FUNC_2(VAR_4, sizeof (fbt_probe_t));

  VAR_4 = VAR_5;
 } while (VAR_4 != ((void*)0));
}
