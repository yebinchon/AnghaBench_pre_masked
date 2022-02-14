
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int64_t ;
typedef int URLContext ;
typedef int AVIOInterruptCB ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,void*,int) ;

__attribute__((used)) static int FUNC_4(URLContext *VAR_3, void *VAR_4, int VAR_5, int64_t VAR_6, AVIOInterruptCB *VAR_7)
{
    int VAR_8;
    int64_t VAR_9 = 0;

    while (1) {
        if (FUNC_2(VAR_7))
            return VAR_0;
        VAR_8 = FUNC_3(VAR_3, VAR_4, VAR_5);
        if (VAR_8 != FUNC_0(VAR_1))
            return VAR_8;
        if (VAR_6 > 0) {
            if (!VAR_9)
                VAR_9 = FUNC_1();
            else if (FUNC_1() - VAR_9 > VAR_6)
                return FUNC_0(VAR_2);
        }
    }
}
