
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int buf_end; int buf; TYPE_1__* avctx; } ;
struct TYPE_4__ {int flags; } ;
typedef TYPE_2__ Jpeg2000EncoderContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*,int) ;
 int FUNC_1 (int*,int ,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(Jpeg2000EncoderContext *VAR_3, int VAR_4)
{
    int VAR_5 = 4 + FUNC_2(VAR_2);

    if (VAR_3->avctx->flags & VAR_0)
        return 0;

    if (VAR_3->buf_end - VAR_3->buf < VAR_5 + 2)
        return -1;

    FUNC_0(&VAR_3->buf, VAR_1);
    FUNC_0(&VAR_3->buf, VAR_5);
    FUNC_0(&VAR_3->buf, 1);

    FUNC_1(&VAR_3->buf, VAR_2, FUNC_2(VAR_2));

    return 0;
}
