
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ last_index; } ;
struct TYPE_7__ {TYPE_1__ parse_context; TYPE_2__* avctx; scalar_t__ divx_packed; int gb; } ;
struct TYPE_6__ {int flags; scalar_t__ hwaccel; } ;
typedef TYPE_3__ MpegEncContext ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(MpegEncContext *VAR_1, int VAR_2)
{
    int VAR_3 = (FUNC_0(&VAR_1->gb) + 7) >> 3;

    if (VAR_1->divx_packed || VAR_1->avctx->hwaccel) {


        return VAR_2;
    } else if (VAR_1->avctx->flags & VAR_0) {
        VAR_3 -= VAR_1->parse_context.last_index;

        if (VAR_3 < 0)
            VAR_3 = 0;
        return VAR_3;
    } else {

        if (VAR_3 == 0)
            VAR_3 = 1;

        if (VAR_3 + 10 > VAR_2)
            VAR_3 = VAR_2;

        return VAR_3;
    }
}
