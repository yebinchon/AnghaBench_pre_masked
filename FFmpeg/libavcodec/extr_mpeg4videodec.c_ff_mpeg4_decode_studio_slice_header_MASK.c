
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_6__ {int mb_width; int mb_height; scalar_t__ mb_num; int qscale; scalar_t__ mb_y; scalar_t__ mb_x; int gb; } ;
struct TYPE_7__ {scalar_t__ shape; TYPE_1__ m; } ;
typedef TYPE_1__ MpegEncContext ;
typedef TYPE_2__ Mpeg4DecContext ;
typedef int GetBitContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,unsigned int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *) ;

int FUNC_9(Mpeg4DecContext *VAR_3)
{
    MpegEncContext *VAR_4 = &VAR_3->m;
    GetBitContext *VAR_5 = &VAR_4->gb;
    unsigned VAR_6;
    uint16_t VAR_7;

    if (FUNC_3(VAR_5) >= 32 && FUNC_4(VAR_5, 32) == VAR_2) {
        VAR_6 = FUNC_0(VAR_4->mb_width * VAR_4->mb_height) + 1;
        VAR_7 = FUNC_1(VAR_5, VAR_6);

        if (VAR_7 >= VAR_4->mb_num)
            return VAR_0;

        VAR_4->mb_x = VAR_7 % VAR_4->mb_width;
        VAR_4->mb_y = VAR_7 / VAR_4->mb_width;

        if (VAR_3->shape != VAR_1)
            VAR_4->qscale = FUNC_5(VAR_4);

        if (FUNC_2(VAR_5)) {
            FUNC_8(VAR_5);
            FUNC_8(VAR_5);
            FUNC_7(VAR_5, 6);
            while (FUNC_2(VAR_5))
                FUNC_7(VAR_5, 8);
        }

        FUNC_6(VAR_4);
    }
    else {
        return VAR_0;
    }

    return 0;
}
