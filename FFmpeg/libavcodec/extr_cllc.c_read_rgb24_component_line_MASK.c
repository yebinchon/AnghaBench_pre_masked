
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {int table; } ;
typedef TYPE_2__ VLC ;
struct TYPE_8__ {TYPE_1__* avctx; } ;
struct TYPE_6__ {int width; } ;
typedef int GetBitContext ;
typedef TYPE_3__ CLLCContext ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int,int ,int *,int ,int ,int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(CLLCContext *VAR_3, GetBitContext *VAR_4,
                                     int *VAR_5, VLC *VAR_6, uint8_t *VAR_7)
{
    uint8_t *VAR_8;
    int VAR_9, VAR_10;
    int VAR_11;

    FUNC_2(VAR_2, VAR_4);

    VAR_8 = VAR_7;
    VAR_9 = *VAR_5;


    for (VAR_11 = 0; VAR_11 < VAR_3->avctx->width; VAR_11++) {
        FUNC_3(VAR_2, VAR_4);
        FUNC_1(VAR_10, VAR_2, VAR_4, VAR_6->table, VAR_0, VAR_1);

        VAR_9 += VAR_10;
        VAR_8[0] = VAR_9;
        VAR_8 += 3;
    }

    FUNC_0(VAR_2, VAR_4);


    *VAR_5 = VAR_7[0];

    return 0;
}
