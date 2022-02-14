
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int CMDSIZE; int CMDPMOD; int CMDCTRL; scalar_t__ CMDYD; scalar_t__ CMDXD; scalar_t__ CMDYC; scalar_t__ CMDXC; scalar_t__ CMDYB; scalar_t__ CMDXB; scalar_t__ CMDYA; scalar_t__ CMDXA; } ;
typedef TYPE_1__ vdp1cmd_struct ;
typedef size_t u8 ;
typedef int sprite ;
struct TYPE_13__ {float az; float bz; float cz; void* cuv; void* buv; void* auv; scalar_t__ dy; scalar_t__ dx; scalar_t__ cy; scalar_t__ cx; scalar_t__ by; scalar_t__ bx; scalar_t__ ay; scalar_t__ ax; int flags; } ;
typedef TYPE_2__ pvr_sprite_txr_t ;
typedef int pvr_sprite_hdr_t ;
typedef int pvr_list_t ;
struct TYPE_15__ {scalar_t__ localY; scalar_t__ localX; int addr; } ;
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
    u8 VAR_9;
    pvr_sprite_txr_t VAR_10;
    pvr_list_t VAR_11;
    int VAR_12;

    FUNC_1(&VAR_8, VAR_3->addr);

    VAR_4.w = ((VAR_8.CMDSIZE >> 8) & 0x3F) * 8;
    VAR_4.h = VAR_8.CMDSIZE & 0xFF;

    if((VAR_8.CMDPMOD & 0x7) == 0x3) {
        VAR_11 = VAR_2;
        VAR_12 = FUNC_3(&VAR_8, &VAR_7);

        if(VAR_12 == 0)
            return;
        else
            FUNC_4(VAR_2, &VAR_7,
                          sizeof(pvr_sprite_hdr_t));
    }
    else {
        VAR_12 = FUNC_3(&VAR_8, &VAR_6);
        VAR_11 = VAR_1;

        if(VAR_12 == 0)
            return;
        else
            FUNC_4(VAR_1, &VAR_6,
                          sizeof(pvr_sprite_hdr_t));
    }

    VAR_9 = FUNC_2(&VAR_8);

    VAR_10.flags = VAR_0;
    VAR_10.ax = VAR_8.CMDXA + VAR_3->localX;
    VAR_10.ay = VAR_8.CMDYA + VAR_3->localY;
    VAR_10.az = VAR_5[VAR_9];

    VAR_10.bx = VAR_8.CMDXB + VAR_3->localX + 1;
    VAR_10.by = VAR_8.CMDYB + VAR_3->localY;
    VAR_10.bz = VAR_5[VAR_9];

    VAR_10.cx = VAR_8.CMDXC + VAR_3->localX + 1;
    VAR_10.cy = VAR_8.CMDYC + VAR_3->localY + 1;
    VAR_10.cz = VAR_5[VAR_9];

    VAR_10.dx = VAR_8.CMDXD + VAR_3->localX;
    VAR_10.dy = VAR_8.CMDYD + VAR_3->localY + 1;

    VAR_10.auv = FUNC_0(((VAR_8.CMDCTRL & 0x0010) ? VAR_4.uf : 0.0f),
                                  ((VAR_8.CMDCTRL & 0x0020) ? VAR_4.vf : 0.0f));
    VAR_10.buv = FUNC_0(((VAR_8.CMDCTRL & 0x0010) ? 0.0f : VAR_4.uf),
                                  ((VAR_8.CMDCTRL & 0x0020) ? VAR_4.vf : 0.0f));
    VAR_10.cuv = FUNC_0(((VAR_8.CMDCTRL & 0x0010) ? 0.0f : VAR_4.uf),
                                  ((VAR_8.CMDCTRL & 0x0020) ? 0.0f : VAR_4.vf));
    FUNC_4(VAR_11, &VAR_10, sizeof(VAR_10));

    VAR_5[VAR_9] += 0.000001f;
}
