
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_5__ {int entry; scalar_t__ track_duration; scalar_t__ start_dts; TYPE_1__* cluster; } ;
struct TYPE_4__ {scalar_t__ dts; } ;
typedef TYPE_2__ MOVTrack ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(MOVTrack *VAR_1, int VAR_2)
{
    int64_t VAR_3;

    if (VAR_2 >= VAR_1->entry)
        return 0;

    if (VAR_2 + 1 == VAR_1->entry)
        VAR_3 = VAR_1->track_duration + VAR_1->start_dts;
    else
        VAR_3 = VAR_1->cluster[VAR_2 + 1].dts;

    VAR_3 -= VAR_1->cluster[VAR_2].dts;

    FUNC_0(VAR_3 >= 0);
    FUNC_0(VAR_3 <= VAR_0);

    return VAR_3;
}
