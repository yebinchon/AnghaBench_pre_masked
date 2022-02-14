
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int CMDXA; int CMDYA; int CMDSIZE; int CMDPMOD; int CMDCTRL; } ;
typedef TYPE_1__ vdp1cmd_struct ;
typedef size_t u8 ;
typedef int sprite ;
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
    int VAR_8, VAR_9, VAR_10;
    u8 VAR_11;
    vdp1cmd_struct VAR_12;
    pvr_sprite_txr_t VAR_13;
    pvr_list_t VAR_14;

    FUNC_1(&VAR_12, VAR_3->addr);

    VAR_8 = VAR_3->localX + VAR_12.CMDXA;
    VAR_9 = VAR_3->localY + VAR_12.CMDYA;
    VAR_4.w = ((VAR_12.CMDSIZE >> 8) & 0x3F) << 3;
    VAR_4.h = VAR_12.CMDSIZE & 0xFF;

    if ((VAR_12.CMDPMOD & 0x07) == 0x03) {
        VAR_14 = VAR_2;
        VAR_10 = FUNC_3(&VAR_12, &VAR_7);

        if(VAR_10 == 0)
            return;
        else
            FUNC_4(VAR_2, &VAR_7,
                          sizeof(pvr_sprite_hdr_t));
    }
    else {
        VAR_10 = FUNC_3(&VAR_12, &VAR_6);
        VAR_14 = VAR_1;

        if(VAR_10 == 0)
            return;
        else
            FUNC_4(VAR_1, &VAR_6,
                          sizeof(pvr_sprite_hdr_t));
    }

    VAR_11 = FUNC_2(&VAR_12);

    VAR_13.flags = VAR_0;
    VAR_13.ax = VAR_8;
    VAR_13.ay = VAR_9;
    VAR_13.az = VAR_5[VAR_11];

    VAR_13.bx = VAR_8 + VAR_4.w;
    VAR_13.by = VAR_9;
    VAR_13.bz = VAR_5[VAR_11];

    VAR_13.cx = VAR_8 + VAR_4.w;
    VAR_13.cy = VAR_9 + VAR_4.h;
    VAR_13.cz = VAR_5[VAR_11];

    VAR_13.dx = VAR_8;
    VAR_13.dy = VAR_9 + VAR_4.h;

    VAR_13.auv = FUNC_0(((VAR_12.CMDCTRL & 0x0010) ? VAR_4.uf : 0.0f),
                                  ((VAR_12.CMDCTRL & 0x0020) ? VAR_4.vf : 0.0f));
    VAR_13.buv = FUNC_0(((VAR_12.CMDCTRL & 0x0010) ? 0.0f : VAR_4.uf),
                                  ((VAR_12.CMDCTRL & 0x0020) ? VAR_4.vf : 0.0f));
    VAR_13.cuv = FUNC_0(((VAR_12.CMDCTRL & 0x0010) ? 0.0f : VAR_4.uf),
                                  ((VAR_12.CMDCTRL & 0x0020) ? 0.0f : VAR_4.vf));
    FUNC_4(VAR_14, &VAR_13, sizeof(VAR_13));

    VAR_5[VAR_11] += 0.000001f;
}
