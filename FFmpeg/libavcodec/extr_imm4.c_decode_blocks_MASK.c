
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_8__ {TYPE_2__* priv_data; } ;
struct TYPE_6__ {size_t* permutated; } ;
struct TYPE_7__ {int** block; int factor; TYPE_1__ intra_scantable; } ;
typedef TYPE_2__ IMM4Context ;
typedef int GetBitContext ;
typedef TYPE_3__ AVCodecContext ;


 int FUNC_0 (TYPE_3__*,int *,int,int ,int,int,unsigned int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int**,int ,int) ;

__attribute__((used)) static int FUNC_3(AVCodecContext *VAR_0, GetBitContext *VAR_1,
                         unsigned VAR_2, int VAR_3, int VAR_4, unsigned VAR_5)
{
    IMM4Context *VAR_6 = VAR_0->priv_data;
    const uint8_t *VAR_7 = VAR_6->intra_scantable.permutated;
    int VAR_8, VAR_9;

    FUNC_2(VAR_6->block, 0, sizeof(VAR_6->block));

    for (VAR_9 = 0; VAR_9 < 6; VAR_9++) {
        if (!VAR_3) {
            int VAR_10 = FUNC_1(VAR_1, 8);

            if (VAR_10 == 255)
                VAR_10 = 128;
            VAR_10 *= 8;

            VAR_6->block[VAR_9][VAR_7[0]] = VAR_10;
        }

        if (VAR_2 & (1 << (5 - VAR_9))) {
            VAR_8 = FUNC_0(VAR_0, VAR_1, VAR_9, VAR_6->factor, VAR_3, VAR_4, VAR_5);
            if (VAR_8 < 0)
                return VAR_8;
        }
    }

    return 0;
}
