
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
typedef int int64_t ;
struct TYPE_12__ {int size; } ;
struct TYPE_11__ {int flags; } ;
struct TYPE_10__ {int entry; scalar_t__ mode; int track_id; int default_duration; int default_size; int default_sample_flags; TYPE_1__* par; TYPE_7__* cluster; } ;
struct TYPE_9__ {scalar_t__ codec_type; } ;
typedef TYPE_2__ MOVTrack ;
typedef TYPE_3__ MOVMuxContext ;
typedef int AVIOContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 int FUNC_7 (TYPE_2__*,TYPE_7__*) ;
 int FUNC_8 (int *,int ) ;

__attribute__((used)) static int FUNC_9(AVIOContext *VAR_13, MOVMuxContext *VAR_14,
                              MOVTrack *VAR_15, int64_t VAR_16)
{
    int64_t VAR_17 = FUNC_0(VAR_13);
    uint32_t VAR_18 = VAR_11 | VAR_9 |
                     VAR_7;
    if (!VAR_15->entry) {
        VAR_18 |= VAR_12;
    } else {
        VAR_18 |= VAR_10;
    }
    if (VAR_14->flags & VAR_2)
        VAR_18 &= ~VAR_7;
    if (VAR_14->flags & VAR_1) {
        VAR_18 &= ~VAR_7;
        VAR_18 |= VAR_8;
    }





    if (VAR_15->mode == VAR_3)
        VAR_18 &= ~(VAR_11 | VAR_9 |
                   VAR_7);

    FUNC_3(VAR_13, 0);
    FUNC_5(VAR_13, "tfhd");
    FUNC_1(VAR_13, 0);
    FUNC_2(VAR_13, VAR_18);

    FUNC_3(VAR_13, VAR_15->track_id);
    if (VAR_18 & VAR_7)
        FUNC_4(VAR_13, VAR_16);
    if (VAR_18 & VAR_9) {
        VAR_15->default_duration = FUNC_6(VAR_15, 0);
        FUNC_3(VAR_13, VAR_15->default_duration);
    }
    if (VAR_18 & VAR_11) {
        VAR_15->default_size = VAR_15->entry ? VAR_15->cluster[0].size : 1;
        FUNC_3(VAR_13, VAR_15->default_size);
    } else
        VAR_15->default_size = -1;

    if (VAR_18 & VAR_10) {


        if (VAR_15->entry > 1)
            VAR_15->default_sample_flags = FUNC_7(VAR_15, &VAR_15->cluster[1]);
        else
            VAR_15->default_sample_flags =
                VAR_15->par->codec_type == VAR_0 ?
                (VAR_5 | VAR_6) :
                VAR_4;
        FUNC_3(VAR_13, VAR_15->default_sample_flags);
    }

    return FUNC_8(VAR_13, VAR_17);
}
