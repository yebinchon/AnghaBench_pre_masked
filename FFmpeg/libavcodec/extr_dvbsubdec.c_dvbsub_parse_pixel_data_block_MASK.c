
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_14__ {int * priv_data; } ;
struct TYPE_13__ {int x_pos; int y_pos; int region_id; } ;
struct TYPE_12__ {int* pbuf; int dirty; int width; int height; int depth; scalar_t__ has_computed_clut; } ;
typedef TYPE_1__ DVBSubRegion ;
typedef TYPE_2__ DVBSubObjectDisplay ;
typedef int DVBSubContext ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int ,char*,int const,...) ;
 int FUNC_1 (TYPE_3__*,int*,int,int const**,int,int,int*,int) ;
 int FUNC_2 (TYPE_3__*,int*,int,int const**,int,int,int*,int) ;
 int FUNC_3 (TYPE_3__*,int*,int,int const**,int,int,int *,int) ;
 int FUNC_4 (TYPE_3__*,char*,...) ;
 TYPE_1__* FUNC_5 (int *,int ) ;

__attribute__((used)) static void FUNC_6(AVCodecContext *VAR_2, DVBSubObjectDisplay *VAR_3,
                                          const uint8_t *VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
    DVBSubContext *VAR_8 = VAR_2->priv_data;

    DVBSubRegion *VAR_9 = FUNC_5(VAR_8, VAR_3->region_id);
    const uint8_t *VAR_10 = VAR_4 + VAR_5;
    uint8_t *VAR_11;
    int VAR_12, VAR_13;
    int VAR_14;

    uint8_t VAR_15[] = { 0x0, 0x7, 0x8, 0xf};
    uint8_t VAR_16[] = {0x00, 0x77, 0x88, 0xff};
    uint8_t VAR_17[] = {0x00, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77,
                         0x88, 0x99, 0xaa, 0xbb, 0xcc, 0xdd, 0xee, 0xff};
    uint8_t *VAR_18;
    if (!VAR_9)
        return;

    VAR_11 = VAR_9->pbuf;
    VAR_9->dirty = 1;

    VAR_12 = VAR_3->x_pos;
    VAR_13 = VAR_3->y_pos;

    VAR_13 += VAR_6;

    while (VAR_4 < VAR_10) {
        if ((*VAR_4!=0xf0 && VAR_12 >= VAR_9->width) || VAR_13 >= VAR_9->height) {
            FUNC_0(VAR_2, VAR_0, "Invalid object location! %d-%d %d-%d %02x\n", VAR_12, VAR_9->width, VAR_13, VAR_9->height, *VAR_4);
            return;
        }

        switch (*VAR_4++) {
        case 0x10:
            if (VAR_9->depth == 8)
                VAR_18 = VAR_16;
            else if (VAR_9->depth == 4)
                VAR_18 = VAR_15;
            else
                VAR_18 = ((void*)0);

            VAR_12 = FUNC_1(VAR_2, VAR_11 + (VAR_13 * VAR_9->width),
                                            VAR_9->width, &VAR_4, VAR_10 - VAR_4,
                                            VAR_7, VAR_18, VAR_12);
            break;
        case 0x11:
            if (VAR_9->depth < 4) {
                FUNC_0(VAR_2, VAR_0, "4-bit pixel string in %d-bit region!\n", VAR_9->depth);
                return;
            }

            if (VAR_9->depth == 8)
                VAR_18 = VAR_17;
            else
                VAR_18 = ((void*)0);

            VAR_12 = FUNC_2(VAR_2, VAR_11 + (VAR_13 * VAR_9->width),
                                            VAR_9->width, &VAR_4, VAR_10 - VAR_4,
                                            VAR_7, VAR_18, VAR_12);
            break;
        case 0x12:
            if (VAR_9->depth < 8) {
                FUNC_0(VAR_2, VAR_0, "8-bit pixel string in %d-bit region!\n", VAR_9->depth);
                return;
            }

            VAR_12 = FUNC_3(VAR_2, VAR_11 + (VAR_13 * VAR_9->width),
                                            VAR_9->width, &VAR_4, VAR_10 - VAR_4,
                                            VAR_7, ((void*)0), VAR_12);
            break;

        case 0x20:
            VAR_15[0] = (*VAR_4) >> 4;
            VAR_15[1] = (*VAR_4++) & 0xf;
            VAR_15[2] = (*VAR_4) >> 4;
            VAR_15[3] = (*VAR_4++) & 0xf;
            break;
        case 0x21:
            for (VAR_14 = 0; VAR_14 < 4; VAR_14++)
                VAR_16[VAR_14] = *VAR_4++;
            break;
        case 0x22:
            for (VAR_14 = 0; VAR_14 < 16; VAR_14++)
                VAR_17[VAR_14] = *VAR_4++;
            break;

        case 0xf0:
            VAR_12 = VAR_3->x_pos;
            VAR_13 += 2;
            break;
        default:
            FUNC_0(VAR_2, VAR_1, "Unknown/unsupported pixel block 0x%x\n", *(VAR_4-1));
        }
    }

    VAR_9->has_computed_clut = 0;
}
