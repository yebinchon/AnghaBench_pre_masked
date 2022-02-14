
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int int8_t ;
typedef int Q68State ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int FUNC_3 (int *,int ,int ,int,int*) ;
 int FUNC_4 (int *,int ,int ,int) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static int FUNC_6(Q68State *VAR_3, uint32_t VAR_4)
{
    if (FUNC_0(VAR_4) == VAR_0) {
        return FUNC_5(VAR_3, VAR_4);
    }

    int VAR_5;
    int8_t VAR_6 = FUNC_3(VAR_3, VAR_4, VAR_2, 1, &VAR_5);
    if (VAR_5 < 0) {


        return 0;
    }

    FUNC_1();
    FUNC_2(VAR_6);
    FUNC_4(VAR_3, VAR_4, VAR_2, VAR_6 | 0x80);
    return (FUNC_0(VAR_4) == VAR_1 ? 4 : 10) + VAR_5;
}
