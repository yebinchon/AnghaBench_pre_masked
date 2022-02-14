
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct H263Info {int src; int i; int u; int s; int a; int tr; } ;
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
                        const uint8_t *VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
    RTPMuxContext *VAR_6 = VAR_0->priv_data;
    PutBitContext VAR_7;

    FUNC_2(&VAR_7, VAR_6->buf, 32);
    FUNC_4(&VAR_7, 1, 0);
    FUNC_4(&VAR_7, 1, 0);
    FUNC_4(&VAR_7, 3, 0);
    FUNC_4(&VAR_7, 3, VAR_4);
    FUNC_4(&VAR_7, 3, VAR_1->src);
    FUNC_4(&VAR_7, 1, VAR_1->i);
    FUNC_4(&VAR_7, 1, VAR_1->u);
    FUNC_4(&VAR_7, 1, VAR_1->s);
    FUNC_4(&VAR_7, 1, VAR_1->a);
    FUNC_4(&VAR_7, 4, 0);
    FUNC_4(&VAR_7, 2, 0);
    FUNC_4(&VAR_7, 3, 0);
    FUNC_4(&VAR_7, 8, VAR_1->tr);
    FUNC_1(&VAR_7);
    FUNC_3(VAR_6->buf + 4, VAR_2, VAR_3);

    FUNC_0(VAR_0, VAR_6->buf, VAR_3 + 4, VAR_5);
}
