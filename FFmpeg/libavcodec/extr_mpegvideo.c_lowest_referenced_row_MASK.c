
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ picture_structure; int mv_type; int*** mv; int mb_height; scalar_t__ mb_y; scalar_t__ mcsel; int quarter_sample; } ;
typedef TYPE_1__ MpegEncContext ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;



 scalar_t__ VAR_2 ;
 int FUNC_2 (scalar_t__,int ,int) ;

__attribute__((used)) static int FUNC_3(MpegEncContext *VAR_3, int VAR_4)
{
    int VAR_5 = VAR_1, VAR_6 = VAR_0, VAR_7 = !VAR_3->quarter_sample;
    int VAR_8, VAR_9, VAR_10, VAR_11;

    if (VAR_3->picture_structure != VAR_2 || VAR_3->mcsel)
        goto unhandled;

    switch (VAR_3->mv_type) {
        case 130:
            VAR_11 = 1;
            break;
        case 129:
            VAR_11 = 2;
            break;
        case 128:
            VAR_11 = 4;
            break;
        default:
            goto unhandled;
    }

    for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {
        VAR_8 = VAR_3->mv[VAR_4][VAR_10][1];
        VAR_5 = FUNC_0(VAR_5, VAR_8);
        VAR_6 = FUNC_1(VAR_6, VAR_8);
    }

    VAR_9 = ((FUNC_0(-VAR_6, VAR_5)<<VAR_7) + 63) >> 6;

    return FUNC_2(VAR_3->mb_y + VAR_9, 0, VAR_3->mb_height - 1);
unhandled:
    return VAR_3->mb_height-1;
}
