
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int* delta_q; int rows; int cols; int* roi_map; } ;
typedef TYPE_2__ vpx_roi_map_t ;
typedef int uint32_t ;
struct TYPE_11__ {int size; scalar_t__ data; } ;
struct TYPE_8__ {float den; float num; } ;
struct TYPE_10__ {int self_size; int top; int bottom; int left; int right; TYPE_1__ qoffset; } ;
typedef TYPE_3__ AVRegionOfInterest ;
typedef TYPE_4__ AVFrameSideData ;
typedef int AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int *,int ,char*,...) ;
 int* FUNC_3 (int,int) ;
 int FUNC_4 (TYPE_2__*,int ,int) ;

__attribute__((used)) static int FUNC_5(AVCodecContext *VAR_5, const AVFrameSideData *VAR_6, int VAR_7, int VAR_8,
                       vpx_roi_map_t *VAR_9, int VAR_10, int VAR_11)
{





    const AVRegionOfInterest *VAR_12 = ((void*)0);
    int VAR_13;
    uint32_t VAR_14;
    int VAR_15;







    int VAR_16[2 * 63 + 1] = { 0 };

    FUNC_4(VAR_9, 0, sizeof(*VAR_9));





    VAR_16[63] = 1;
    VAR_15 = 1;

    VAR_12 = (const AVRegionOfInterest*)VAR_6->data;
    VAR_14 = VAR_12->self_size;
    if (!VAR_14 || VAR_6->size % VAR_14) {
        FUNC_2(VAR_5, VAR_0, "Invalid AVRegionOfInterest.self_size.\n");
        return FUNC_0(VAR_2);
    }
    VAR_13 = VAR_6->size / VAR_14;





    for (int VAR_17 = 0; VAR_17 < VAR_13; VAR_17++) {
        int VAR_18;
        int VAR_19;

        VAR_12 = (const AVRegionOfInterest*)(VAR_6->data + VAR_14 * VAR_17);
        if (!VAR_12->qoffset.den) {
            FUNC_2(VAR_5, VAR_0, "AVRegionOfInterest.qoffset.den must not be zero.\n");
            return FUNC_0(VAR_2);
        }

        VAR_18 = (int)(VAR_12->qoffset.num * 1.0f / VAR_12->qoffset.den * 63);
        VAR_18 = FUNC_1(VAR_18, -63, 63);

        VAR_19 = VAR_18 + 63;
        if (!VAR_16[VAR_19]) {
            if (VAR_15 == VAR_11) {
                FUNC_2(VAR_5, VAR_1,
                       "ROI only supports %d segments (and segment 0 is reserved for non-ROIs), skipping the left ones.\n",
                       VAR_11);
                break;
            }

            VAR_16[VAR_19] = VAR_15 + 1;
            VAR_9->delta_q[VAR_15] = VAR_18;
            VAR_15++;
        }
    }

    VAR_9->rows = (VAR_8 + VAR_10 - 1) / VAR_10;
    VAR_9->cols = (VAR_7 + VAR_10 - 1) / VAR_10;
    VAR_9->roi_map = FUNC_3(VAR_9->rows * VAR_9->cols, sizeof(*VAR_9->roi_map));
    if (!VAR_9->roi_map) {
        FUNC_2(VAR_5, VAR_0, "roi_map alloc failed.\n");
        return FUNC_0(VAR_3);
    }




    for (int VAR_20 = VAR_13 - 1; VAR_20 >= 0; VAR_20--) {
        int VAR_21;
        int VAR_22;
        int VAR_23, VAR_24, VAR_25, VAR_26;

        VAR_12 = (const AVRegionOfInterest*)(VAR_6->data + VAR_14 * VAR_20);

        VAR_23 = FUNC_1(VAR_12->top / VAR_10, 0, VAR_9->rows);
        VAR_24 = FUNC_1((VAR_12->bottom + VAR_10 - 1) / VAR_10, 0, VAR_9->rows);
        VAR_25 = FUNC_1(VAR_12->left / VAR_10, 0, VAR_9->cols);
        VAR_26 = FUNC_1((VAR_12->right + VAR_10 - 1) / VAR_10, 0, VAR_9->cols);

        VAR_21 = (int)(VAR_12->qoffset.num * 1.0f / VAR_12->qoffset.den * 63);
        VAR_21 = FUNC_1(VAR_21, -63, 63);

        VAR_22 = VAR_16[VAR_21 + 63];
        if (VAR_22) {
            for (int VAR_27 = VAR_23; VAR_27 < VAR_24; VAR_27++)
                for (int VAR_28 = VAR_25; VAR_28 < VAR_26; VAR_28++)
                    VAR_9->roi_map[VAR_28 + VAR_27 * VAR_9->cols] = VAR_22 - 1;
        }
    }

    return 0;
}
