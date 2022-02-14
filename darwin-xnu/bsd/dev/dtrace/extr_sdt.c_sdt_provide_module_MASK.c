
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct modctl {int mod_flags; } ;
struct TYPE_3__ {struct TYPE_3__* sdpd_next; scalar_t__ sdpd_func; scalar_t__ sdpd_name; } ;
typedef TYPE_1__ sdt_probedesc_t ;
struct TYPE_4__ {TYPE_1__* sdt_probes; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct modctl*) ;
 scalar_t__ FUNC_3 (struct modctl*) ;
 int FUNC_4 (void*,int *) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 TYPE_2__ VAR_5 ;
 int FUNC_5 (void*,int) ;
 int VAR_6 ;
 int FUNC_6 (scalar_t__) ;

void
FUNC_7(void *VAR_7, struct modctl *VAR_8)
{
#pragma unused(arg)
 FUNC_0(VAR_8 != ((void*)0));
 FUNC_0(VAR_3 != VAR_0);
 FUNC_1(&VAR_6, VAR_1);

 if (FUNC_3(VAR_8))
  return;

 if (FUNC_2(VAR_8)) {
  FUNC_4(VAR_7, &VAR_4);

  sdt_probedesc_t *VAR_9 = VAR_5.sdt_probes;
  while (VAR_9) {
   sdt_probedesc_t *VAR_10 = VAR_9;
   FUNC_5((void *)VAR_9->sdpd_name, FUNC_6(VAR_9->sdpd_name) + 1);
   FUNC_5((void *)VAR_9->sdpd_func, FUNC_6(VAR_9->sdpd_func) + 1);
   VAR_9 = VAR_9->sdpd_next;
   FUNC_5((void *)VAR_10, sizeof(sdt_probedesc_t));
  }
  VAR_5.sdt_probes = ((void*)0);
 } else {



 }


 VAR_8->mod_flags |= VAR_2;
}
