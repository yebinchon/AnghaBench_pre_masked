
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int found_tfhd; int track_id; int flags; void* size; void* duration; void* stsd_id; int implicit_offset; int moof_offset; int base_data_offset; } ;
struct TYPE_7__ {int trex_count; int fc; int frag_index; TYPE_2__ fragment; TYPE_1__* trex_data; } ;
struct TYPE_5__ {int track_id; void* stsd_id; void* duration; void* size; void* flags; } ;
typedef TYPE_1__ MOVTrackExt ;
typedef TYPE_2__ MOVFragment ;
typedef TYPE_3__ MOVContext ;
typedef int MOVAtom ;
typedef int AVIOContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;

__attribute__((used)) static int FUNC_6(MOVContext *VAR_9, AVIOContext *VAR_10, MOVAtom VAR_11)
{
    MOVFragment *VAR_12 = &VAR_9->fragment;
    MOVTrackExt *VAR_13 = ((void*)0);
    int VAR_14, VAR_15, VAR_16;

    FUNC_1(VAR_10);
    VAR_14 = FUNC_2(VAR_10);

    VAR_15 = FUNC_3(VAR_10);
    if (!VAR_15)
        return VAR_0;
    for (VAR_16 = 0; VAR_16 < VAR_9->trex_count; VAR_16++)
        if (VAR_9->trex_data[VAR_16].track_id == VAR_15) {
            VAR_13 = &VAR_9->trex_data[VAR_16];
            break;
        }
    if (!VAR_13) {
        FUNC_0(VAR_9->fc, VAR_2, "could not find corresponding trex (id %u)\n", VAR_15);
        return 0;
    }
    VAR_9->fragment.found_tfhd = 1;
    VAR_12->track_id = VAR_15;
    FUNC_5(&VAR_9->frag_index, VAR_15);

    VAR_12->base_data_offset = VAR_14 & VAR_3 ?
                             FUNC_4(VAR_10) : VAR_14 & VAR_4 ?
                             VAR_12->moof_offset : VAR_12->implicit_offset;
    VAR_12->stsd_id = VAR_14 & VAR_8 ? FUNC_3(VAR_10) : VAR_13->stsd_id;

    VAR_12->duration = VAR_14 & VAR_5 ?
                     FUNC_3(VAR_10) : VAR_13->duration;
    VAR_12->size = VAR_14 & VAR_7 ?
                     FUNC_3(VAR_10) : VAR_13->size;
    VAR_12->flags = VAR_14 & VAR_6 ?
                     FUNC_3(VAR_10) : VAR_13->flags;
    FUNC_0(VAR_9->fc, VAR_1, "frag flags 0x%x\n", VAR_12->flags);

    return 0;
}
