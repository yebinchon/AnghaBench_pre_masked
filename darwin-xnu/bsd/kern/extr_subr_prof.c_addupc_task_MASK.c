
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ user_addr_t ;
typedef scalar_t__ u_short ;
typedef scalar_t__ u_int ;
struct user_uprof {scalar_t__ pr_base; scalar_t__ pr_size; scalar_t__ pr_scale; struct user_uprof* pr_next; } ;
struct uprof {scalar_t__ pr_base; scalar_t__ pr_size; scalar_t__ pr_scale; struct uprof* pr_next; } ;
struct proc {int p_flag; TYPE_1__* p_stats; } ;
typedef int count ;
typedef int caddr_t ;
struct TYPE_2__ {struct user_uprof p_prof; struct user_uprof user_p_prof; } ;


 scalar_t__ FUNC_0 (short*) ;
 scalar_t__ FUNC_1 (scalar_t__,struct user_uprof*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (scalar_t__,int ,int) ;
 scalar_t__ FUNC_3 (int ,scalar_t__,int) ;
 scalar_t__ FUNC_4 (struct proc*) ;
 int FUNC_5 (struct proc*) ;

void
FUNC_6(struct proc *VAR_1, user_addr_t VAR_2, u_int VAR_3)
{
 user_addr_t VAR_4;
 u_short VAR_5;


 if ((VAR_1->p_flag & VAR_0) == 0 || VAR_3 == 0)
  return;

 if (FUNC_4(VAR_1)) {
        struct user_uprof *VAR_6;
        user_addr_t VAR_7;

        for (VAR_6 = &VAR_1->p_stats->user_p_prof; VAR_6; VAR_6 = VAR_6->pr_next) {
            VAR_4 = FUNC_1(VAR_2, VAR_6);
            VAR_7 = (VAR_6->pr_base + VAR_4);
            if (VAR_7 >= VAR_6->pr_base &&
                VAR_7 < (VAR_6->pr_size + VAR_6->pr_base)) {
                if (FUNC_2(VAR_7, (caddr_t) &VAR_5, sizeof(VAR_5)) == 0) {
                    VAR_5 += VAR_3;
                    if(FUNC_3((caddr_t) &VAR_5, VAR_7, sizeof(VAR_5)) == 0)
                        return;
                }
                VAR_1->p_stats->user_p_prof.pr_scale = 0;
                FUNC_5(VAR_1);
                break;
            }
        }
 }
 else {
        struct uprof *VAR_8;
        short *VAR_9;

        for (VAR_8 = &VAR_1->p_stats->p_prof; VAR_8; VAR_8 = VAR_8->pr_next) {
            VAR_4 = FUNC_1(VAR_2,VAR_8);
            VAR_9 = (short *)(VAR_8->pr_base + VAR_4);
            if (VAR_9 >= (short *)VAR_8->pr_base &&
                VAR_9 < (short*)(VAR_8->pr_size + VAR_8->pr_base)) {
                if (FUNC_2(FUNC_0(VAR_9), (caddr_t) &VAR_5, sizeof(VAR_5)) == 0) {
                    VAR_5 += VAR_3;
                    if(FUNC_3((caddr_t) &VAR_5, FUNC_0(VAR_9), sizeof(VAR_5)) == 0)
                        return;
                }
                VAR_1->p_stats->p_prof.pr_scale = 0;
                FUNC_5(VAR_1);
                break;
            }
        }
 }
}
