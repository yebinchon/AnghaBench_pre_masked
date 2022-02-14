
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mode2; int mode3; float az; float bx; float bz; float cx; float cy; float cz; float dy; void* cuv; void* buv; void* auv; scalar_t__ dx; scalar_t__ by; scalar_t__ ay; scalar_t__ ax; int flags; } ;
typedef TYPE_1__ pvr_sprite_txr_t ;
typedef int pvr_sprite_hdr_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (float,float) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 float* VAR_8 ;
 TYPE_1__ VAR_9 ;
 int FUNC_1 (int ,TYPE_1__*,int) ;
 float VAR_10 ;
 float VAR_11 ;

__attribute__((used)) static void FUNC_2(int VAR_12) {
    pvr_sprite_txr_t VAR_13;

    VAR_9.mode2 &= (~(VAR_2 | VAR_4));
    VAR_9.mode2 |= (6 << VAR_3) |
                           (5 << VAR_5);
    VAR_9.mode3 = ((VAR_7 & 0x00FFFFF8) >> 3) |
                          (VAR_6);

    FUNC_1(VAR_1, &VAR_9, sizeof(pvr_sprite_hdr_t));

    VAR_13.flags = VAR_0;
    VAR_13.ax = 0;
    VAR_13.ay = 0;
    VAR_13.az = VAR_8[VAR_12];

    VAR_13.bx = VAR_11;
    VAR_13.by = 0;
    VAR_13.bz = VAR_8[VAR_12];

    VAR_13.cx = VAR_11;
    VAR_13.cy = VAR_10;
    VAR_13.cz = VAR_8[VAR_12];

    VAR_13.dx = 0;
    VAR_13.dy = VAR_10;

    VAR_13.auv = FUNC_0(0.0f, 0.0f);
    VAR_13.buv = FUNC_0(VAR_11 / 512.0f, 0.0f);
    VAR_13.cuv = FUNC_0(VAR_11 / 512.0f, VAR_10 / 256.0f);
    FUNC_1(VAR_1, &VAR_13, sizeof(pvr_sprite_txr_t));

    VAR_8[VAR_12] += 0.000001f;
}
