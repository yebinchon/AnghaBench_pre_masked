
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int int64_t ;
typedef int AVIOContext ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int) ;

__attribute__((used)) static int64_t FUNC_2(AVIOContext *VAR_0, uint64_t VAR_1, int64_t VAR_2)
{
    for (;;) {
        uint64_t VAR_3 = FUNC_1(VAR_0, VAR_2);
        if (VAR_3 == VAR_1)
            return FUNC_0(VAR_0) - 8;
        else if (VAR_3 == 0)
            return -1;
        VAR_2 = -1;
    }
}
