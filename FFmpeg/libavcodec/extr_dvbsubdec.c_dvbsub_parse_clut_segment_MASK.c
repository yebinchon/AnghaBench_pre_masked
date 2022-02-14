
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_13__ {scalar_t__ strict_std_compliance; TYPE_1__* priv_data; } ;
struct TYPE_12__ {int id; int version; void** clut256; void** clut16; void** clut4; struct TYPE_12__* next; } ;
struct TYPE_11__ {TYPE_2__* clut_list; } ;
typedef TYPE_1__ DVBSubContext ;
typedef TYPE_2__ DVBSubCLUT ;
typedef TYPE_3__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 void* FUNC_1 (int,int,int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int,int,int) ;
 int FUNC_4 (TYPE_3__*,int ,char*,int const) ;
 TYPE_2__* FUNC_5 (int) ;
 int VAR_4 ;
 int FUNC_6 (TYPE_3__*,char*,...) ;
 TYPE_2__* FUNC_7 (TYPE_1__*,int) ;
 int FUNC_8 (TYPE_2__*,int *,int) ;

__attribute__((used)) static int FUNC_9(AVCodecContext *VAR_5,
                                     const uint8_t *VAR_6, int VAR_7)
{
    DVBSubContext *VAR_8 = VAR_5->priv_data;

    const uint8_t *VAR_9 = VAR_6 + VAR_7;
    int VAR_10, VAR_11;
    int VAR_12;
    DVBSubCLUT *VAR_13;
    int VAR_14, VAR_15 , VAR_16;
    int VAR_17, VAR_18, VAR_19, VAR_20;
    int VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26;

    FUNC_6(VAR_5, "DVB clut packet:\n");

    for (VAR_10=0; VAR_10 < VAR_7; VAR_10++) {
        FUNC_6(VAR_5, "%02x ", VAR_6[VAR_10]);
        if (VAR_10 % 16 == 15)
            FUNC_6(VAR_5, "\n");
    }

    if (VAR_10 % 16)
        FUNC_6(VAR_5, "\n");

    VAR_11 = *VAR_6++;
    VAR_12 = ((*VAR_6)>>4)&15;
    VAR_6 += 1;

    VAR_13 = FUNC_7(VAR_8, VAR_11);

    if (!VAR_13) {
        VAR_13 = FUNC_5(sizeof(DVBSubCLUT));
        if (!VAR_13)
            return FUNC_0(VAR_2);

        FUNC_8(VAR_13, &VAR_4, sizeof(DVBSubCLUT));

        VAR_13->id = VAR_11;
        VAR_13->version = -1;

        VAR_13->next = VAR_8->clut_list;
        VAR_8->clut_list = VAR_13;
    }

    if (VAR_13->version != VAR_12) {

    VAR_13->version = VAR_12;

    while (VAR_6 + 4 < VAR_9) {
        VAR_14 = *VAR_6++;

        VAR_15 = (*VAR_6) & 0xe0;

        if (VAR_15 == 0) {
            FUNC_4(VAR_5, VAR_1, "Invalid clut depth 0x%x!\n", *VAR_6);
        }

        VAR_16 = (*VAR_6++) & 1;

        if (VAR_16) {
            VAR_17 = *VAR_6++;
            VAR_18 = *VAR_6++;
            VAR_19 = *VAR_6++;
            VAR_20 = *VAR_6++;
        } else {
            VAR_17 = VAR_6[0] & 0xfc;
            VAR_18 = (((VAR_6[0] & 3) << 2) | ((VAR_6[1] >> 6) & 3)) << 4;
            VAR_19 = (VAR_6[1] << 2) & 0xf0;
            VAR_20 = (VAR_6[1] << 6) & 0xc0;

            VAR_6 += 2;
        }

        if (VAR_17 == 0)
            VAR_20 = 0xff;

        FUNC_2(VAR_19, VAR_18);
        FUNC_3(VAR_21, VAR_22, VAR_23, VAR_17);

        FUNC_6(VAR_5, "clut %d := (%d,%d,%d,%d)\n", VAR_14, VAR_21, VAR_22, VAR_23, VAR_20);
        if (!!(VAR_15 & 0x80) + !!(VAR_15 & 0x40) + !!(VAR_15 & 0x20) > 1) {
            FUNC_6(VAR_5, "More than one bit level marked: %x\n", VAR_15);
            if (VAR_5->strict_std_compliance > VAR_3)
                return VAR_0;
        }

        if (VAR_15 & 0x80 && VAR_14 < 4)
            VAR_13->clut4[VAR_14] = FUNC_1(VAR_21,VAR_22,VAR_23,255 - VAR_20);
        else if (VAR_15 & 0x40 && VAR_14 < 16)
            VAR_13->clut16[VAR_14] = FUNC_1(VAR_21,VAR_22,VAR_23,255 - VAR_20);
        else if (VAR_15 & 0x20)
            VAR_13->clut256[VAR_14] = FUNC_1(VAR_21,VAR_22,VAR_23,255 - VAR_20);
    }
    }

    return 0;
}
