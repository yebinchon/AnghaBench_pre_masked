
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int sival_ptr; } ;
struct TYPE_9__ {int * pad; int si_band; TYPE_2__ si_value; int si_addr; int si_status; int si_uid; int si_pid; int si_code; int si_errno; int si_signo; } ;
typedef TYPE_3__ user_siginfo_t ;
struct TYPE_7__ {int sival_ptr; } ;
struct TYPE_10__ {int * __pad; int si_band; TYPE_1__ si_value; int si_addr; int si_status; int si_uid; int si_pid; int si_code; int si_errno; int si_signo; } ;
typedef TYPE_4__ user64_siginfo_t ;



__attribute__((used)) static void
FUNC_0(user_siginfo_t *VAR_0, user64_siginfo_t *VAR_1)
{
 VAR_1->si_signo = VAR_0->si_signo;
 VAR_1->si_errno = VAR_0->si_errno;
 VAR_1->si_code = VAR_0->si_code;
 VAR_1->si_pid = VAR_0->si_pid;
 VAR_1->si_uid = VAR_0->si_uid;
 VAR_1->si_status = VAR_0->si_status;
 VAR_1->si_addr = VAR_0->si_addr;
 VAR_1->si_value.sival_ptr = VAR_0->si_value.sival_ptr;
 VAR_1->si_band = VAR_0->si_band;
 VAR_1->__pad[0] = VAR_0->pad[0];
}
