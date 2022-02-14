
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct eac3_info {int num_ind_sub; int data_rate; TYPE_1__* substream; } ;
struct TYPE_5__ {struct eac3_info* eac3_priv; } ;
struct TYPE_4__ {int fscod; int bsid; int bsmod; int acmod; int lfeon; int num_dep_sub; int chan_loc; } ;
typedef int PutBitContext ;
typedef TYPE_2__ MOVTrack ;
typedef int AVIOContext ;
typedef int AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,char*) ;
 int * FUNC_3 (int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *,int) ;
 int FUNC_9 (int *,int,int) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(AVFormatContext *VAR_3, AVIOContext *VAR_4, MOVTrack *VAR_5)
{
    PutBitContext VAR_6;
    uint8_t *VAR_7;
    struct eac3_info *VAR_8;
    int VAR_9, VAR_10;

    if (!VAR_5->eac3_priv) {
        FUNC_2(VAR_3, VAR_0,
               "Cannot write moov atom before EAC3 packets parsed.\n");
        return FUNC_0(VAR_1);
    }

    VAR_8 = VAR_5->eac3_priv;
    VAR_9 = 2 + ((34 * (VAR_8->num_ind_sub + 1) + 7) >> 3);
    VAR_7 = FUNC_3(VAR_9);
    if (!VAR_7) {
        return FUNC_0(VAR_2);
    }

    FUNC_8(&VAR_6, VAR_7, VAR_9);
    FUNC_9(&VAR_6, 13, VAR_8->data_rate);
    FUNC_9(&VAR_6, 3, VAR_8->num_ind_sub);
    for (VAR_10 = 0; VAR_10 <= VAR_8->num_ind_sub; VAR_10++) {
        FUNC_9(&VAR_6, 2, VAR_8->substream[VAR_10].fscod);
        FUNC_9(&VAR_6, 5, VAR_8->substream[VAR_10].bsid);
        FUNC_9(&VAR_6, 1, 0);
        FUNC_9(&VAR_6, 1, 0);
        FUNC_9(&VAR_6, 3, VAR_8->substream[VAR_10].bsmod);
        FUNC_9(&VAR_6, 3, VAR_8->substream[VAR_10].acmod);
        FUNC_9(&VAR_6, 1, VAR_8->substream[VAR_10].lfeon);
        FUNC_9(&VAR_6, 5, 0);
        FUNC_9(&VAR_6, 4, VAR_8->substream[VAR_10].num_dep_sub);
        if (!VAR_8->substream[VAR_10].num_dep_sub) {
            FUNC_9(&VAR_6, 1, 0);
        } else {
            FUNC_9(&VAR_6, 9, VAR_8->substream[VAR_10].chan_loc);
        }
    }
    FUNC_7(&VAR_6);
    VAR_9 = FUNC_10(&VAR_6) >> 3;

    FUNC_4(VAR_4, VAR_9 + 8);
    FUNC_6(VAR_4, "dec3");
    FUNC_5(VAR_4, VAR_7, VAR_9);

    FUNC_1(VAR_7);

    return VAR_9;
}
