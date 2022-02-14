
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int profile; } ;
struct TYPE_5__ {int key_frame; int pict_type; } ;
typedef int GetBitContext ;
typedef TYPE_1__ AVCodecParserContext ;
typedef TYPE_2__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int const*,int) ;

__attribute__((used)) static int FUNC_3(AVCodecParserContext *VAR_2,
                 AVCodecContext *VAR_3,
                 const uint8_t **VAR_4, int *VAR_5,
                 const uint8_t *VAR_6, int VAR_7)
{
    GetBitContext VAR_8;
    int VAR_9, VAR_10, VAR_11;

    *VAR_4 = VAR_6;
    *VAR_5 = VAR_7;

    if (!VAR_7 || (VAR_9 = FUNC_2(&VAR_8, VAR_6, VAR_7)) < 0)
        return VAR_7;
    FUNC_0(&VAR_8, 2);
    VAR_10 = FUNC_1(&VAR_8);
    VAR_10 |= FUNC_1(&VAR_8) << 1;
    if (VAR_10 == 3) VAR_10 += FUNC_1(&VAR_8);
    if (VAR_10 > 3)
        return VAR_7;

    VAR_3->profile = VAR_10;

    if (FUNC_1(&VAR_8)) {
        VAR_11 = 0;
    } else {
        VAR_11 = !FUNC_1(&VAR_8);
    }

    if (!VAR_11) {
        VAR_2->pict_type = VAR_1;
        VAR_2->key_frame = 0;
    } else {
        VAR_2->pict_type = VAR_0;
        VAR_2->key_frame = 1;
    }

    return VAR_7;
}
