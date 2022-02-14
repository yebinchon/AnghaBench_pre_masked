
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;

__attribute__((used)) static bool FUNC_2(int VAR_1)
{
    if (VAR_1 == 0) {
        return !FUNC_0();
    }





    int VAR_2 = (VAR_1 + VAR_0 - 1) / VAR_0;
    while (VAR_2-- > 0) {
        if (!FUNC_0()) {
            return 1;
        }
        FUNC_1(1);
    }
    return 0;
}
