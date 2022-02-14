
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int ,int,int const*,unsigned int) ;
 int FUNC_2 (int ) ;

int FUNC_3(const uint8_t *VAR_2, unsigned int VAR_3)
{
    uint32_t VAR_4, VAR_5;

    if (VAR_3 < 4)
        return VAR_0;
    VAR_3 -= 3;

    VAR_5 = FUNC_0(VAR_2 + VAR_3);
    VAR_4 = FUNC_1(FUNC_2(VAR_1), 0xCE04B7U, VAR_2, VAR_3);
    if (VAR_5 != VAR_4)
        return VAR_0;

    return 0;
}
