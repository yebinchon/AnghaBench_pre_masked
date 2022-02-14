
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int* p; } ;
struct TYPE_3__ {int* p; } ;
typedef int DWORD ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (int*,int*,int*,int) ;
 scalar_t__ FUNC_1 (int*,int*,int) ;
 int FUNC_2 (int*,int*,int) ;
 int FUNC_3 (int*,int) ;
 int FUNC_4 (int*,int) ;
 int FUNC_5 (int*,int*,int) ;
 int FUNC_6 (int*,int*,int*,int) ;
 int FUNC_7 (int*,int*,int*,int) ;

void FUNC_8(DWORD *VAR_3, DWORD *VAR_4, uint32_t VAR_5)
{
    DWORD VAR_6[VAR_0];
    DWORD VAR_7[VAR_0 + 1];
    DWORD VAR_8[VAR_0 + 1];
    DWORD *VAR_9;

    if (VAR_5 == VAR_0) {
        VAR_9 = VAR_2;
    } else {
        VAR_9 = VAR_1.p;
    }

    FUNC_2(VAR_6, VAR_9, VAR_5);
    FUNC_3(VAR_7, VAR_5);
    FUNC_3(VAR_8, VAR_5);
    VAR_7[0] = 1;

    while (!FUNC_4(VAR_4, VAR_5)) {
        while (!(VAR_4[0] & 0x01)) {
            FUNC_5(VAR_4, VAR_4, VAR_5);
            if (!(VAR_7[0] & 0x01)) {
                FUNC_5(VAR_7, VAR_7, VAR_5);
            } else {
                VAR_7[VAR_5] = FUNC_0(VAR_7, VAR_7, VAR_9, VAR_5);
                FUNC_5(VAR_7, VAR_7, VAR_5);
                VAR_7[VAR_5 - 1] |= (VAR_7[VAR_5] << 31);
            }
        }

        while (!(VAR_6[0] & 0x01)) {
            FUNC_5(VAR_6, VAR_6, VAR_5);
            if (!(VAR_8[0] & 0x01)) {
                FUNC_5(VAR_8, VAR_8, VAR_5);
            } else {
                VAR_8[VAR_5] = FUNC_0(VAR_8, VAR_8, VAR_9, VAR_5);
                FUNC_5(VAR_8, VAR_8, VAR_5);
                VAR_8[VAR_5 - 1] |= (VAR_8[VAR_5] << 31);
            }
        }

        if (FUNC_1(VAR_4, VAR_6, VAR_5) >= 0) {
            FUNC_6(VAR_4, VAR_4, VAR_6, VAR_5);
            FUNC_7(VAR_7, VAR_7, VAR_8, VAR_5);
        } else {
            FUNC_6(VAR_6, VAR_6, VAR_4, VAR_5);
            FUNC_7(VAR_8, VAR_8, VAR_7, VAR_5);
        }
    }

    if (FUNC_1(VAR_8, VAR_9, VAR_5) >= 0) {
        FUNC_6(VAR_3, VAR_8, VAR_9, VAR_5);
    } else {
        FUNC_2(VAR_3, VAR_8, VAR_5);
    }
}
