
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_19__ {int num_aac_frames; int chan_config; int sampling_index; int object_type; int crc_absent; } ;
struct TYPE_18__ {int first_frame_done; } ;
struct TYPE_17__ {TYPE_1__* par_in; TYPE_4__* priv_data; } ;
struct TYPE_16__ {int size; int data; } ;
struct TYPE_15__ {scalar_t__ extradata; } ;
typedef int PutBitContext ;
typedef int GetBitContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVBSFContext ;
typedef TYPE_4__ AACBSFContext ;
typedef TYPE_5__ AACADTSHeaderInfo ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_3__*,int ,char*) ;
 int * FUNC_3 (TYPE_2__*,int ,int) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_3__*,char*) ;
 scalar_t__ FUNC_6 (int *,TYPE_5__*) ;
 int FUNC_7 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int,int) ;
 int FUNC_13 (int *,int *,int) ;
 int FUNC_14 (int *,int *,int) ;
 int FUNC_15 (int *,int,int ) ;

__attribute__((used)) static int FUNC_16(AVBSFContext *VAR_7, AVPacket *VAR_8)
{
    AACBSFContext *VAR_9 = VAR_7->priv_data;

    GetBitContext VAR_10;
    PutBitContext VAR_11;
    AACADTSHeaderInfo VAR_12;
    int VAR_13;

    VAR_13 = FUNC_7(VAR_7, VAR_8);
    if (VAR_13 < 0)
        return VAR_13;

    if (VAR_7->par_in->extradata && VAR_8->size >= 2 && (FUNC_1(VAR_8->data) >> 4) != 0xfff)
        return 0;

    if (VAR_8->size < VAR_2)
        goto packet_too_small;

    FUNC_12(&VAR_10, VAR_8->data, VAR_2 * 8);

    if (FUNC_6(&VAR_10, &VAR_12) < 0) {
        FUNC_2(VAR_7, VAR_3, "Error parsing ADTS frame header!\n");
        VAR_13 = VAR_0;
        goto fail;
    }

    if (!VAR_12.crc_absent && VAR_12.num_aac_frames > 1) {
        FUNC_5(VAR_7,
                                      "Multiple RDBs per frame with CRC");
        VAR_13 = VAR_1;
        goto fail;
    }

    VAR_8->size -= VAR_2 + 2 * !VAR_12.crc_absent;
    if (VAR_8->size <= 0)
        goto packet_too_small;
    VAR_8->data += VAR_2 + 2 * !VAR_12.crc_absent;

    if (!VAR_9->first_frame_done) {
        int VAR_14 = 0;
        uint8_t VAR_15[VAR_6];
        uint8_t *VAR_16;

        if (!VAR_12.chan_config) {
            FUNC_12(&VAR_10, VAR_8->data, VAR_8->size * 8);
            if (FUNC_10(&VAR_10, 3) != 5) {
                FUNC_5(VAR_7,
                                              "PCE-based channel configuration "
                                              "without PCE as first syntax "
                                              "element");
                VAR_13 = VAR_1;
                goto fail;
            }
            FUNC_13(&VAR_11, VAR_15, VAR_6);
            VAR_14 = FUNC_8(&VAR_11, &VAR_10) / 8;
            FUNC_9(&VAR_11);
            VAR_8->size -= FUNC_11(&VAR_10)/8;
            VAR_8->data += FUNC_11(&VAR_10)/8;
        }

        VAR_16 = FUNC_3(VAR_8, VAR_4,
                                            2 + VAR_14);
        if (!VAR_16) {
            VAR_13 = FUNC_0(VAR_5);
            goto fail;
        }

        FUNC_13(&VAR_11, VAR_16, 2 + VAR_14);
        FUNC_15(&VAR_11, 5, VAR_12.object_type);
        FUNC_15(&VAR_11, 4, VAR_12.sampling_index);
        FUNC_15(&VAR_11, 4, VAR_12.chan_config);
        FUNC_15(&VAR_11, 1, 0);
        FUNC_15(&VAR_11, 1, 0);
        FUNC_15(&VAR_11, 1, 0);
        FUNC_9(&VAR_11);
        if (VAR_14) {
            FUNC_14(VAR_16 + 2, VAR_15, VAR_14);
        }

        VAR_9->first_frame_done = 1;
    }

    return 0;

packet_too_small:
    FUNC_2(VAR_7, VAR_3, "Input packet too small\n");
    VAR_13 = VAR_0;
fail:
    FUNC_4(VAR_8);
    return VAR_13;
}
