
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_14__ {TYPE_4__* priv_data; } ;
struct TYPE_13__ {int flags; } ;
struct TYPE_12__ {int count; size_t duration; } ;
struct TYPE_11__ {int entry; TYPE_1__* cluster; } ;
struct TYPE_10__ {size_t cts; } ;
typedef TYPE_2__ MOVTrack ;
typedef TYPE_3__ MOVStts ;
typedef TYPE_4__ MOVMuxContext ;
typedef int AVIOContext ;
typedef TYPE_5__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__*) ;
 TYPE_3__* FUNC_2 (int,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,size_t) ;
 int FUNC_6 (int *,char*) ;

__attribute__((used)) static int FUNC_7(AVFormatContext *VAR_2, AVIOContext *VAR_3, MOVTrack *VAR_4)
{
    MOVMuxContext *VAR_5 = VAR_2->priv_data;
    MOVStts *VAR_6;
    uint32_t VAR_7 = 0;
    uint32_t VAR_8;
    int VAR_9;

    VAR_6 = FUNC_2((VAR_4->entry + 1), sizeof(*VAR_6));
    if (!VAR_6)
        return FUNC_0(VAR_0);
    VAR_6[0].count = 1;
    VAR_6[0].duration = VAR_4->cluster[0].cts;
    for (VAR_9 = 1; VAR_9 < VAR_4->entry; VAR_9++) {
        if (VAR_4->cluster[VAR_9].cts == VAR_6[VAR_7].duration) {
            VAR_6[VAR_7].count++;
        } else {
            VAR_7++;
            VAR_6[VAR_7].duration = VAR_4->cluster[VAR_9].cts;
            VAR_6[VAR_7].count = 1;
        }
    }
    VAR_7++;
    VAR_8 = 16 + (VAR_7 * 8);
    FUNC_5(VAR_3, VAR_8);
    FUNC_6(VAR_3, "ctts");
    if (VAR_5->flags & VAR_1)
        FUNC_3(VAR_3, 1);
    else
        FUNC_3(VAR_3, 0);
    FUNC_4(VAR_3, 0);
    FUNC_5(VAR_3, VAR_7);
    for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {
        FUNC_5(VAR_3, VAR_6[VAR_9].count);
        FUNC_5(VAR_3, VAR_6[VAR_9].duration);
    }
    FUNC_1(VAR_6);
    return VAR_8;
}
