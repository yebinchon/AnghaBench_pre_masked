
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_3__ {scalar_t__ original_duration; int edit_rate; int index_sid; } ;
typedef TYPE_1__ MXFTrack ;
typedef int MXFIndexTable ;
typedef int MXFContext ;


 scalar_t__ FUNC_0 (int *,int *,int,int ,int *,int*,int *,int ) ;
 int * FUNC_1 (int *,int ) ;

__attribute__((used)) static int FUNC_2(MXFContext *VAR_0, MXFTrack *VAR_1, int64_t VAR_2, int64_t *VAR_3)
{
    int64_t VAR_4, VAR_5, VAR_6, VAR_7;
    MXFIndexTable *VAR_8 = FUNC_1(VAR_0, VAR_1->index_sid);

    if (!VAR_8 || VAR_1->original_duration <= 0)
        return -1;

    VAR_4 = -1;
    VAR_5 = VAR_1->original_duration;

    while (VAR_5 - VAR_4 > 1) {
        VAR_6 = (VAR_4 + VAR_5) >> 1;
        if (FUNC_0(VAR_0, VAR_8, VAR_6, VAR_1->edit_rate, ((void*)0), &VAR_7, ((void*)0), 0) < 0)
            return -1;
        if (VAR_7 < VAR_2)
            VAR_4 = VAR_6;
        else
            VAR_5 = VAR_6;
    }

    *VAR_3 = VAR_5;

    return 0;
}
