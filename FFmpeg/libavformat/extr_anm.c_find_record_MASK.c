
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int nb_records; TYPE_1__* pt; } ;
struct TYPE_4__ {int nb_records; int base_record; } ;
typedef TYPE_1__ Page ;
typedef TYPE_2__ AnmDemuxContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(const AnmDemuxContext *VAR_3, int VAR_4)
{
    int VAR_5;

    if (VAR_4 >= VAR_3->nb_records)
        return VAR_0;

    for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
        const Page *VAR_6 = &VAR_3->pt[VAR_5];
        if (VAR_6->nb_records > 0 && VAR_4 >= VAR_6->base_record && VAR_4 < VAR_6->base_record + VAR_6->nb_records)
            return VAR_5;
    }

    return VAR_1;
}
