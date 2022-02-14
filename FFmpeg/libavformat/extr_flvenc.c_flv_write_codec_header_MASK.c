
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int64_t ;
typedef int data ;
struct TYPE_13__ {scalar_t__ codec_id; scalar_t__ codec_type; int codec_tag; int extradata_size; int extradata; } ;
struct TYPE_12__ {TYPE_2__* priv_data; int * pb; } ;
struct TYPE_11__ {int flags; TYPE_1__* audio_par; } ;
struct TYPE_10__ {int channels; scalar_t__ sample_rate; int profile; } ;
typedef int PutBitContext ;
typedef TYPE_2__ FLVContext ;
typedef int AVIOContext ;
typedef TYPE_3__ AVFormatContext ;
typedef TYPE_4__ AVCodecParameters ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (TYPE_3__*,int ,char*,int,int) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_11 (int *,int*,int) ;
 scalar_t__* VAR_10 ;
 int FUNC_12 (int *,int,int) ;
 int FUNC_13 (int *,int) ;

__attribute__((used)) static void FUNC_14(AVFormatContext* VAR_11, AVCodecParameters* VAR_12, int64_t VAR_13) {
    int64_t VAR_14;
    AVIOContext *VAR_15 = VAR_11->pb;
    FLVContext *VAR_16 = VAR_11->priv_data;

    if (VAR_12->codec_id == VAR_1 || VAR_12->codec_id == VAR_2
            || VAR_12->codec_id == VAR_3) {
        int64_t VAR_17;
        FUNC_4(VAR_15,
                VAR_12->codec_type == VAR_0 ?
                        VAR_8 : VAR_7);
        FUNC_5(VAR_15, 0);
        FUNC_13(VAR_15, VAR_13);
        FUNC_5(VAR_15, 0);
        VAR_17 = FUNC_3(VAR_15);
        if (VAR_12->codec_id == VAR_1) {
            FUNC_4(VAR_15, FUNC_10(VAR_11, VAR_12));
            FUNC_4(VAR_15, 0);

            if (!VAR_12->extradata_size && (VAR_16->flags & VAR_5)) {
                PutBitContext VAR_18;
                int VAR_19;
                int VAR_20 = VAR_16->audio_par->channels
                        - (VAR_16->audio_par->channels == 8 ? 1 : 0);
                uint8_t VAR_21[2];

                for (VAR_19 = 0; VAR_19 < 16;
                        VAR_19++)
                    if (VAR_16->audio_par->sample_rate
                            == VAR_10[VAR_19])
                        break;

                FUNC_11(&VAR_18, VAR_21, sizeof(VAR_21));
                FUNC_12(&VAR_18, 5, VAR_16->audio_par->profile + 1);
                FUNC_12(&VAR_18, 4, VAR_19);
                FUNC_12(&VAR_18, 4, VAR_20);
                FUNC_12(&VAR_18, 1, 0);
                FUNC_12(&VAR_18, 1, 0);
                FUNC_12(&VAR_18, 1, 0);
                FUNC_9(&VAR_18);

                FUNC_4(VAR_15, VAR_21[0]);
                FUNC_4(VAR_15, VAR_21[1]);

                FUNC_0(VAR_11, VAR_4, "AAC sequence header: %02x %02x.\n",
                        VAR_21[0], VAR_21[1]);
            }
            FUNC_7(VAR_15, VAR_12->extradata, VAR_12->extradata_size);
        } else {
            FUNC_4(VAR_15, VAR_12->codec_tag | VAR_6);
            FUNC_4(VAR_15, 0);
            FUNC_5(VAR_15, 0);
            FUNC_8(VAR_15, VAR_12->extradata, VAR_12->extradata_size);
        }
        VAR_14 = FUNC_3(VAR_15) - VAR_17;
        FUNC_1(VAR_15, -VAR_14 - 10, VAR_9);
        FUNC_5(VAR_15, VAR_14);
        FUNC_2(VAR_15, VAR_14 + 10 - 3);
        FUNC_6(VAR_15, VAR_14 + 11);
    }
}
