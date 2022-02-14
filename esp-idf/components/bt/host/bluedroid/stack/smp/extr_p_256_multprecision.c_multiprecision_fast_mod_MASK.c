
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* p; } ;
typedef int DWORD ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 scalar_t__ FUNC_0 (int*,int*,int ) ;
 int FUNC_1 (int*,int*,int*,int ) ;

void FUNC_2(DWORD *VAR_2, DWORD *VAR_3)
{
    DWORD VAR_4;
    DWORD VAR_5;
    DWORD *VAR_6 = VAR_1.p;

    VAR_2[0] = VAR_3[0] + VAR_3[6];
    VAR_4 = VAR_2[0] < VAR_3[0];
    VAR_2[0] += VAR_3[10];
    VAR_4 += VAR_2[0] < VAR_3[10];

    VAR_2[1] = VAR_3[1] + VAR_4;
    VAR_4 = VAR_2[1] < VAR_3[1];
    VAR_2[1] += VAR_3[7];
    VAR_4 += VAR_2[1] < VAR_3[7];
    VAR_2[1] += VAR_3[11];
    VAR_4 += VAR_2[1] < VAR_3[11];

    VAR_2[2] = VAR_3[2] + VAR_4;
    VAR_4 = VAR_2[2] < VAR_3[2];
    VAR_2[2] += VAR_3[6];
    VAR_4 += VAR_2[2] < VAR_3[6];
    VAR_2[2] += VAR_3[8];
    VAR_4 += VAR_2[2] < VAR_3[8];
    VAR_2[2] += VAR_3[10];
    VAR_4 += VAR_2[2] < VAR_3[10];

    VAR_2[3] = VAR_3[3] + VAR_4;
    VAR_4 = VAR_2[3] < VAR_3[3];
    VAR_2[3] += VAR_3[7];
    VAR_4 += VAR_2[3] < VAR_3[7];
    VAR_2[3] += VAR_3[9];
    VAR_4 += VAR_2[3] < VAR_3[9];
    VAR_2[3] += VAR_3[11];
    VAR_4 += VAR_2[3] < VAR_3[11];

    VAR_2[4] = VAR_3[4] + VAR_4;
    VAR_4 = VAR_2[4] < VAR_3[4];
    VAR_2[4] += VAR_3[8];
    VAR_4 += VAR_2[4] < VAR_3[8];
    VAR_2[4] += VAR_3[10];
    VAR_4 += VAR_2[4] < VAR_3[10];

    VAR_2[5] = VAR_3[5] + VAR_4;
    VAR_4 = VAR_2[5] < VAR_3[5];
    VAR_2[5] += VAR_3[9];
    VAR_4 += VAR_2[5] < VAR_3[9];
    VAR_2[5] += VAR_3[11];
    VAR_4 += VAR_2[5] < VAR_3[11];

    VAR_2[0] += VAR_4;
    VAR_5 = VAR_2[0] < VAR_4;
    VAR_2[1] += VAR_5;
    VAR_5 = VAR_2[1] < VAR_5;
    VAR_2[2] += VAR_5;
    VAR_5 = VAR_2[2] < VAR_5;
    VAR_2[2] += VAR_4;
    VAR_5 = VAR_2[2] < VAR_4;
    VAR_2[3] += VAR_5;
    VAR_5 = VAR_2[3] < VAR_5;
    VAR_2[4] += VAR_5;
    VAR_5 = VAR_2[4] < VAR_5;
    VAR_2[5] += VAR_5;
    VAR_5 = VAR_2[5] < VAR_5;

    if (VAR_5) {
        FUNC_1(VAR_2, VAR_2, VAR_6, VAR_0);
    } else if (FUNC_0(VAR_2, VAR_6, VAR_0) >= 0) {
        FUNC_1(VAR_2, VAR_2, VAR_6, VAR_0);
    }
}
