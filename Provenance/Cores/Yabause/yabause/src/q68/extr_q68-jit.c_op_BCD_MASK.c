
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
typedef int Q68State ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *,int const,int ,int,int*,int) ;
 int FUNC_4 (int *,int const,int ) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_5(Q68State *VAR_8, uint32_t VAR_9)
{
    VAR_2;
    VAR_3;
    const int VAR_10 = VAR_9 & 0x4000;
    const int VAR_11 = VAR_9 & 0x0008;

    const uint16_t VAR_12 =
        (VAR_11 ? VAR_1 : VAR_0) << 3 | VAR_7;
    const uint16_t VAR_13 =
        (VAR_11 ? VAR_1 : VAR_0) << 3 | VAR_6;
    int VAR_14;
    FUNC_3(VAR_8, VAR_12, VAR_4, 0, &VAR_14, 1);
    FUNC_3(VAR_8, VAR_13, VAR_4, 1, &VAR_14, 2);

    if (VAR_10) {
        FUNC_0(VAR_5);
    } else {
        FUNC_2(VAR_5);
    }

    FUNC_4(VAR_8, VAR_13, VAR_4);
    FUNC_1(VAR_5, VAR_11 ? 18 : 6);
    return 0;
}
