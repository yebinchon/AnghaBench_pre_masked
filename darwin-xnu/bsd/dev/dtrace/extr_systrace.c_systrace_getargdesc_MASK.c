
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* uthread_t ;
typedef int uint64_t ;
typedef int dtrace_id_t ;
struct TYPE_5__ {char* dtargd_native; void* dtargd_ndx; } ;
typedef TYPE_2__ dtrace_argdesc_t ;
struct TYPE_4__ {int * t_dtrace_syscall_args; } ;


 void* VAR_0 ;
 scalar_t__ FUNC_0 (uintptr_t) ;
 int FUNC_1 (void*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,void*,char*,int) ;
 int FUNC_5 (int,void*,char*,int) ;

__attribute__((used)) static void
FUNC_6(void *VAR_1, dtrace_id_t VAR_2, void *VAR_3,
 dtrace_argdesc_t *VAR_4)
{
#pragma unused(arg, id)
 int VAR_5 = FUNC_1(VAR_3);
 uthread_t VAR_6 = (uthread_t)FUNC_3(FUNC_2());
 uint64_t *VAR_7 = ((void*)0);

 if (!VAR_6) {
  VAR_4->dtargd_ndx = VAR_0;
  return;
 }

 VAR_7 = VAR_6->t_dtrace_syscall_args;

 if (FUNC_0((uintptr_t)VAR_3)) {
  FUNC_4(VAR_5, VAR_4->dtargd_ndx,
   VAR_4->dtargd_native, sizeof(VAR_4->dtargd_native));
 }
 else {
  FUNC_5(VAR_5, VAR_4->dtargd_ndx,
   VAR_4->dtargd_native, sizeof(VAR_4->dtargd_native));
 }

 if (VAR_4->dtargd_native[0] == '\0')
  VAR_4->dtargd_ndx = VAR_0;
}
