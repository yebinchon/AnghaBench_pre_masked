
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tty {struct session* t_session; } ;
struct session {int dummy; } ;
typedef TYPE_1__* proc_t ;
struct TYPE_3__ {int p_flag; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(proc_t VAR_1, struct tty *VAR_2, struct session *VAR_3)
{
 return(VAR_3 == VAR_2->t_session && VAR_1->p_flag & VAR_0);

}
