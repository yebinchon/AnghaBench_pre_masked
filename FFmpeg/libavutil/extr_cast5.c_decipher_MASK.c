
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int const uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {int rounds; } ;
typedef TYPE_1__ AVCAST5 ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int const*,int const*,int) ;

__attribute__((used)) static void FUNC_6(AVCAST5* VAR_0, uint8_t* VAR_1, const uint8_t* VAR_2, uint8_t *VAR_3)
{
    uint32_t VAR_4, VAR_5, VAR_6, VAR_7;
    VAR_7 = FUNC_0(VAR_2);
    VAR_6 = FUNC_0(VAR_2 + 4);
    if (VAR_0->rounds == 16) {
        FUNC_2(VAR_7, VAR_6, 16);
        FUNC_4(VAR_6, VAR_7, 15);
        FUNC_3(VAR_7, VAR_6, 14);
        FUNC_2(VAR_6, VAR_7, 13);
    }
    FUNC_4(VAR_7, VAR_6, 12);
    FUNC_3(VAR_6, VAR_7, 11);
    FUNC_2(VAR_7, VAR_6, 10);
    FUNC_4(VAR_6, VAR_7, 9);
    FUNC_3(VAR_7, VAR_6, 8);
    FUNC_2(VAR_6, VAR_7, 7);
    FUNC_4(VAR_7, VAR_6, 6);
    FUNC_3(VAR_6, VAR_7, 5);
    FUNC_2(VAR_7, VAR_6, 4);
    FUNC_4(VAR_6, VAR_7, 3);
    FUNC_3(VAR_7, VAR_6, 2);
    FUNC_2(VAR_6, VAR_7, 1);
    if (VAR_3) {
        VAR_6 ^= FUNC_0(VAR_3);
        VAR_7 ^= FUNC_0(VAR_3 + 4);
        FUNC_5(VAR_3, VAR_2, 8);
    }
    FUNC_1(VAR_1, VAR_6);
    FUNC_1(VAR_1 + 4, VAR_7);
}
