
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32_t ;
typedef int sys_sem_t ;
struct sswt_cb {scalar_t__ timeflag; int * psem; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int ,struct sswt_cb*) ;
 int FUNC_2 (int ,struct sswt_cb*) ;

int
FUNC_3(sys_sem_t VAR_1, u32_t VAR_2)
{
    struct sswt_cb VAR_3;

    VAR_3.psem = &VAR_1;
    VAR_3.timeflag = 0;


    if (VAR_2 > 0)

        FUNC_1(VAR_2, VAR_0, &VAR_3);
    FUNC_0(VAR_1);

    if (VAR_3.timeflag)
    {

        return 0;
    } else {

        FUNC_2(VAR_0, &VAR_3);
        return 1;
    }

}
