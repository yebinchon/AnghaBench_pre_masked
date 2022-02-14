
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int CMDXA; int CMDYA; int CMDSIZE; int CMDPMOD; int CMDCTRL; int CMDXC; int CMDYC; int CMDXB; int CMDYB; } ;
typedef TYPE_1__ vdp1cmd_struct ;
typedef size_t u8 ;
typedef int sprite ;
typedef int s16 ;
struct TYPE_13__ {int ax; int ay; float az; int bx; int by; float bz; int cx; int cy; float cz; int dx; int dy; void* cuv; void* buv; void* auv; int flags; } ;
typedef TYPE_2__ pvr_sprite_txr_t ;
typedef int pvr_sprite_hdr_t ;
typedef int pvr_list_t ;
struct TYPE_15__ {int localX; int localY; int addr; } ;
struct TYPE_14__ {int w; int h; float uf; float vf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (float,float) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 size_t FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*) ;
 TYPE_7__* VAR_3 ;
 TYPE_6__ VAR_4 ;
 float* VAR_5 ;
 TYPE_2__ VAR_6 ;
 int FUNC_4 (int ,TYPE_2__*,int) ;
 TYPE_2__ VAR_7 ;

__attribute__((used)) static void FUNC_5(void) {
    vdp1cmd_struct VAR_8;
    s16 VAR_9 = 0, VAR_10 = 0;
    s16 VAR_11, VAR_12;
    u8 VAR_13;
    pvr_sprite_txr_t VAR_14;
    pvr_list_t VAR_15;
    int VAR_16;

    FUNC_1(&VAR_8, VAR_3->addr);

    VAR_11 = VAR_8.CMDXA + VAR_3->localX;
    VAR_12 = VAR_8.CMDYA + VAR_3->localY;
    VAR_4.w = ((VAR_8.CMDSIZE >> 8) & 0x3F) * 8;
    VAR_4.h = VAR_8.CMDSIZE & 0xFF;

    if((VAR_8.CMDPMOD & 0x07) == 0x03) {
        VAR_15 = VAR_2;
        VAR_16 = FUNC_3(&VAR_8, &VAR_7);

        if(VAR_16 == 0)
            return;
        else
            FUNC_4(VAR_2, &VAR_7,
                          sizeof(pvr_sprite_hdr_t));
    }
    else {
        VAR_16 = FUNC_3(&VAR_8, &VAR_6);
        VAR_15 = VAR_1;

        if(VAR_16 == 0)
            return;
        else
            FUNC_4(VAR_1, &VAR_6,
                          sizeof(pvr_sprite_hdr_t));
    }


    switch ((VAR_8.CMDCTRL & 0xF00) >> 8) {
        case 0x0:
            VAR_9 = VAR_8.CMDXC - VAR_11 + VAR_3->localX + 1;
            VAR_10 = VAR_8.CMDYC - VAR_12 + VAR_3->localY + 1;
            break;
        case 0x5:
            VAR_9 = VAR_8.CMDXB + 1;
            VAR_10 = VAR_8.CMDYB + 1;
            break;
        case 0x6:
            VAR_9 = VAR_8.CMDXB;
            VAR_10 = VAR_8.CMDYB;
            VAR_11 = VAR_11 - VAR_9 / 2;
            ++VAR_9;
            ++VAR_10;
            break;
        case 0x7:
            VAR_9 = VAR_8.CMDXB;
            VAR_10 = VAR_8.CMDYB;
            VAR_11 = VAR_11 - VAR_9;
            ++VAR_9;
            ++VAR_10;
            break;
        case 0x9:
            VAR_9 = VAR_8.CMDXB;
            VAR_10 = VAR_8.CMDYB;
            VAR_12 = VAR_12 - VAR_10 / 2;
            ++VAR_9;
            ++VAR_10;
            break;
        case 0xA:
            VAR_9 = VAR_8.CMDXB;
            VAR_10 = VAR_8.CMDYB;
            VAR_11 = VAR_11 - VAR_9 / 2;
            VAR_12 = VAR_12 - VAR_10 / 2;
            ++VAR_9;
            ++VAR_10;
            break;
        case 0xB:
            VAR_9 = VAR_8.CMDXB;
            VAR_10 = VAR_8.CMDYB;
            VAR_11 = VAR_11 - VAR_9;
            VAR_12 = VAR_12 - VAR_10 / 2;
            ++VAR_9;
            ++VAR_10;
            break;
        case 0xD:
            VAR_9 = VAR_8.CMDXB;
            VAR_10 = VAR_8.CMDYB;
            VAR_12 = VAR_12 - VAR_10;
            ++VAR_9;
            ++VAR_10;
            break;
        case 0xE:
            VAR_9 = VAR_8.CMDXB;
            VAR_10 = VAR_8.CMDYB;
            VAR_11 = VAR_11 - VAR_9 / 2;
            VAR_12 = VAR_12 - VAR_10;
            ++VAR_9;
            ++VAR_10;
            break;
        case 0xF:
            VAR_9 = VAR_8.CMDXB;
            VAR_10 = VAR_8.CMDYB;
            VAR_11 = VAR_11 - VAR_9;
            VAR_12 = VAR_12 - VAR_10;
            ++VAR_9;
            ++VAR_10;
            break;
        default:
            break;
    }

    VAR_13 = FUNC_2(&VAR_8);

    VAR_14.flags = VAR_0;
    VAR_14.ax = VAR_11;
    VAR_14.ay = VAR_12;
    VAR_14.az = VAR_5[VAR_13];

    VAR_14.bx = VAR_11 + VAR_9;
    VAR_14.by = VAR_12;
    VAR_14.bz = VAR_5[VAR_13];

    VAR_14.cx = VAR_11 + VAR_9;
    VAR_14.cy = VAR_12 + VAR_10;
    VAR_14.cz = VAR_5[VAR_13];

    VAR_14.dx = VAR_11;
    VAR_14.dy = VAR_12 + VAR_10;

    VAR_14.auv = FUNC_0(((VAR_8.CMDCTRL & 0x0010) ? VAR_4.uf : 0.0f),
                                  ((VAR_8.CMDCTRL & 0x0020) ? VAR_4.vf : 0.0f));
    VAR_14.buv = FUNC_0(((VAR_8.CMDCTRL & 0x0010) ? 0.0f : VAR_4.uf),
                                  ((VAR_8.CMDCTRL & 0x0020) ? VAR_4.vf : 0.0f));
    VAR_14.cuv = FUNC_0(((VAR_8.CMDCTRL & 0x0010) ? 0.0f : VAR_4.uf),
                                  ((VAR_8.CMDCTRL & 0x0020) ? 0.0f : VAR_4.vf));
    FUNC_4(VAR_15, &VAR_14, sizeof(VAR_14));

    VAR_5[VAR_13] += 0.000001f;
}
