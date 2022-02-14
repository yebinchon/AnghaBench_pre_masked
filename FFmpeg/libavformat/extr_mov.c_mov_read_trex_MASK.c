
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_8__ {scalar_t__ trex_count; TYPE_2__* trex_data; TYPE_1__* fc; } ;
struct TYPE_7__ {void* flags; void* size; void* duration; void* stsd_id; void* track_id; } ;
struct TYPE_6__ {int duration; } ;
typedef TYPE_2__ MOVTrackExt ;
typedef TYPE_3__ MOVContext ;
typedef int MOVAtom ;
typedef int AVIOContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__**,scalar_t__,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(MOVContext *VAR_3, AVIOContext *VAR_4, MOVAtom VAR_5)
{
    MOVTrackExt *VAR_6;
    int VAR_7;

    if ((uint64_t)VAR_3->trex_count+1 >= VAR_2 / sizeof(*VAR_3->trex_data))
        return VAR_0;
    if ((VAR_7 = FUNC_0(&VAR_3->trex_data, VAR_3->trex_count + 1,
                                 sizeof(*VAR_3->trex_data))) < 0) {
        VAR_3->trex_count = 0;
        return VAR_7;
    }

    VAR_3->fc->duration = VAR_1;

    VAR_6 = &VAR_3->trex_data[VAR_3->trex_count++];
    FUNC_1(VAR_4);
    FUNC_2(VAR_4);
    VAR_6->track_id = FUNC_3(VAR_4);
    VAR_6->stsd_id = FUNC_3(VAR_4);
    VAR_6->duration = FUNC_3(VAR_4);
    VAR_6->size = FUNC_3(VAR_4);
    VAR_6->flags = FUNC_3(VAR_4);
    return 0;
}
