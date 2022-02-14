
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int entry; int audio_vbr; } ;
typedef TYPE_1__ MOVTrack ;


 int FUNC_0 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_1(MOVTrack *VAR_0)
{
    int VAR_1, VAR_2;




    if (!VAR_0->audio_vbr)
        return 1;


    if (!VAR_0->entry)
        return 0;
    VAR_2 = FUNC_0(VAR_0, 0);
    for (VAR_1 = 1; VAR_1 < VAR_0->entry; VAR_1++) {
        if (FUNC_0(VAR_0, VAR_1) != VAR_2)
            return 0;
    }
    return VAR_2;
}
