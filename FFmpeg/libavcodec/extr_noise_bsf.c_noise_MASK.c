
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {TYPE_1__* priv_data; } ;
struct TYPE_11__ {int size; int* data; } ;
struct TYPE_10__ {int amount; int state; int dropamount; } ;
typedef TYPE_1__ NoiseContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVBSFContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_4(AVBSFContext *VAR_2, AVPacket *VAR_3)
{
    NoiseContext *VAR_4 = VAR_2->priv_data;
    int VAR_5 = VAR_4->amount > 0 ? VAR_4->amount : (VAR_4->state % 10001 + 1);
    int VAR_6, VAR_7 = 0;

    if (VAR_5 <= 0)
        return FUNC_0(VAR_1);

    VAR_7 = FUNC_3(VAR_2, VAR_3);
    if (VAR_7 < 0)
        return VAR_7;

    if (VAR_4->dropamount > 0 && VAR_4->state % VAR_4->dropamount == 0) {
        VAR_4->state++;
        FUNC_2(VAR_3);
        return FUNC_0(VAR_0);
    }

    VAR_7 = FUNC_1(VAR_3);
    if (VAR_7 < 0)
        goto fail;

    for (VAR_6 = 0; VAR_6 < VAR_3->size; VAR_6++) {
        VAR_4->state += VAR_3->data[VAR_6] + 1;
        if (VAR_4->state % VAR_5 == 0)
            VAR_3->data[VAR_6] = VAR_4->state;
    }
fail:
    if (VAR_7 < 0)
        FUNC_2(VAR_3);

    return VAR_7;
}
