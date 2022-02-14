
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int64_t ;
typedef int AVIOInterruptCB ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *) ;

int FUNC_5(int64_t VAR_3, AVIOInterruptCB *VAR_4)
{
    int64_t VAR_5 = FUNC_2();

    while (1) {
        int64_t VAR_6;

        if (FUNC_4(VAR_4))
            return VAR_0;

        VAR_6 = VAR_3 - (FUNC_2() - VAR_5);
        if (VAR_6 <= 0)
            return FUNC_0(VAR_1);

        FUNC_3(FUNC_1(VAR_6, VAR_2 * 1000));
    }
}
