
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct H263State {int quant; int gobn; int mba; int hmv1; int vmv1; int hmv2; int vmv2; } ;
struct H263Info {int src; int i; int u; int s; int a; } ;
struct TYPE_6__ {TYPE_1__* priv_data; } ;
struct TYPE_5__ {scalar_t__ buf; } ;
typedef TYPE_1__ RTPMuxContext ;
typedef int PutBitContext ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (TYPE_2__*,scalar_t__,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,scalar_t__,int) ;
 int FUNC_3 (scalar_t__,int const*,int) ;
 int FUNC_4 (int *,int,int) ;

__attribute__((used)) static void FUNC_5(AVFormatContext *VAR_0, const struct H263Info *VAR_1,
                        const struct H263State *VAR_2, const uint8_t *VAR_3,
                        int VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
    RTPMuxContext *VAR_8 = VAR_0->priv_data;
    PutBitContext VAR_9;

    FUNC_2(&VAR_9, VAR_8->buf, 64);
    FUNC_4(&VAR_9, 1, 1);
    FUNC_4(&VAR_9, 1, 0);
    FUNC_4(&VAR_9, 3, VAR_5);
    FUNC_4(&VAR_9, 3, VAR_6);
    FUNC_4(&VAR_9, 3, VAR_1->src);
    FUNC_4(&VAR_9, 5, VAR_2->quant);
    FUNC_4(&VAR_9, 5, VAR_2->gobn);
    FUNC_4(&VAR_9, 9, VAR_2->mba);
    FUNC_4(&VAR_9, 2, 0);
    FUNC_4(&VAR_9, 1, VAR_1->i);
    FUNC_4(&VAR_9, 1, VAR_1->u);
    FUNC_4(&VAR_9, 1, VAR_1->s);
    FUNC_4(&VAR_9, 1, VAR_1->a);
    FUNC_4(&VAR_9, 7, VAR_2->hmv1);
    FUNC_4(&VAR_9, 7, VAR_2->vmv1);
    FUNC_4(&VAR_9, 7, VAR_2->hmv2);
    FUNC_4(&VAR_9, 7, VAR_2->vmv2);
    FUNC_1(&VAR_9);
    FUNC_3(VAR_8->buf + 8, VAR_3, VAR_4);

    FUNC_0(VAR_0, VAR_8->buf, VAR_4 + 8, VAR_7);
}
