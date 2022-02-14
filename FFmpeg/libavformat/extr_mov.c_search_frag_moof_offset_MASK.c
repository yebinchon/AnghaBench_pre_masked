
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_5__ {int nb_items; TYPE_1__* item; } ;
struct TYPE_4__ {scalar_t__ moof_offset; } ;
typedef TYPE_2__ MOVFragmentIndex ;



__attribute__((used)) static int FUNC_0(MOVFragmentIndex *VAR_0, int64_t VAR_1)
{
    int VAR_2, VAR_3, VAR_4;
    int64_t VAR_5;


    if (!VAR_0->nb_items ||
        VAR_0->item[VAR_0->nb_items - 1].moof_offset < VAR_1)
        return VAR_0->nb_items;

    VAR_2 = -1;
    VAR_3 = VAR_0->nb_items;

    while (VAR_3 - VAR_2 > 1) {
        VAR_4 = (VAR_2 + VAR_3) >> 1;
        VAR_5 = VAR_0->item[VAR_4].moof_offset;
        if (VAR_5 >= VAR_1)
            VAR_3 = VAR_4;
        if (VAR_5 <= VAR_1)
            VAR_2 = VAR_4;
    }
    return VAR_3;
}
