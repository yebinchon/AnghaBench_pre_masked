
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int64_t ;
typedef scalar_t__ int32_t ;
typedef int AVIOContext ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_4(AVIOContext *VAR_1, int32_t VAR_2)
{
    int64_t VAR_3 = FUNC_2(VAR_1);
    int32_t VAR_4, VAR_5;

    VAR_4 = FUNC_0(VAR_1);
    VAR_5 = FUNC_0(VAR_1);
    if (FUNC_3(VAR_5, VAR_2) != 0)
        return -1;
    FUNC_1(VAR_1, VAR_3 + VAR_4, VAR_0);
    return 0;
}
