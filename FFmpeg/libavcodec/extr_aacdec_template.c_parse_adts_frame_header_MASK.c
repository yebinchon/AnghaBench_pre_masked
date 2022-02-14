
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_12__ {int num_aac_frames; scalar_t__ chan_config; scalar_t__ sample_rate; int crc_absent; int object_type; int sampling_index; } ;
struct TYPE_11__ {int warned_num_aac_frames; TYPE_2__* oc; scalar_t__ dmono_mode; int avctx; } ;
struct TYPE_9__ {scalar_t__ chan_config; scalar_t__ sample_rate; int sbr; int ps; scalar_t__ frame_length_short; int object_type; int sampling_index; } ;
struct TYPE_10__ {scalar_t__ status; TYPE_1__ m4ac; } ;
typedef int GetBitContext ;
typedef TYPE_3__ AACContext ;
typedef TYPE_4__ AACADTSHeaderInfo ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,TYPE_4__*) ;
 int FUNC_3 (TYPE_3__*,int**,int,int ,int ) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int ,int**,int*,scalar_t__) ;
 int FUNC_6 (int *,int) ;

__attribute__((used)) static int FUNC_7(AACContext *VAR_6, GetBitContext *VAR_7)
{
    int VAR_8;
    AACADTSHeaderInfo VAR_9;
    uint8_t VAR_10[VAR_1*4][3];
    int VAR_11, VAR_12;

    VAR_8 = FUNC_2(VAR_7, &VAR_9);
    if (VAR_8 > 0) {
        if (!VAR_6->warned_num_aac_frames && VAR_9.num_aac_frames != 1) {


            FUNC_1(VAR_6->avctx,
                                          "More than one AAC RDB per ADTS frame");
            VAR_6->warned_num_aac_frames = 1;
        }
        FUNC_4(VAR_6);
        if (VAR_9.chan_config) {
            VAR_6->oc[1].m4ac.chan_config = VAR_9.chan_config;
            if ((VAR_12 = FUNC_5(VAR_6->avctx,
                                                  VAR_10,
                                                  &VAR_11,
                                                  VAR_9.chan_config)) < 0)
                return VAR_12;
            if ((VAR_12 = FUNC_3(VAR_6, VAR_10, VAR_11,
                                        FUNC_0(VAR_6->oc[1].status,
                                              VAR_4), 0)) < 0)
                return VAR_12;
        } else {
            VAR_6->oc[1].m4ac.chan_config = 0;





            if (VAR_6->dmono_mode && VAR_6->oc[0].status == VAR_3) {
                VAR_11 = 2;
                VAR_10[0][0] = VAR_10[1][0] = VAR_5;
                VAR_10[0][2] = VAR_10[1][2] = VAR_0;
                VAR_10[0][1] = 0;
                VAR_10[1][1] = 1;
                if (FUNC_3(VAR_6, VAR_10, VAR_11,
                                     VAR_4, 0))
                    return -7;
            }
        }
        VAR_6->oc[1].m4ac.sample_rate = VAR_9.sample_rate;
        VAR_6->oc[1].m4ac.sampling_index = VAR_9.sampling_index;
        VAR_6->oc[1].m4ac.object_type = VAR_9.object_type;
        VAR_6->oc[1].m4ac.frame_length_short = 0;
        if (VAR_6->oc[0].status != VAR_2 ||
            VAR_6->oc[0].m4ac.chan_config != VAR_9.chan_config ||
            VAR_6->oc[0].m4ac.sample_rate != VAR_9.sample_rate) {
            VAR_6->oc[1].m4ac.sbr = -1;
            VAR_6->oc[1].m4ac.ps = -1;
        }
        if (!VAR_9.crc_absent)
            FUNC_6(VAR_7, 16);
    }
    return VAR_8;
}
