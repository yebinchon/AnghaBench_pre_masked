
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct modctl {scalar_t__ mod_address; int mod_modname; struct modctl* mod_next; scalar_t__ mod_size; scalar_t__ mod_loaded; } ;
struct kmod_info {int dummy; } ;
struct TYPE_9__ {int (* dtps_destroy ) (int ,int,int ) ;} ;
struct TYPE_10__ {int dtpv_arg; TYPE_1__ dtpv_pops; int dtpv_probe_count; } ;
typedef TYPE_2__ dtrace_provider_t ;
struct TYPE_11__ {int dtpr_id; int dtpr_name; int dtpr_func; int dtpr_mod; int dtpr_arg; TYPE_2__* dtpr_provider; struct TYPE_11__* dtpr_nextmod; int * dtpr_ecb; } ;
typedef TYPE_3__ dtrace_probe_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_3__* FUNC_2 (int *,TYPE_3__*) ;
 int FUNC_3 (int *,TYPE_3__*) ;
 int VAR_7 ;
 struct modctl* VAR_8 ;
 struct modctl* FUNC_4 (struct kmod_info*) ;
 int FUNC_5 (struct modctl*) ;
 int VAR_9 ;
 TYPE_3__** VAR_10 ;
 int VAR_11 ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_12 ;
 int FUNC_10 (int ,int,int ) ;
 int FUNC_11 (int ,void*,int) ;
 int FUNC_12 (int ,TYPE_3__*) ;

__attribute__((used)) static int
FUNC_13(struct kmod_info *VAR_13)
{
 dtrace_probe_t VAR_14, *VAR_15, *VAR_16, *VAR_17;
 dtrace_provider_t *VAR_18;
        struct modctl *VAR_19 = ((void*)0);
 struct modctl *VAR_20 = ((void*)0);
 struct modctl *VAR_21 = ((void*)0);
 int VAR_22 = 0;

        FUNC_8(&VAR_11);
 FUNC_8(&VAR_12);
 FUNC_8(&VAR_7);

 if (VAR_13 == ((void*)0)) {
     VAR_22 = 1;
 }
 else {
     VAR_19 = FUNC_4(VAR_13);
     if (VAR_19 == ((void*)0))
     {
  FUNC_9(&VAR_7);
  FUNC_9(&VAR_12);
  FUNC_9(&VAR_11);
  return (-1);
     }
     VAR_19->mod_loaded = 0;
     VAR_19->mod_address = 0;
     VAR_19->mod_size = 0;
 }

 if (VAR_3 == ((void*)0)) {




          if (VAR_19 != ((void*)0))
    (void)FUNC_5(VAR_19);
   FUNC_9(&VAR_7);
   FUNC_9(&VAR_12);
   FUNC_9(&VAR_11);
   return(0);
 }


        if (VAR_22)
     VAR_21 = VAR_8;

syncloop:
 if (VAR_22)
 {

     for (VAR_20 = VAR_21; VAR_20 != ((void*)0); VAR_20=VAR_20->mod_next) {
  if (VAR_20->mod_address == 0)
      break;
     }
     if (VAR_20==((void*)0))
     {

  FUNC_9(&VAR_7);
  FUNC_9(&VAR_12);
  FUNC_9(&VAR_11);
  return(0);
     }
     else {

  VAR_21 = VAR_20->mod_next;
  VAR_19 = VAR_20;
     }
 }

 VAR_14.dtpr_mod = VAR_19->mod_modname;

 for (VAR_15 = VAR_16 = FUNC_2(VAR_3, &VAR_14);
     VAR_15 != ((void*)0); VAR_15 = VAR_15->dtpr_nextmod) {
         if (VAR_15->dtpr_ecb != ((void*)0)) {
          if (VAR_22) {

       goto syncloop;
   }

   FUNC_9(&VAR_7);
   FUNC_9(&VAR_12);
   FUNC_9(&VAR_11);

   if (VAR_6) {
    FUNC_1(VAR_0, "unloaded module '%s' had "
        "enabled probes", VAR_19->mod_modname);
   }
   return(-1);
  }
 }

 VAR_15 = VAR_16;

 for (VAR_16 = ((void*)0); VAR_15 != ((void*)0); VAR_15 = VAR_17) {
  FUNC_0(VAR_10[VAR_15->dtpr_id - 1] == VAR_15);

  VAR_10[VAR_15->dtpr_id - 1] = ((void*)0);
  VAR_15->dtpr_provider->dtpv_probe_count--;

  VAR_17 = VAR_15->dtpr_nextmod;
  FUNC_3(VAR_5, VAR_15);
  FUNC_3(VAR_3, VAR_15);
  FUNC_3(VAR_2, VAR_15);
  FUNC_3(VAR_4, VAR_15);

  if (VAR_16 == ((void*)0)) {
   VAR_16 = VAR_15;
   VAR_15->dtpr_nextmod = ((void*)0);
  } else {
   VAR_15->dtpr_nextmod = VAR_16;
   VAR_16 = VAR_15;
  }
 }






 FUNC_7();

 for (VAR_15 = VAR_16; VAR_15 != ((void*)0); VAR_15 = VAR_16) {
  VAR_16 = VAR_15->dtpr_nextmod;
  VAR_18 = VAR_15->dtpr_provider;
  VAR_18->dtpv_pops.dtps_destroy(VAR_18->dtpv_arg, VAR_15->dtpr_id,
      VAR_15->dtpr_arg);
  FUNC_6(VAR_15->dtpr_mod);
  FUNC_6(VAR_15->dtpr_func);
  FUNC_6(VAR_15->dtpr_name);
  FUNC_11(VAR_1, (void *)(uintptr_t)VAR_15->dtpr_id, 1);

  FUNC_12(VAR_9, VAR_15);
 }

 FUNC_5(VAR_19);

 if (VAR_22)
     goto syncloop;

 FUNC_9(&VAR_7);
 FUNC_9(&VAR_12);
 FUNC_9(&VAR_11);

 return(0);
}
