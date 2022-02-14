
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ codec_id; int height; int mb_y; int pb; } ;
typedef TYPE_1__ MpegEncContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(MpegEncContext *VAR_2)
{
    if (VAR_2->codec_id == VAR_0 && VAR_2->height > 2800) {
        FUNC_1(VAR_2, VAR_1 + (VAR_2->mb_y & 127));

        FUNC_0(&VAR_2->pb, 3, VAR_2->mb_y >> 7);
    } else {
        FUNC_1(VAR_2, VAR_1 + VAR_2->mb_y);
    }
    FUNC_2(VAR_2);

    FUNC_0(&VAR_2->pb, 1, 0);
}
