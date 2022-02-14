
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__** cbp; TYPE_1__* cbppattern; } ;
struct TYPE_6__ {int bits; int table; } ;
struct TYPE_5__ {int table; } ;
typedef TYPE_3__ RV34VLC ;
typedef int GetBitContext ;


 size_t FUNC_0 (int *) ;
 int const FUNC_1 (int *,int ,int,int) ;
 int* VAR_0 ;
 int* VAR_1 ;

__attribute__((used)) static int FUNC_2(GetBitContext *VAR_2, RV34VLC *VAR_3, int VAR_4)
{
    int VAR_5, VAR_6, VAR_7=0;
    int VAR_8;
    static const int VAR_9[3] = {0x100000, 0x010000, 0x110000};
    static const int VAR_10[4] = { 0, 2, 8, 10 };
    const int *VAR_11 = VAR_10;
    int VAR_12, VAR_13, VAR_14;

    VAR_6 = FUNC_1(VAR_2, VAR_3->cbppattern[VAR_4].table, 9, 2);
    VAR_5 = VAR_6 & 0xF;
    VAR_6 >>= 4;

    VAR_8 = VAR_1[VAR_5];

    for(VAR_14 = 8; VAR_14; VAR_14 >>= 1, VAR_11++){
        if(VAR_5 & VAR_14)
            VAR_7 |= FUNC_1(VAR_2, VAR_3->cbp[VAR_4][VAR_8].table, VAR_3->cbp[VAR_4][VAR_8].bits, 1) << VAR_11[0];
    }

    for(VAR_12 = 0; VAR_12 < 4; VAR_12++){
        VAR_13 = (VAR_0[VAR_6] >> (6 - 2*VAR_12)) & 3;
        if(VAR_13 == 1)
            VAR_7 |= VAR_9[FUNC_0(VAR_2)] << VAR_12;
        if(VAR_13 == 2)
            VAR_7 |= VAR_9[2] << VAR_12;
    }
    return VAR_7;
}
