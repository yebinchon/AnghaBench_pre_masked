
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int64_t ;
typedef int AVIOInterruptCB ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int,int) ;

int FUNC_4(int VAR_3, int VAR_4, int64_t VAR_5, AVIOInterruptCB *VAR_6)
{
    int VAR_7;
    int64_t VAR_8 = 0;

    while (1) {
        if (FUNC_2(VAR_6))
            return VAR_0;
        VAR_7 = FUNC_3(VAR_3, VAR_4);
        if (VAR_7 != FUNC_0(VAR_1))
            return VAR_7;
        if (VAR_5 > 0) {
            if (!VAR_8)
                VAR_8 = FUNC_1();
            else if (FUNC_1() - VAR_8 > VAR_5)
                return FUNC_0(VAR_2);
        }
    }
}
