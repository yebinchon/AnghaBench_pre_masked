
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (int,int ,scalar_t__) ;
 int FUNC_1 (int *,int*,int) ;

__attribute__((used)) static uint8_t *FUNC_2(uint8_t *VAR_2, int *VAR_3, int VAR_4)
{
    unsigned int VAR_5 = FUNC_0(VAR_4, 0, VAR_0 - 1);

    VAR_2 += (VAR_5 * VAR_1) << 4;

    if (VAR_3[VAR_5] != VAR_4)
        FUNC_1(VAR_2, &VAR_3[VAR_5], VAR_4);

    return VAR_2;
}
