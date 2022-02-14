
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {int n_cache; TYPE_2__** cache; } ;
typedef TYPE_1__ VP9BSFContext ;
struct TYPE_18__ {TYPE_1__* priv_data; } ;
struct TYPE_17__ {int* data; int size; } ;
typedef int GetBitContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVBSFContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*,int ,char*) ;
 int FUNC_3 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int*,int) ;
 int FUNC_10 (TYPE_2__**,int,TYPE_2__*) ;

__attribute__((used)) static int FUNC_11(AVBSFContext *VAR_5, AVPacket *VAR_6)
{
    GetBitContext VAR_7;
    VP9BSFContext *VAR_8 = VAR_5->priv_data;
    int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13 = 0, VAR_14;

    VAR_9 = FUNC_6(VAR_5, VAR_6);
    if (VAR_9 < 0)
        return VAR_9;

    VAR_12 = VAR_6->data[VAR_6->size - 1];
    if ((VAR_12 & 0xe0) == 0xc0) {
        int VAR_15 = 1 + ((VAR_12 >> 3) & 0x3);
        int VAR_16 = 1 + (VAR_12 & 0x7), VAR_17 = 2 + VAR_16 * VAR_15;

        VAR_13 = VAR_6->size >= VAR_17 && VAR_6->data[VAR_6->size - VAR_17] == VAR_12;
    }

    if ((VAR_9 = FUNC_9(&VAR_7, VAR_6->data, VAR_6->size)) < 0)
        goto done;

    FUNC_7(&VAR_7, 2);
    VAR_11 = FUNC_8(&VAR_7);
    VAR_11 |= FUNC_8(&VAR_7) << 1;
    if (VAR_11 == 3) VAR_11 += FUNC_8(&VAR_7);

    if (FUNC_8(&VAR_7)) {
        VAR_10 = 0;
    } else {
        FUNC_8(&VAR_7);
        VAR_10 = !FUNC_8(&VAR_7);
    }

    if (VAR_13 && VAR_8->n_cache > 0) {
        FUNC_2(VAR_5, VAR_1,
               "Mixing of superframe syntax and naked VP9 frames not supported\n");
        VAR_9 = FUNC_0(VAR_3);
        goto done;
    } else if ((!VAR_10 || VAR_13) && !VAR_8->n_cache) {

        return 0;
    } else if (VAR_8->n_cache + 1 >= VAR_4) {
        FUNC_2(VAR_5, VAR_1,
               "Too many invisible frames\n");
        VAR_9 = VAR_0;
        goto done;
    }

    FUNC_4(VAR_8->cache[VAR_8->n_cache++], VAR_6);

    if (VAR_10) {
        return FUNC_0(VAR_2);
    }
    FUNC_1(VAR_8->n_cache > 0);


    if ((VAR_9 = FUNC_10(VAR_8->cache, VAR_8->n_cache, VAR_6)) < 0)
        goto done;

    VAR_9 = FUNC_3(VAR_6, VAR_8->cache[VAR_8->n_cache - 1]);
    if (VAR_9 < 0)
        goto done;

    for (VAR_14 = 0; VAR_14 < VAR_8->n_cache; VAR_14++)
        FUNC_5(VAR_8->cache[VAR_14]);
    VAR_8->n_cache = 0;

done:
    if (VAR_9 < 0)
        FUNC_5(VAR_6);
    return VAR_9;
}
