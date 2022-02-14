
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int* mb_type; TYPE_1__* f; } ;
struct TYPE_9__ {int mb_x; int mb_y; int mb_stride; scalar_t__ codec_tag; void* mv_type; int *** mv; TYPE_2__ last_picture; TYPE_2__ next_picture; } ;
struct TYPE_7__ {scalar_t__ pict_type; } ;
typedef TYPE_2__ Picture ;
typedef TYPE_3__ MpegEncContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_3(MpegEncContext *VAR_6)
{
    const int VAR_7 = VAR_6->mb_x + VAR_6->mb_y * VAR_6->mb_stride;
    Picture *VAR_8 = &VAR_6->next_picture;
    int VAR_9 = VAR_8->mb_type[VAR_7];
    int VAR_10;

    if (VAR_6->codec_tag == FUNC_0("U263") && VAR_8->f->pict_type == VAR_0) {
        VAR_8 = &VAR_6->last_picture;
        VAR_9 = VAR_8->mb_type[VAR_7];
    }

    if (FUNC_1(VAR_9)) {
        VAR_6->mv_type = VAR_5;
        for (VAR_10 = 0; VAR_10 < 4; VAR_10++)
            FUNC_2(VAR_6, VAR_8, VAR_10);
        return VAR_3 | VAR_2 | VAR_4;
    } else {
        FUNC_2(VAR_6, VAR_8, 0);
        VAR_6->mv[0][1][0] =
        VAR_6->mv[0][2][0] =
        VAR_6->mv[0][3][0] = VAR_6->mv[0][0][0];
        VAR_6->mv[0][1][1] =
        VAR_6->mv[0][2][1] =
        VAR_6->mv[0][3][1] = VAR_6->mv[0][0][1];
        VAR_6->mv[1][1][0] =
        VAR_6->mv[1][2][0] =
        VAR_6->mv[1][3][0] = VAR_6->mv[1][0][0];
        VAR_6->mv[1][1][1] =
        VAR_6->mv[1][2][1] =
        VAR_6->mv[1][3][1] = VAR_6->mv[1][0][1];
        VAR_6->mv_type = VAR_5;

        return VAR_3 | VAR_1 | VAR_4;
    }
}
