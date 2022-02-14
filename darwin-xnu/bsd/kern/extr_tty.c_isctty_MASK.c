
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct tty {struct session* t_session; } ;
struct session {int dummy; } ;
typedef TYPE_1__* proc_t ;
struct TYPE_4__ {int p_flag; } ;


 int VAR_0 ;
 struct session* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct session*) ;

__attribute__((used)) static int
FUNC_2(proc_t VAR_1, struct tty *VAR_2)
{
 int VAR_3;
 struct session * VAR_4;

 VAR_4 = FUNC_0(VAR_1);
 VAR_3 = (VAR_4 == VAR_2->t_session && VAR_1->p_flag & VAR_0);
 FUNC_1(VAR_4);
 return(VAR_3);
}
