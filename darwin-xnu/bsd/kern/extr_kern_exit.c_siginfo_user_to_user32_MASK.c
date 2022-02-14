
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int sival_ptr; } ;
struct TYPE_9__ {int si_band; TYPE_2__ si_value; int si_addr; int si_status; int si_uid; int si_pid; int si_code; int si_errno; int si_signo; } ;
typedef TYPE_3__ user_siginfo_t ;
struct TYPE_7__ {void* sival_ptr; } ;
struct TYPE_10__ {int si_band; TYPE_1__ si_value; void* si_addr; int si_status; int si_uid; int si_pid; int si_code; int si_errno; int si_signo; } ;
typedef TYPE_4__ user32_siginfo_t ;


 void* FUNC_0 (int ,int ) ;
 int VAR_0 ;

void
FUNC_1(user_siginfo_t *VAR_1, user32_siginfo_t *VAR_2)
{
 VAR_2->si_signo = VAR_1->si_signo;
 VAR_2->si_errno = VAR_1->si_errno;
 VAR_2->si_code = VAR_1->si_code;
 VAR_2->si_pid = VAR_1->si_pid;
 VAR_2->si_uid = VAR_1->si_uid;
 VAR_2->si_status = VAR_1->si_status;
 VAR_2->si_addr = FUNC_0(VAR_0,VAR_1->si_addr);

 VAR_2->si_value.sival_ptr = FUNC_0(VAR_0,VAR_1->si_value.sival_ptr);
 VAR_2->si_band = VAR_1->si_band;
}
