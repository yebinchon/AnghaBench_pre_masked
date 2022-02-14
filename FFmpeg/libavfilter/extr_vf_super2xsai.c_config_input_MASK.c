
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int format; TYPE_1__* dst; } ;
struct TYPE_6__ {int hi_pixel_mask; int lo_pixel_mask; int q_hi_pixel_mask; int q_lo_pixel_mask; int bpp; int is_be; } ;
struct TYPE_5__ {TYPE_2__* priv; } ;
typedef TYPE_2__ Super2xSaIContext ;
typedef TYPE_3__ AVFilterLink ;
__attribute__((used)) static int FUNC_0(AVFilterLink *VAR_0)
{
    Super2xSaIContext *VAR_1 = VAR_0->dst->priv;

    VAR_1->hi_pixel_mask = 0xFEFEFEFE;
    VAR_1->lo_pixel_mask = 0x01010101;
    VAR_1->q_hi_pixel_mask = 0xFCFCFCFC;
    VAR_1->q_lo_pixel_mask = 0x03030303;
    VAR_1->bpp = 4;

    switch (VAR_0->format) {
    case 132:
    case 137:
        VAR_1->bpp = 3;
        break;

    case 129:
    case 134:
        VAR_1->is_be = 1;
    case 128:
    case 133:
        VAR_1->hi_pixel_mask = 0xF7DEF7DE;
        VAR_1->lo_pixel_mask = 0x08210821;
        VAR_1->q_hi_pixel_mask = 0xE79CE79C;
        VAR_1->q_lo_pixel_mask = 0x18631863;
        VAR_1->bpp = 2;
        break;

    case 136:
    case 131:
        VAR_1->is_be = 1;
    case 135:
    case 130:
        VAR_1->hi_pixel_mask = 0x7BDE7BDE;
        VAR_1->lo_pixel_mask = 0x04210421;
        VAR_1->q_hi_pixel_mask = 0x739C739C;
        VAR_1->q_lo_pixel_mask = 0x0C630C63;
        VAR_1->bpp = 2;
        break;
    }

    return 0;
}
