
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_21__ {TYPE_1__* bands; } ;
struct TYPE_20__ {int max_pixels; } ;
struct TYPE_18__ {int pic_height; int pic_width; int tile_height; int tile_width; int chroma_height; int chroma_width; int luma_bands; int chroma_bands; } ;
struct TYPE_19__ {int prev_frame_type; int frame_type; int has_b_frames; int data_size; int is_scalable; int frame_num; int rvmap_sel; int pic_glob_quant; int unknown1; int checksum; int gb; void* in_q; void* in_imf; int blk_vlc; int mb_vlc; TYPE_2__ pic_conf; TYPE_7__* planes; void* uses_tiling; void* has_transp; } ;
struct TYPE_17__ {int mb_size; int blk_size; } ;
typedef TYPE_2__ IVIPicConfig ;
typedef TYPE_3__ IVI45DecContext ;
typedef TYPE_4__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int,int,int ,int ,int ,TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,int ,char*,...) ;
 void* FUNC_4 (int *) ;
 int FUNC_5 (TYPE_4__*,char*) ;
 scalar_t__ FUNC_6 (int *,void*,int ,int *,TYPE_4__*) ;
 scalar_t__ FUNC_7 (TYPE_4__*,TYPE_7__*,TYPE_2__*,int) ;
 scalar_t__ FUNC_8 (TYPE_7__*,int,int) ;
 int FUNC_9 (int *,int) ;
 void* FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 void** VAR_9 ;
 scalar_t__ FUNC_12 (TYPE_2__*,TYPE_2__*) ;
 void* FUNC_13 (int,int) ;
 int FUNC_14 (int *,int) ;
 int FUNC_15 (int *,int) ;

__attribute__((used)) static int FUNC_16(IVI45DecContext *VAR_10, AVCodecContext *VAR_11)
{
    int VAR_12, VAR_13, VAR_14;
    IVIPicConfig VAR_15;

    if (FUNC_9(&VAR_10->gb, 18) != 0x3FFF8) {
        FUNC_3(VAR_11, VAR_1, "Invalid picture start code!\n");
        return VAR_0;
    }

    VAR_10->prev_frame_type = VAR_10->frame_type;
    VAR_10->frame_type = FUNC_9(&VAR_10->gb, 3);
    if (VAR_10->frame_type == 7) {
        FUNC_3(VAR_11, VAR_1, "Invalid frame type: %d\n", VAR_10->frame_type);
        return VAR_0;
    }

    if (VAR_10->frame_type == VAR_4)
        VAR_10->has_b_frames = 1;

    VAR_10->has_transp = FUNC_10(&VAR_10->gb);


    if (FUNC_10(&VAR_10->gb)) {
        FUNC_3(VAR_11, VAR_1, "Sync bit is set!\n");
        return VAR_0;
    }

    VAR_10->data_size = FUNC_10(&VAR_10->gb) ? FUNC_9(&VAR_10->gb, 24) : 0;


    if (VAR_10->frame_type >= VAR_5) {
        FUNC_5(VAR_11, "Null frame encountered!\n");
        return 0;
    }




    if (FUNC_10(&VAR_10->gb)) {
        FUNC_15(&VAR_10->gb, 32);
        FUNC_5(VAR_11, "Password-protected clip!\n");
    }

    VAR_12 = FUNC_9(&VAR_10->gb, 3);
    if (VAR_12 == VAR_6) {
        VAR_15.pic_height = FUNC_9(&VAR_10->gb, 16);
        VAR_15.pic_width = FUNC_9(&VAR_10->gb, 16);
    } else {
        VAR_15.pic_height = VAR_9[VAR_12 * 2 + 1];
        VAR_15.pic_width = VAR_9[VAR_12 * 2 ];
    }


    VAR_10->uses_tiling = FUNC_10(&VAR_10->gb);
    if (VAR_10->uses_tiling) {
        VAR_15.tile_height = FUNC_13(VAR_15.pic_height, FUNC_9(&VAR_10->gb, 4));
        VAR_15.tile_width = FUNC_13(VAR_15.pic_width, FUNC_9(&VAR_10->gb, 4));
    } else {
        VAR_15.tile_height = VAR_15.pic_height;
        VAR_15.tile_width = VAR_15.pic_width;
    }


    if (FUNC_9(&VAR_10->gb, 2)) {
        FUNC_3(VAR_11, VAR_1, "Only YVU9 picture format is supported!\n");
        return VAR_0;
    }
    VAR_15.chroma_height = (VAR_15.pic_height + 3) >> 2;
    VAR_15.chroma_width = (VAR_15.pic_width + 3) >> 2;


    VAR_15.luma_bands = FUNC_4(&VAR_10->gb);
    VAR_15.chroma_bands = 0;
    if (VAR_15.luma_bands)
        VAR_15.chroma_bands = FUNC_4(&VAR_10->gb);

    if (FUNC_2(VAR_15.pic_width, VAR_15.pic_height, VAR_11->max_pixels, VAR_2, 0, VAR_11) < 0) {
        FUNC_3(VAR_11, VAR_1, "picture dimensions %d %d cannot be decoded\n",
               VAR_15.pic_width, VAR_15.pic_height);
        return VAR_0;
    }

    VAR_10->is_scalable = VAR_15.luma_bands != 1 || VAR_15.chroma_bands != 1;
    if (VAR_10->is_scalable && (VAR_15.luma_bands != 4 || VAR_15.chroma_bands != 1)) {
        FUNC_3(VAR_11, VAR_1, "Scalability: unsupported subdivision! Luma bands: %d, chroma bands: %d\n",
               VAR_15.luma_bands, VAR_15.chroma_bands);
        return VAR_0;
    }


    if (FUNC_12(&VAR_15, &VAR_10->pic_conf)) {
        if (FUNC_7(VAR_11, VAR_10->planes, &VAR_15, 1)) {
            FUNC_3(VAR_11, VAR_1, "Couldn't reallocate color planes!\n");
            VAR_10->pic_conf.luma_bands = 0;
            return FUNC_0(VAR_3);
        }

        VAR_10->pic_conf = VAR_15;


        for (VAR_14 = 0; VAR_14 <= 2; VAR_14++) {
            for (VAR_13 = 0; VAR_13 < (!VAR_14 ? VAR_15.luma_bands : VAR_15.chroma_bands); VAR_13++) {
                VAR_10->planes[VAR_14].bands[VAR_13].mb_size = !VAR_14 ? (!VAR_10->is_scalable ? 16 : 8) : 4;
                VAR_10->planes[VAR_14].bands[VAR_13].blk_size = !VAR_14 ? 8 : 4;
            }
        }

        if (FUNC_8(VAR_10->planes, VAR_10->pic_conf.tile_width,
                              VAR_10->pic_conf.tile_height)) {
            FUNC_3(VAR_11, VAR_1,
                   "Couldn't reallocate internal structures!\n");
            return FUNC_0(VAR_3);
        }
    }

    VAR_10->frame_num = FUNC_10(&VAR_10->gb) ? FUNC_9(&VAR_10->gb, 20) : 0;


    if (FUNC_10(&VAR_10->gb))
        FUNC_14(&VAR_10->gb, 8);


    if (FUNC_6(&VAR_10->gb, FUNC_10(&VAR_10->gb), VAR_8, &VAR_10->mb_vlc, VAR_11) ||
        FUNC_6(&VAR_10->gb, FUNC_10(&VAR_10->gb), VAR_7, &VAR_10->blk_vlc, VAR_11))
        return VAR_0;

    VAR_10->rvmap_sel = FUNC_10(&VAR_10->gb) ? FUNC_9(&VAR_10->gb, 3) : 8;

    VAR_10->in_imf = FUNC_10(&VAR_10->gb);
    VAR_10->in_q = FUNC_10(&VAR_10->gb);

    VAR_10->pic_glob_quant = FUNC_9(&VAR_10->gb, 5);


    VAR_10->unknown1 = FUNC_10(&VAR_10->gb) ? FUNC_9(&VAR_10->gb, 3) : 0;

    VAR_10->checksum = FUNC_10(&VAR_10->gb) ? FUNC_9(&VAR_10->gb, 16) : 0;


    while (FUNC_10(&VAR_10->gb)) {
        FUNC_5(VAR_11, "Pic hdr extension encountered!\n");
        if (FUNC_11(&VAR_10->gb) < 10)
            return VAR_0;
        FUNC_14(&VAR_10->gb, 8);
    }

    if (FUNC_10(&VAR_10->gb)) {
        FUNC_3(VAR_11, VAR_1, "Bad blocks bits encountered!\n");
    }

    FUNC_1(&VAR_10->gb);

    return 0;
}
