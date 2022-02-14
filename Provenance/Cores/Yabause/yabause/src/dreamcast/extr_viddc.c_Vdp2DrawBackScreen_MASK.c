
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
typedef int pvr_sprite_hdr_t ;
struct TYPE_5__ {float ax; int ay; float az; float bx; int by; float bz; int cy; float cz; int dy; scalar_t__ d4; scalar_t__ d3; scalar_t__ d2; scalar_t__ d1; void* dx; void* cx; void* flags; void* argb; } ;
typedef TYPE_1__ pvr_sprite_col_t ;
struct TYPE_6__ {int VRSIZE; int BKTAU; int BKTAL; } ;


 void* VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_2 ;
 TYPE_4__* VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_2 (int ,TYPE_1__*,int) ;
 int VAR_5 ;
 void* VAR_6 ;

__attribute__((used)) static void FUNC_3() {
    u32 VAR_7;
    u16 VAR_8;
    pvr_sprite_col_t VAR_9;

    if(VAR_3->VRSIZE & 0x8000)
        VAR_7 = (((VAR_3->BKTAU & 0x07) << 16) | VAR_3->BKTAL) << 1;
    else
        VAR_7 = (((VAR_3->BKTAU & 0x03) << 16) | VAR_3->BKTAL) << 1;

    if(VAR_3->BKTAU & 0x8000) {
        int VAR_10;

        for(VAR_10 = 0; VAR_10 < VAR_5; ++VAR_10) {
            VAR_8 = FUNC_1(VAR_2, VAR_7);
            VAR_7 += 2;

            VAR_4.argb = FUNC_0(0xFF, VAR_8);
            FUNC_2(VAR_1, &VAR_4,
                          sizeof(pvr_sprite_hdr_t));

            VAR_9.flags = VAR_0;
            VAR_9.ax = 0.0f;
            VAR_9.ay = VAR_10 + 1;
            VAR_9.az = 0.1f;
            VAR_9.bx = 0.0f;
            VAR_9.by = VAR_10;
            VAR_9.bz = 0.1f;
            VAR_9.cx = VAR_6;
            VAR_9.cy = VAR_10;
            VAR_9.cz = 0.1f;
            VAR_9.dx = VAR_6;
            VAR_9.dy = VAR_10 + 1;
            VAR_9.d1 = VAR_9.d2 = VAR_9.d3 = VAR_9.d4 = 0;
            FUNC_2(VAR_1, &VAR_9, sizeof(pvr_sprite_col_t));
        }
    }
    else {
        VAR_8 = FUNC_1(VAR_2, VAR_7);

        VAR_4.argb = FUNC_0(0xFF, VAR_8);
        FUNC_2(VAR_1, &VAR_4, sizeof(pvr_sprite_hdr_t));

        VAR_9.flags = VAR_0;
        VAR_9.ax = 0.0f;
        VAR_9.ay = VAR_5;
        VAR_9.az = 0.1f;
        VAR_9.bx = 0.0f;
        VAR_9.by = 0.0f;
        VAR_9.bz = 0.1f;
        VAR_9.cx = VAR_6;
        VAR_9.cy = 0.0f;
        VAR_9.cz = 0.1f;
        VAR_9.dx = VAR_6;
        VAR_9.dy = VAR_5;
        VAR_9.d1 = VAR_9.d2 = VAR_9.d3 = VAR_9.d4 = 0;
        FUNC_2(VAR_1, &VAR_9, sizeof(pvr_sprite_col_t));
    }
}
