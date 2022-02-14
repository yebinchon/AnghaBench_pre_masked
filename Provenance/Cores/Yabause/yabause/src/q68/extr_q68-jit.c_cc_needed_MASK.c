
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const uint16_t ;
typedef int Q68State ;


 int const FUNC_0 (int *,int ) ;
 int FUNC_1 (int const) ;
 int VAR_0 ;

__attribute__((used)) static unsigned int FUNC_2(Q68State *VAR_1, uint16_t VAR_2)
{
    const uint16_t VAR_3 = FUNC_0(VAR_1, VAR_0);
    const unsigned int VAR_4 = FUNC_1(VAR_2) & 0x1F;
    const unsigned int VAR_5 = (FUNC_1(VAR_3) >> 8) & 0x1F;
    const unsigned int VAR_6 = FUNC_1(VAR_3) & 0x1F;






    return VAR_4 & ~(~VAR_5 & VAR_6);
}
