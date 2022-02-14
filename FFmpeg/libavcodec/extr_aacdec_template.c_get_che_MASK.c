
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {int tags_mapped; int *** che; int *** tag_che_map; TYPE_2__* oc; int warned_remapping_once; int avctx; } ;
struct TYPE_7__ {int chan_config; int ps; scalar_t__ sbr; } ;
struct TYPE_8__ {TYPE_1__ m4ac; } ;
typedef int ChannelElement ;
typedef TYPE_3__ AACContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,char*,...) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int **,int,int ,int) ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (int ,int **,int*,int) ;
 int * VAR_7 ;

__attribute__((used)) static ChannelElement *FUNC_4(AACContext *VAR_8, int VAR_9, int VAR_10)
{


    if (!VAR_8->oc[1].m4ac.chan_config) {
        return VAR_8->tag_che_map[VAR_9][VAR_10];
    }

    if (!VAR_8->tags_mapped && VAR_9 == VAR_4 &&
        VAR_8->oc[1].m4ac.chan_config == 1) {
        uint8_t VAR_11[VAR_2*4][3];
        int VAR_12;
        FUNC_2(VAR_8);

        FUNC_0(VAR_8->avctx, VAR_0, "mono with CPE\n");

        if (FUNC_3(VAR_8->avctx, VAR_11,
                                       &VAR_12, 2) < 0)
            return ((void*)0);
        if (FUNC_1(VAR_8, VAR_11, VAR_12,
                             VAR_3, 1) < 0)
            return ((void*)0);

        VAR_8->oc[1].m4ac.chan_config = 2;
        VAR_8->oc[1].m4ac.ps = 0;
    }

    if (!VAR_8->tags_mapped && VAR_9 == VAR_6 &&
        VAR_8->oc[1].m4ac.chan_config == 2) {
        uint8_t VAR_13[VAR_2 * 4][3];
        int VAR_14;
        FUNC_2(VAR_8);

        FUNC_0(VAR_8->avctx, VAR_0, "stereo with SCE\n");

        if (FUNC_3(VAR_8->avctx, VAR_13,
                                       &VAR_14, 1) < 0)
            return ((void*)0);
        if (FUNC_1(VAR_8, VAR_13, VAR_14,
                             VAR_3, 1) < 0)
            return ((void*)0);

        VAR_8->oc[1].m4ac.chan_config = 1;
        if (VAR_8->oc[1].m4ac.sbr)
            VAR_8->oc[1].m4ac.ps = -1;
    }


    switch (VAR_8->oc[1].m4ac.chan_config) {
    case 12:
    case 7:
        if (VAR_8->tags_mapped == 3 && VAR_9 == VAR_4) {
            VAR_8->tags_mapped++;
            return VAR_8->tag_che_map[VAR_4][VAR_10] = VAR_8->che[VAR_4][2];
        }
    case 11:
        if (VAR_8->tags_mapped == 2 &&
            VAR_8->oc[1].m4ac.chan_config == 11 &&
            VAR_9 == VAR_6) {
            VAR_8->tags_mapped++;
            return VAR_8->tag_che_map[VAR_6][VAR_10] = VAR_8->che[VAR_6][1];
        }
    case 6:






        if (VAR_8->tags_mapped == VAR_7[VAR_8->oc[1].m4ac.chan_config] - 1 && (VAR_9 == VAR_5 || VAR_9 == VAR_6)) {
            if (!VAR_8->warned_remapping_once && (VAR_9 != VAR_5 || VAR_10 != 0)) {
                FUNC_0(VAR_8->avctx, VAR_1,
                   "This stream seems to incorrectly report its last channel as %s[%d], mapping to LFE[0]\n",
                   VAR_9 == VAR_6 ? "SCE" : "LFE", VAR_10);
                VAR_8->warned_remapping_once++;
            }
            VAR_8->tags_mapped++;
            return VAR_8->tag_che_map[VAR_9][VAR_10] = VAR_8->che[VAR_5][0];
        }
    case 5:
        if (VAR_8->tags_mapped == 2 && VAR_9 == VAR_4) {
            VAR_8->tags_mapped++;
            return VAR_8->tag_che_map[VAR_4][VAR_10] = VAR_8->che[VAR_4][1];
        }
    case 4:






        if (VAR_8->tags_mapped == VAR_7[VAR_8->oc[1].m4ac.chan_config] - 1 && (VAR_9 == VAR_5 || VAR_9 == VAR_6)) {
            if (!VAR_8->warned_remapping_once && (VAR_9 != VAR_6 || VAR_10 != 1)) {
                FUNC_0(VAR_8->avctx, VAR_1,
                   "This stream seems to incorrectly report its last channel as %s[%d], mapping to SCE[1]\n",
                   VAR_9 == VAR_6 ? "SCE" : "LFE", VAR_10);
                VAR_8->warned_remapping_once++;
            }
            VAR_8->tags_mapped++;
            return VAR_8->tag_che_map[VAR_9][VAR_10] = VAR_8->che[VAR_6][1];
        }
        if (VAR_8->tags_mapped == 2 &&
            VAR_8->oc[1].m4ac.chan_config == 4 &&
            VAR_9 == VAR_6) {
            VAR_8->tags_mapped++;
            return VAR_8->tag_che_map[VAR_6][VAR_10] = VAR_8->che[VAR_6][1];
        }
    case 3:
    case 2:
        if (VAR_8->tags_mapped == (VAR_8->oc[1].m4ac.chan_config != 2) &&
            VAR_9 == VAR_4) {
            VAR_8->tags_mapped++;
            return VAR_8->tag_che_map[VAR_4][VAR_10] = VAR_8->che[VAR_4][0];
        } else if (VAR_8->oc[1].m4ac.chan_config == 2) {
            return ((void*)0);
        }
    case 1:
        if (!VAR_8->tags_mapped && VAR_9 == VAR_6) {
            VAR_8->tags_mapped++;
            return VAR_8->tag_che_map[VAR_6][VAR_10] = VAR_8->che[VAR_6][0];
        }
    default:
        return ((void*)0);
    }
}
