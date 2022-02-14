
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {int p_btrace; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 struct proc* FUNC_1 (int) ;
 int FUNC_2 (struct proc*) ;

int
FUNC_3(void)
{
    struct proc *VAR_3;
    switch (VAR_1) {
    case -1:
        VAR_2 = VAR_0;
        break;
    case 0:
        break;
    default:
        VAR_3 = FUNC_1(VAR_1);
        if (VAR_3) {
            VAR_3->p_btrace = 0;
   FUNC_2(VAR_3);
        }
        break;
    }
    FUNC_0();
    return 1;
}
