
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint32_t ;
struct TYPE_8__ {int subrec_type; int rec_type; scalar_t__ rec_size; } ;
typedef TYPE_1__ TyRecHdr ;
struct TYPE_10__ {TYPE_2__* priv_data; } ;
struct TYPE_9__ {scalar_t__ tivo_series; scalar_t__ tivo_type; int pts_offset; int audio_type; int pes_length; } ;
typedef TYPE_2__ TYDemuxContext ;
typedef TYPE_3__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int const*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 void* VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_3__*,char*,...) ;
 int FUNC_4 (int ,int const*,int) ;
 TYPE_1__* FUNC_5 (int const*,int) ;
 int VAR_16 ;

__attribute__((used)) static int FUNC_6(AVFormatContext *VAR_17, const uint8_t *VAR_18)
{
    TYDemuxContext *VAR_19 = VAR_17->priv_data;
    int VAR_20, VAR_21;
    TyRecHdr *VAR_22;
    int VAR_23, VAR_24, VAR_25, VAR_26;


    if (FUNC_1(&VAR_18[0]) == VAR_10)
        return 0;



    VAR_20 = VAR_18[0];
    if (VAR_20 < 5) {

        return 0;
    }

    VAR_18 += 4;
    FUNC_3(VAR_17, "probe: chunk has %d recs\n", VAR_20);
    VAR_22 = FUNC_5(VAR_18, VAR_20);
    if (!VAR_22)
        return FUNC_0(VAR_4);
    VAR_23 = VAR_24 = VAR_25 = VAR_26 = 0;
    for (VAR_21 = 0; VAR_21 < VAR_20; VAR_21++) {
        switch (VAR_22[VAR_21].subrec_type << 8 | VAR_22[VAR_21].rec_type) {
        case 0x6e0:
            VAR_23++;
            break;
        case 0xbe0:
            VAR_24++;
            break;
        case 0x3c0:
            VAR_26++;
            break;
        case 0x9c0:
            VAR_25++;
            break;
        }
    }
    FUNC_3(VAR_17, "probe: chunk has %d 0x6e0 recs, %d 0xbe0 recs.\n",
            VAR_23, VAR_24);


    if (VAR_23 > 0) {
        FUNC_3(VAR_17, "detected Series 1 Tivo\n");
        VAR_19->tivo_series = VAR_11;
        VAR_19->pes_length = VAR_6;
    } else if (VAR_24 > 0) {
        FUNC_3(VAR_17, "detected Series 2 Tivo\n");
        VAR_19->tivo_series = VAR_12;
        VAR_19->pes_length = VAR_7;
    }
    if (VAR_25 > 0) {
        FUNC_3(VAR_17, "detected AC-3 Audio (DTivo)\n");
        VAR_19->audio_type = VAR_8;
        VAR_19->tivo_type = VAR_13;
        VAR_19->pts_offset = VAR_1;
        VAR_19->pes_length = VAR_0;
    } else if (VAR_26 > 0) {
        VAR_19->audio_type = VAR_9;
        FUNC_3(VAR_17, "detected MPEG Audio\n");
    }



    if (VAR_19->tivo_type == VAR_15) {
        uint32_t VAR_27 = 16 * VAR_20;

        for (VAR_21 = 0; VAR_21 < VAR_20; VAR_21++) {
            if (VAR_27 + VAR_22[VAR_21].rec_size > VAR_2)
                break;

            if ((VAR_22[VAR_21].subrec_type << 8 | VAR_22[VAR_21].rec_type) == 0x3c0 && VAR_22[VAR_21].rec_size > 15) {

                int VAR_28 = FUNC_4(VAR_16,
                        &VAR_18[VAR_27], 5);
                if (VAR_28 >= 0) {

                    if ((VAR_18[VAR_27 + 6 + VAR_28] & 0x80) == 0x80) {

                        if (VAR_19->tivo_series == VAR_11)
                            FUNC_3(VAR_17, "detected Stand-Alone Tivo\n");
                        VAR_19->tivo_type = VAR_14;
                        VAR_19->pts_offset = VAR_5;
                    } else {
                        if (VAR_19->tivo_series == VAR_11)
                            FUNC_3(VAR_17, "detected DirecTV Tivo\n");
                        VAR_19->tivo_type = VAR_13;
                        VAR_19->pts_offset = VAR_3;
                    }
                    break;
                }
            }
            VAR_27 += VAR_22[VAR_21].rec_size;
        }
    }
    FUNC_2(VAR_22);

    return 0;
}
