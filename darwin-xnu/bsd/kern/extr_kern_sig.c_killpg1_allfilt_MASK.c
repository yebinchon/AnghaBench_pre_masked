
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct killpg1_filtargs {TYPE_1__* curproc; scalar_t__ posix; } ;
typedef TYPE_1__* proc_t ;
struct TYPE_3__ {int p_pid; int p_flag; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(proc_t VAR_1, void * VAR_2)
{
 struct killpg1_filtargs * VAR_3 = (struct killpg1_filtargs *)VAR_2;





 return (VAR_1->p_pid > 1 && !(VAR_1->p_flag & VAR_0) &&
   (VAR_3->posix ? 1 : VAR_1 != VAR_3->curproc));
}
