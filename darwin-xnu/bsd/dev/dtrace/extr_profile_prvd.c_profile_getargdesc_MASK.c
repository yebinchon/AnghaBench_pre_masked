
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int prof_kind; } ;
typedef TYPE_1__ profile_probe_t ;
typedef int dtrace_id_t ;
struct TYPE_5__ {int dtargd_ndx; int dtargd_native; } ;
typedef TYPE_2__ dtrace_argdesc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char const*,int ) ;

__attribute__((used)) static void
FUNC_1(void *VAR_3, dtrace_id_t VAR_4, void *VAR_5, dtrace_argdesc_t *VAR_6)
{
#pragma unused(arg, id)
 profile_probe_t *VAR_7 = VAR_5;
 const char *VAR_8 = ((void*)0);
 switch (VAR_6->dtargd_ndx) {
  case 0:
   VAR_8 = "void*";
   break;
  case 1:
   VAR_8 = "user_addr_t";
   break;
  case 2:
   if (VAR_7->prof_kind == VAR_2) {
    VAR_8 = "hrtime_t";
   }
   break;
 }
 if (VAR_8) {
  FUNC_0(VAR_6->dtargd_native, VAR_8, VAR_1);
 }
 else {
  VAR_6->dtargd_ndx = VAR_0;
 }
}
