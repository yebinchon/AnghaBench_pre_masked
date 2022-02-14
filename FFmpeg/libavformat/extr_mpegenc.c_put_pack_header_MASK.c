
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ timestamp ;
typedef int int64_t ;
struct TYPE_12__ {TYPE_2__* priv_data; } ;
struct TYPE_11__ {int mux_rate; scalar_t__ is_mpeg2; } ;
struct TYPE_10__ {int buf; } ;
typedef TYPE_1__ PutBitContext ;
typedef TYPE_2__ MpegMuxContext ;
typedef TYPE_3__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int *,int) ;
 int FUNC_2 (TYPE_1__*,int,int) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_1, uint8_t *VAR_2,
                           int64_t VAR_3)
{
    MpegMuxContext *VAR_4 = VAR_1->priv_data;
    PutBitContext VAR_5;

    FUNC_1(&VAR_5, VAR_2, 128);

    FUNC_3(&VAR_5, VAR_0);
    if (VAR_4->is_mpeg2)
        FUNC_2(&VAR_5, 2, 0x1);
    else
        FUNC_2(&VAR_5, 4, 0x2);
    FUNC_2(&VAR_5, 3, (uint32_t)((VAR_3 >> 30) & 0x07));
    FUNC_2(&VAR_5, 1, 1);
    FUNC_2(&VAR_5, 15, (uint32_t)((VAR_3 >> 15) & 0x7fff));
    FUNC_2(&VAR_5, 1, 1);
    FUNC_2(&VAR_5, 15, (uint32_t)((VAR_3) & 0x7fff));
    FUNC_2(&VAR_5, 1, 1);
    if (VAR_4->is_mpeg2)

        FUNC_2(&VAR_5, 9, 0);
    FUNC_2(&VAR_5, 1, 1);
    FUNC_2(&VAR_5, 22, VAR_4->mux_rate);
    FUNC_2(&VAR_5, 1, 1);
    if (VAR_4->is_mpeg2) {
        FUNC_2(&VAR_5, 1, 1);
        FUNC_2(&VAR_5, 5, 0x1f);
        FUNC_2(&VAR_5, 3, 0);
    }
    FUNC_0(&VAR_5);
    return FUNC_4(&VAR_5) - VAR_5.buf;
}
