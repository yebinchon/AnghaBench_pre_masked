
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int flags; int xmin; int ymin; int xmax; int ymax; TYPE_1__* avctx; } ;
struct TYPE_6__ {int width; int height; scalar_t__ out_format; int mb_width; int mb_height; scalar_t__ unrestricted_mv; TYPE_3__ me; } ;
struct TYPE_5__ {int me_range; } ;
typedef TYPE_2__ MpegEncContext ;
typedef TYPE_3__ MotionEstContext ;


 void* FUNC_0 (int,int) ;
 void* FUNC_1 (int,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline void FUNC_2(MpegEncContext *VAR_3, int VAR_4, int VAR_5)
{
    MotionEstContext * const VAR_6= &VAR_3->me;
    int VAR_7= VAR_6->avctx->me_range >> (1 + !!(VAR_6->flags&VAR_0));
    int VAR_8 = VAR_2 >> (1 + !!(VAR_6->flags&VAR_0));




    if (VAR_3->unrestricted_mv) {
        VAR_6->xmin = - VAR_4 - 16;
        VAR_6->ymin = - VAR_5 - 16;
        VAR_6->xmax = - VAR_4 + VAR_3->width;
        VAR_6->ymax = - VAR_5 + VAR_3->height;
    } else if (VAR_3->out_format == VAR_1){

        VAR_6->xmin = (VAR_4 > 15) ? - 15 : 0;
        VAR_6->ymin = (VAR_5 > 15) ? - 15 : 0;
        VAR_6->xmax = (VAR_4 < VAR_3->mb_width * 16 - 16) ? 15 : 0;
        VAR_6->ymax = (VAR_5 < VAR_3->mb_height * 16 - 16) ? 15 : 0;
    } else {
        VAR_6->xmin = - VAR_4;
        VAR_6->ymin = - VAR_5;
        VAR_6->xmax = - VAR_4 + VAR_3->mb_width *16 - 16;
        VAR_6->ymax = - VAR_5 + VAR_3->mb_height*16 - 16;
    }
    if(!VAR_7 || VAR_7 > VAR_8)
        VAR_7 = VAR_8;
    if(VAR_7){
        VAR_6->xmin = FUNC_0(VAR_6->xmin,-VAR_7);
        VAR_6->xmax = FUNC_1(VAR_6->xmax, VAR_7);
        VAR_6->ymin = FUNC_0(VAR_6->ymin,-VAR_7);
        VAR_6->ymax = FUNC_1(VAR_6->ymax, VAR_7);
    }
}
