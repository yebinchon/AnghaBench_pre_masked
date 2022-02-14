
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {int height; int width; scalar_t__ pix_fmt; TYPE_2__* priv_data; } ;
struct TYPE_5__ {int mb_height; } ;
struct TYPE_6__ {int data_offset; int cid; int interlaced; int cur_field; int bit_depth; int is_444; int* msip; TYPE_1__ m; } ;
typedef TYPE_2__ DNXHDEncContext ;
typedef TYPE_3__ AVCodecContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int*,int) ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (int*,int ,int) ;

__attribute__((used)) static int FUNC_3(AVCodecContext *VAR_1, uint8_t *VAR_2)
{
    DNXHDEncContext *VAR_3 = VAR_1->priv_data;

    FUNC_2(VAR_2, 0, VAR_3->data_offset);


    FUNC_0(VAR_2 + 0x02, VAR_3->data_offset);
    if (VAR_3->cid >= 1270 && VAR_3->cid <= 1274)
        VAR_2[4] = 0x03;
    else
        VAR_2[4] = 0x01;

    VAR_2[5] = VAR_3->interlaced ? VAR_3->cur_field + 2 : 0x01;
    VAR_2[6] = 0x80;
    VAR_2[7] = 0xa0;
    FUNC_0(VAR_2 + 0x18, VAR_1->height >> VAR_3->interlaced);
    FUNC_0(VAR_2 + 0x1a, VAR_1->width);
    FUNC_0(VAR_2 + 0x1d, VAR_1->height >> VAR_3->interlaced);

    VAR_2[0x21] = VAR_3->bit_depth == 10 ? 0x58 : 0x38;
    VAR_2[0x22] = 0x88 + (VAR_3->interlaced << 2);
    FUNC_1(VAR_2 + 0x28, VAR_3->cid);
    VAR_2[0x2c] = (!VAR_3->interlaced << 7) | (VAR_3->is_444 << 6) | (VAR_1->pix_fmt == VAR_0);

    VAR_2[0x5f] = 0x01;

    VAR_2[0x167] = 0x02;
    FUNC_0(VAR_2 + 0x16a, VAR_3->m.mb_height * 4 + 4);
    FUNC_0(VAR_2 + 0x16c, VAR_3->m.mb_height);
    VAR_2[0x16f] = 0x10;

    VAR_3->msip = VAR_2 + 0x170;
    return 0;
}
