
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pb; int strict_compliance; TYPE_2__* avctx; } ;
typedef TYPE_1__ VC2EncContext ;
struct TYPE_5__ {scalar_t__ color_primaries; scalar_t__ colorspace; scalar_t__ color_trc; } ;
typedef TYPE_2__ AVCodecContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static void FUNC_2(VC2EncContext *VAR_8)
{
    AVCodecContext *VAR_9 = VAR_8->avctx;
    FUNC_0(&VAR_8->pb, 1, !VAR_8->strict_compliance);
    if (!VAR_8->strict_compliance) {
        int VAR_10;
        FUNC_1(&VAR_8->pb, 0);


        FUNC_0(&VAR_8->pb, 1, 1);
        if (VAR_9->color_primaries == VAR_0)
            VAR_10 = 2;
        else if (VAR_9->color_primaries == VAR_1)
            VAR_10 = 1;
        else if (VAR_9->color_primaries == VAR_2)
            VAR_10 = 1;
        else
            VAR_10 = 0;
        FUNC_1(&VAR_8->pb, VAR_10);


        FUNC_0(&VAR_8->pb, 1, 1);
        if (VAR_9->colorspace == VAR_4)
            VAR_10 = 3;
        else if (VAR_9->colorspace == VAR_5)
            VAR_10 = 2;
        else if (VAR_9->colorspace == VAR_3)
            VAR_10 = 1;
        else
            VAR_10 = 0;
        FUNC_1(&VAR_8->pb, VAR_10);


        FUNC_0(&VAR_8->pb, 1, 1);
        if (VAR_9->color_trc == VAR_7)
            VAR_10 = 2;
        else if (VAR_9->color_trc == VAR_6)
            VAR_10 = 1;
        else
            VAR_10 = 0;
        FUNC_1(&VAR_8->pb, VAR_10);
    }
}
