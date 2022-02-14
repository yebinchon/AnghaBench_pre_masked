
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int segment_offset; } ;
typedef TYPE_1__ mkv_cues ;
typedef int int64_t ;


 TYPE_1__* FUNC_0 (int) ;

__attribute__((used)) static mkv_cues *FUNC_1(int64_t VAR_0)
{
    mkv_cues *VAR_1 = FUNC_0(sizeof(mkv_cues));
    if (!VAR_1)
        return ((void*)0);

    VAR_1->segment_offset = VAR_0;
    return VAR_1;
}
