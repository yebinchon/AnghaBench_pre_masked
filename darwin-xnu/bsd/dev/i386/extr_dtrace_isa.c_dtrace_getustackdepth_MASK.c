
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int ebp; int uesp; int eip; } ;
struct TYPE_5__ {int rsp; int rip; } ;
struct TYPE_6__ {int rbp; TYPE_1__ isf; } ;
struct TYPE_8__ {TYPE_3__ ss_32; TYPE_2__ ss_64; } ;
typedef TYPE_4__ x86_saved_state_t ;
typedef int user_addr_t ;
typedef int * thread_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 () ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,int *,int *,int ) ;
 scalar_t__ FUNC_4 (int *,int ,int ,int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 scalar_t__ FUNC_7 (int ) ;

int
FUNC_8(void)
{
 thread_t VAR_2 = FUNC_2();
 x86_saved_state_t *VAR_3;
 user_addr_t VAR_4, VAR_5, VAR_6;
 int VAR_7 = 0;
 boolean_t VAR_8 = FUNC_7(FUNC_1());

 if (VAR_2 == ((void*)0))
  return 0;

 if (FUNC_0(VAR_0))
  return (-1);

 FUNC_6(VAR_2, VAR_1);
 VAR_3 = (x86_saved_state_t *)FUNC_5(VAR_2);
 if (VAR_3 == ((void*)0))
  return 0;

 if (VAR_8) {
  VAR_4 = VAR_3->ss_64.isf.rip;
  VAR_5 = VAR_3->ss_64.isf.rsp;
  VAR_6 = VAR_3->ss_64.rbp;
 } else {
  VAR_4 = VAR_3->ss_32.eip;
  VAR_5 = VAR_3->ss_32.uesp;
  VAR_6 = VAR_3->ss_32.ebp;
 }

 if (FUNC_3(((void*)0), ((void*)0), &VAR_4, VAR_5) == 1) {







     VAR_7++;
 }
 VAR_7 += FUNC_4(((void*)0), 0, VAR_4, VAR_6);

 return (VAR_7);
}
