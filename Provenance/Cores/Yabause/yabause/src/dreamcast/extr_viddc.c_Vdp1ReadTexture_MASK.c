
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int CMDSRCA; int CMDPMOD; scalar_t__ CMDCOLR; } ;
typedef TYPE_1__ vdp1cmd_struct ;
typedef int uint32 ;
typedef int uint16 ;
typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct TYPE_9__ {int mode2; int mode3; } ;
typedef TYPE_2__ pvr_sprite_hdr_t ;
struct TYPE_12__ {int CRAOFB; } ;
struct TYPE_11__ {scalar_t__ vdp1_base; scalar_t__ w; scalar_t__ h; int pvr_base; } ;
struct TYPE_10__ {scalar_t__ w; scalar_t__ h; float uf; float vf; } ;


 int FUNC_0 (int,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (char*,int) ;
 int VAR_7 ;
 int FUNC_5 (int) ;
 TYPE_5__* VAR_8 ;
 int FUNC_6 (int ,char*) ;
 TYPE_4__* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_3__ VAR_12 ;
 int FUNC_7 (scalar_t__) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;

__attribute__((used)) static int FUNC_8(vdp1cmd_struct *VAR_16, pvr_sprite_hdr_t *VAR_17) {
    u32 VAR_18 = VAR_16->CMDSRCA << 3;
    uint16 VAR_19, VAR_20;
    int VAR_21 = 0;
    uint32 *VAR_22;
    uint32 VAR_23;
    u8 VAR_24 = ((VAR_16->CMDPMOD & 0x40) != 0);
    int VAR_25;

    int VAR_26 = FUNC_7(VAR_12.w);
    int VAR_27 = FUNC_7(VAR_12.h);

    for(VAR_25 = 0; VAR_25 < VAR_10; ++VAR_25) {
        if(VAR_9[VAR_25].vdp1_base == VAR_18) {
            if(VAR_9[VAR_25].w == VAR_12.w && VAR_9[VAR_25].h == VAR_12.h) {
                VAR_23 = VAR_9[VAR_25].pvr_base;
                goto fillHeader;
            }
        }
    }

    VAR_23 = VAR_11;


    VAR_5 = 0x00000004;
    VAR_6 = 0x00000004;

    switch((VAR_16->CMDPMOD >> 3) & 0x07) {
        case 0:
        {

            u16 VAR_28;
            u32 VAR_29 = VAR_16->CMDCOLR;
            u32 VAR_30 = (VAR_8->CRAOFB & 0x70) << 4;
            int VAR_31, VAR_32;

            for(VAR_31 = 0; VAR_31 < VAR_12.h; ++VAR_31) {
                VAR_22 = (uint32 *) (0xE0000000 |
                                          (VAR_11 & 0x03FFFFE0));

                for(VAR_32 = 0; VAR_32 < VAR_12.w; VAR_32 += 2) {
                    VAR_19 = FUNC_2(VAR_7, VAR_18 & 0x7FFFF);

                    if(((VAR_19 & 0xF) == 0) && !VAR_24) VAR_20 = 0;
                    else {
                        VAR_28 = FUNC_5(((VAR_19 & 0x0F) | VAR_29) +
                                                    VAR_30);
                        VAR_20 = FUNC_0(VAR_28, VAR_15, VAR_14, VAR_13);
                    }

                    if(((VAR_19 >> 4) == 0) && !VAR_24) VAR_19 = 0;
                    else {
                        VAR_28 = FUNC_5(((VAR_19 >> 4) | VAR_29) +
                                                    VAR_30);
                        VAR_19 = FUNC_0(VAR_28, VAR_15, VAR_14, VAR_13);
                    }

                    ++VAR_18;

                    VAR_22[VAR_21++] = VAR_19 | (VAR_20 << 16);

                    if(VAR_21 == 8) {
                        asm("pref @%0" : : "r"(VAR_22));
                        VAR_21 = 0;
                        VAR_22 += 8;
                    }
                }

                if(VAR_21) {
                    asm("pref @%0" : : "r"(VAR_22));
                    VAR_21 = 0;
                }

                VAR_11 += VAR_26 * 2;
            }
            break;
        }

        case 1:
        {

            u16 VAR_33;
            u32 VAR_34 = VAR_16->CMDCOLR * 8;
            int VAR_35, VAR_36;

            for(VAR_35 = 0; VAR_35 < VAR_12.h; ++VAR_35) {
                VAR_22 = (uint32 *) (0xE0000000 |
                                          (VAR_11 & 0x03FFFFE0));

                for(VAR_36 = 0; VAR_36 < VAR_12.w; VAR_36 += 2) {
                    VAR_19 = FUNC_2(VAR_7, VAR_18 & 0x7FFFF);

                    if(((VAR_19 & 0xF) == 0) && !VAR_24) VAR_20 = 0;
                    else {
                        VAR_33 = FUNC_3(VAR_7, ((VAR_19 & 0xF) * 2 +
                                                    VAR_34) & 0x7FFFF);

                        if(VAR_33 & 0x8000)
                            VAR_20 = FUNC_0(FUNC_1(VAR_33), VAR_15, VAR_14,
                                             VAR_13);
                        else
                            VAR_20 = FUNC_0(FUNC_5(VAR_33),
                                             VAR_15, VAR_14, VAR_13);
                    }

                    if(((VAR_19 >> 4) == 0) && !VAR_24) VAR_19 = 0;
                    else {
                        VAR_33 = FUNC_3(VAR_7, ((VAR_19 >> 4) * 2 + VAR_34) &
                                          0x7FFFF);
                        if (VAR_33 & 0x8000)
                            VAR_19 = FUNC_0(FUNC_1(VAR_33), VAR_15, VAR_14,
                                            VAR_13);
                        else
                            VAR_19 = FUNC_0(FUNC_5(VAR_33), VAR_15,
                                            VAR_14, VAR_13);
                    }

                    ++VAR_18;

                    VAR_22[VAR_21++] = VAR_19 | (VAR_20 << 16);

                    if(VAR_21 == 8) {
                        asm("pref @%0" : : "r"(VAR_22));
                        VAR_21 = 0;
                        VAR_22 += 8;
                    }
                }

                if(VAR_21) {
                    asm("pref @%0" : : "r"(VAR_22));
                    VAR_21 = 0;
                }

                VAR_11 += VAR_26 * 2;
            }
            break;
        }

        case 2:
        {

            int VAR_37, VAR_38;
            u32 VAR_39 = VAR_16->CMDCOLR;
            u32 VAR_40 = (VAR_8->CRAOFB & 0x70) << 4;
            u16 VAR_41;

            for(VAR_37 = 0; VAR_37 < VAR_12.h; ++VAR_37) {
                VAR_22 = (uint32 *) (0xE0000000 |
                                          (VAR_11 & 0x03FFFFE0));

                for(VAR_38 = 0; VAR_38 < VAR_12.w; VAR_38 += 2) {
                    VAR_19 = FUNC_2(VAR_7, VAR_18 & 0x7FFFF) & 0x3F;
                    VAR_20 = FUNC_2(VAR_7, (VAR_18 + 1) & 0x7FFFF) & 0x3F;
                    VAR_18 = VAR_18 + 2;

                    if(VAR_19 || VAR_24) {
                        VAR_41 = FUNC_5((VAR_19 | VAR_39) +
                                                    VAR_40);
                        VAR_19 = FUNC_0(VAR_41, VAR_15, VAR_14, VAR_13);
                    }

                    if(VAR_20 || VAR_24) {
                        VAR_41 = FUNC_5((VAR_20 | VAR_39) +
                                                    VAR_40);
                        VAR_20 = FUNC_0(VAR_41, VAR_15, VAR_14, VAR_13);
                    }

                    VAR_22[VAR_21++] = VAR_19 | (VAR_20 << 16);

                    if(VAR_21 == 8) {
                        asm("pref @%0" : : "r"(VAR_22));
                        VAR_21 = 0;
                        VAR_22 += 8;
                    }
                }

                if(VAR_21) {
                    asm("pref @%0" : : "r"(VAR_22));
                    VAR_21 = 0;
                }

                VAR_11 += VAR_26 * 2;
            }
            break;
        }

        case 3:
        {

            int VAR_42, VAR_43;
            u32 VAR_44 = VAR_16->CMDCOLR;
            u32 VAR_45 = (VAR_8->CRAOFB & 0x70) << 4;
            u16 VAR_46;

            for(VAR_42 = 0; VAR_42 < VAR_12.h; ++VAR_42) {
                VAR_22 = (uint32 *) (0xE0000000 |
                                          (VAR_11 & 0x03FFFFE0));

                for(VAR_43 = 0; VAR_43 < VAR_12.w; VAR_43 += 2) {
                    VAR_19 = FUNC_2(VAR_7, VAR_18 & 0x7FFFF) & 0x7F;
                    VAR_20 = FUNC_2(VAR_7, (VAR_18 + 1) & 0x7FFFF) & 0x7F;
                    VAR_18 = VAR_18 + 2;

                    if(VAR_19 || VAR_24) {
                        VAR_46 = FUNC_5((VAR_19 | VAR_44) +
                                                    VAR_45);
                        VAR_19 = FUNC_0(VAR_46, VAR_15, VAR_14, VAR_13);
                    }

                    if(VAR_20 || VAR_24) {
                        VAR_46 = FUNC_5((VAR_20 | VAR_44) +
                                                    VAR_45);
                        VAR_20 = FUNC_0(VAR_46, VAR_15, VAR_14, VAR_13);
                    }

                    VAR_22[VAR_21++] = VAR_19 | (VAR_20 << 16);

                    if(VAR_21 == 8) {
                        asm("pref @%0" : : "r"(VAR_22));
                        VAR_21 = 0;
                        VAR_22 += 8;
                    }
                }

                if(VAR_21) {
                    asm("pref @%0" : : "r"(VAR_22));
                    VAR_21 = 0;
                }

                VAR_11 += VAR_26 * 2;
            }
            break;
        }

        case 4:
        {

            int VAR_47, VAR_48;
            u32 VAR_49 = VAR_16->CMDCOLR;
            u32 VAR_50 = (VAR_8->CRAOFB & 0x70) << 4;
            u16 VAR_51;

            for(VAR_47 = 0; VAR_47 < VAR_12.h; ++VAR_47) {
                VAR_22 = (uint32 *) (0xE0000000 |
                                          (VAR_11 & 0x03FFFFE0));

                for(VAR_48 = 0; VAR_48 < VAR_12.w; VAR_48 += 2) {
                    VAR_19 = FUNC_2(VAR_7, VAR_18 & 0x7FFFF);
                    VAR_20 = FUNC_2(VAR_7, (VAR_18 + 1) & 0x7FFFF);
                    VAR_18 = VAR_18 + 2;

                    if(VAR_19 || VAR_24) {
                        VAR_51 = FUNC_5((VAR_19 | VAR_49) +
                                                    VAR_50);
                        VAR_19 = FUNC_0(VAR_51, VAR_15, VAR_14, VAR_13);
                    }

                    if(VAR_20 || VAR_24) {
                        VAR_51 = FUNC_5((VAR_20 | VAR_49) +
                                                    VAR_50);
                        VAR_20 = FUNC_0(VAR_51, VAR_15, VAR_14, VAR_13);
                    }

                    VAR_22[VAR_21++] = VAR_19 | (VAR_20 << 16);

                    if(VAR_21 == 8) {
                        asm("pref @%0" : : "r"(VAR_22));
                        VAR_21 = 0;
                        VAR_22 += 8;
                    }
                }

                if(VAR_21) {
                    asm("pref @%0" : : "r"(VAR_22));
                    VAR_21 = 0;
                }

                VAR_11 += VAR_26 * 2;
            }
            break;
        }

        case 5:
        {

            int VAR_52, VAR_53;

            for(VAR_52 = 0; VAR_52 < VAR_12.h; ++VAR_52) {
                VAR_22 = (uint32 *) (0xE0000000 |
                                          (VAR_11 & 0x03FFFFE0));

                for(VAR_53 = 0; VAR_53 < VAR_12.w; VAR_53 += 2) {
                    VAR_19 = FUNC_3(VAR_7, VAR_18 & 0x7FFFF);
                    VAR_20 = FUNC_3(VAR_7, (VAR_18 + 2) & 0x7FFFF);
                    VAR_18 = VAR_18 + 4;

                    if(VAR_19 || VAR_24)
                        VAR_19 = FUNC_0(FUNC_1(VAR_19), VAR_15, VAR_14,
                                        VAR_13);

                    if(VAR_20 || VAR_24)
                        VAR_20 = FUNC_0(FUNC_1(VAR_20), VAR_15, VAR_14,
                                         VAR_13);

                    VAR_22[VAR_21++] = VAR_19 | (VAR_20 << 16);

                    if(VAR_21 == 8) {
                        asm("pref @%0" : : "r"(VAR_22));
                        VAR_21 = 0;
                        VAR_22 += 8;
                    }
                }

                if(VAR_21) {
                    asm("pref @%0" : : "r"(VAR_22));
                    VAR_21 = 0;
                }

                VAR_11 += VAR_26 * 2;
            }
            break;
        }

        default:
            FUNC_4("Unimplemented sprite color mode: %X\n",
                    (VAR_16->CMDPMOD >> 3) & 0x7);
            return 0;
    }

    if(VAR_10 < 1023) {
        VAR_9[VAR_10].vdp1_base = VAR_16->CMDSRCA << 3;
        VAR_9[VAR_10].pvr_base = VAR_23;
        VAR_9[VAR_10].w = VAR_12.w;
        VAR_9[VAR_10].h = VAR_12.h;

        VAR_10++;
    }

fillHeader:

    VAR_12.uf = (float) VAR_12.w / VAR_26;
    VAR_12.vf = (float) VAR_12.h / VAR_27;

    VAR_17->mode2 &= (~(VAR_0 | VAR_2));

    switch (VAR_26) {
        case 8: break;
        case 16: VAR_17->mode2 |= (1 << VAR_1); break;
        case 32: VAR_17->mode2 |= (2 << VAR_1); break;
        case 64: VAR_17->mode2 |= (3 << VAR_1); break;
        case 128: VAR_17->mode2 |= (4 << VAR_1); break;
        case 256: VAR_17->mode2 |= (5 << VAR_1); break;
        case 512: VAR_17->mode2 |= (6 << VAR_1); break;
        case 1024: VAR_17->mode2 |= (7 << VAR_1); break;
        default: FUNC_6(0, "Invalid texture U size"); break;
    }

    switch (VAR_27) {
        case 8: break;
        case 16: VAR_17->mode2 |= (1 << VAR_3); break;
        case 32: VAR_17->mode2 |= (2 << VAR_3); break;
        case 64: VAR_17->mode2 |= (3 << VAR_3); break;
        case 128: VAR_17->mode2 |= (4 << VAR_3); break;
        case 256: VAR_17->mode2 |= (5 << VAR_3); break;
        case 512: VAR_17->mode2 |= (6 << VAR_3); break;
        case 1024: VAR_17->mode2 |= (7 << VAR_3); break;
        default: FUNC_6(0, "Invalid texture V size"); break;
    }

    VAR_17->mode3 = ((VAR_23 & 0x00FFFFF8) >> 3) | (VAR_4);


    VAR_11 = (VAR_11 & 0x03FFFFE0) + 0x20;

    return 1;
}
