
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {TYPE_1__* avctx; int pkt_serial; } ;
struct TYPE_9__ {int subpq; TYPE_5__ subdec; } ;
typedef TYPE_2__ VideoState ;
struct TYPE_12__ {scalar_t__ format; double pts; } ;
struct TYPE_10__ {double pts; TYPE_6__ sub; scalar_t__ uploaded; int height; int width; int serial; } ;
struct TYPE_8__ {int height; int width; } ;
typedef TYPE_3__ Frame ;


 double VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (TYPE_5__*,int *,TYPE_6__*) ;
 TYPE_3__* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(void *VAR_2)
{
    VideoState *VAR_3 = VAR_2;
    Frame *VAR_4;
    int VAR_5;
    double VAR_6;

    for (;;) {
        if (!(VAR_4 = FUNC_2(&VAR_3->subpq)))
            return 0;

        if ((VAR_5 = FUNC_1(&VAR_3->subdec, ((void*)0), &VAR_4->sub)) < 0)
            break;

        VAR_6 = 0;

        if (VAR_5 && VAR_4->sub.format == 0) {
            if (VAR_4->sub.pts != VAR_0)
                VAR_6 = VAR_4->sub.pts / (double)VAR_1;
            VAR_4->pts = VAR_6;
            VAR_4->serial = VAR_3->subdec.pkt_serial;
            VAR_4->width = VAR_3->subdec.avctx->width;
            VAR_4->height = VAR_3->subdec.avctx->height;
            VAR_4->uploaded = 0;


            FUNC_3(&VAR_3->subpq);
        } else if (VAR_5) {
            FUNC_0(&VAR_4->sub);
        }
    }
    return 0;
}
