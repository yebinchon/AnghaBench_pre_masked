
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int user_context; int (* error_notify_proc ) (int ,int *,int ,int,char const*,int) ;} ;
struct TYPE_5__ {int Adapter; int instance; TYPE_1__ user_proc_table; } ;
typedef TYPE_2__ diva_strace_context_t ;


 int FUNC_0 (int ,int *,int ,int,char const*,int) ;

__attribute__((used)) static void FUNC_1 (diva_strace_context_t* VAR_0,
               int VAR_1, const char* VAR_2, int VAR_3) {
 if (VAR_0->user_proc_table.error_notify_proc) {
  (*(VAR_0->user_proc_table.error_notify_proc))( VAR_0->user_proc_table.user_context,

                      &VAR_0->instance, VAR_0->Adapter,
                      VAR_1, VAR_2, VAR_3);
 }
}
