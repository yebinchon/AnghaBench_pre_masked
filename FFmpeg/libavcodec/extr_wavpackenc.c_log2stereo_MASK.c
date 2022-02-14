
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int int32_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int,int *) ;

__attribute__((used)) static uint32_t FUNC_2(int32_t *VAR_1, int32_t *VAR_2,
                           int VAR_3, int VAR_4)
{
    uint32_t VAR_5 = 0;
    while (VAR_3--) {
        if (FUNC_1(FUNC_0(*VAR_1++), VAR_4, &VAR_5) ||
            FUNC_1(FUNC_0(*VAR_2++), VAR_4, &VAR_5))
            return VAR_0;
    }
    return VAR_5;
}
