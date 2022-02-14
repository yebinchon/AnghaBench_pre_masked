
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {long pending_modem_status; } ;
typedef TYPE_1__ diva_strace_context_t ;



__attribute__((used)) static int FUNC_0 (diva_strace_context_t* VAR_0, int VAR_1) {
 VAR_0->pending_modem_status |= (1L << (VAR_1-1));
 return (0);
}
