
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int Q68State ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int,int) ;
 int VAR_2 ;
 int FUNC_2 (int *,int) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_3(Q68State *VAR_5, uint32_t VAR_6)
{
    VAR_0;
    VAR_1;
    const int VAR_7 = VAR_6 & 0xF8;

    if (VAR_7 == 0x40) {
        FUNC_1(VAR_2, VAR_3*4, VAR_4*4);
    } else if (VAR_7 == 0x48) {
        FUNC_1(VAR_2, (8+VAR_3)*4, (8+VAR_4)*4);
    } else if (VAR_7 == 0x88) {
        FUNC_1(VAR_2, VAR_3*4, (8+VAR_4)*4);
    } else {
        return FUNC_2(VAR_5, VAR_6);
    }
    FUNC_0(VAR_2, 6);
    return 0;
}
