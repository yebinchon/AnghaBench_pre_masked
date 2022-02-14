
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
typedef int int64_t ;
struct TYPE_10__ {int size; int pos; int cts; } ;
struct TYPE_9__ {int flags; scalar_t__ first_trun; } ;
struct TYPE_8__ {int default_duration; int default_size; int default_sample_flags; scalar_t__ entry; int flags; int data_offset; TYPE_6__* cluster; } ;
typedef TYPE_1__ MOVTrack ;
typedef TYPE_2__ MOVMuxContext ;
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
 int VAR_9 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*,TYPE_6__*) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static int FUNC_8(AVIOContext *VAR_10, MOVMuxContext *VAR_11,
                              MOVTrack *VAR_12, int VAR_13,
                              int VAR_14, int VAR_15)
{
    int64_t VAR_16 = FUNC_0(VAR_10);
    uint32_t VAR_17 = VAR_4;
    int VAR_18;

    for (VAR_18 = VAR_14; VAR_18 < VAR_15; VAR_18++) {
        if (FUNC_5(VAR_12, VAR_18) != VAR_12->default_duration)
            VAR_17 |= VAR_7;
        if (VAR_12->cluster[VAR_18].size != VAR_12->default_size)
            VAR_17 |= VAR_9;
        if (VAR_18 > VAR_14 && FUNC_6(VAR_12, &VAR_12->cluster[VAR_18]) != VAR_12->default_sample_flags)
            VAR_17 |= VAR_8;
    }
    if (!(VAR_17 & VAR_8) && VAR_12->entry > 0 &&
         FUNC_6(VAR_12, &VAR_12->cluster[0]) != VAR_12->default_sample_flags)
        VAR_17 |= VAR_5;
    if (VAR_12->flags & VAR_3)
        VAR_17 |= VAR_6;

    FUNC_3(VAR_10, 0);
    FUNC_4(VAR_10, "trun");
    if (VAR_11->flags & VAR_1)
        FUNC_1(VAR_10, 1);
    else
        FUNC_1(VAR_10, 0);
    FUNC_2(VAR_10, VAR_17);

    FUNC_3(VAR_10, VAR_15 - VAR_14);
    if (VAR_11->flags & VAR_2 &&
        !(VAR_11->flags & VAR_0) &&
        !VAR_11->first_trun)
        FUNC_3(VAR_10, 0);
    else
        FUNC_3(VAR_10, VAR_13 + 8 + VAR_12->data_offset +
                      VAR_12->cluster[VAR_14].pos);
    if (VAR_17 & VAR_5)
        FUNC_3(VAR_10, FUNC_6(VAR_12, &VAR_12->cluster[VAR_14]));

    for (VAR_18 = VAR_14; VAR_18 < VAR_15; VAR_18++) {
        if (VAR_17 & VAR_7)
            FUNC_3(VAR_10, FUNC_5(VAR_12, VAR_18));
        if (VAR_17 & VAR_9)
            FUNC_3(VAR_10, VAR_12->cluster[VAR_18].size);
        if (VAR_17 & VAR_8)
            FUNC_3(VAR_10, FUNC_6(VAR_12, &VAR_12->cluster[VAR_18]));
        if (VAR_17 & VAR_6)
            FUNC_3(VAR_10, VAR_12->cluster[VAR_18].cts);
    }

    VAR_11->first_trun = 0;
    return FUNC_7(VAR_10, VAR_16);
}
