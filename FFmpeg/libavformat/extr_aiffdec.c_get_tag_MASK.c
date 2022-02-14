
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int AVIOContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(AVIOContext *VAR_1, uint32_t * VAR_2)
{
    int VAR_3;

    if (FUNC_1(VAR_1))
        return FUNC_0(VAR_0);

    *VAR_2 = FUNC_3(VAR_1);
    VAR_3 = FUNC_2(VAR_1);

    if (VAR_3 < 0)
        VAR_3 = 0x7fffffff;

    return VAR_3;
}
