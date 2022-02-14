
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_9__ {int id; TYPE_1__* priv_data; } ;
struct TYPE_8__ {int nb_items; } ;
struct TYPE_7__ {scalar_t__ has_sidx; } ;
typedef TYPE_1__ MOVStreamContext ;
typedef TYPE_2__ MOVFragmentIndex ;
typedef TYPE_3__ AVStream ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int,int) ;

__attribute__((used)) static int FUNC_1(MOVFragmentIndex *VAR_1,
                                 AVStream *VAR_2, int64_t VAR_3)
{
    int VAR_4, VAR_5, VAR_6, VAR_7;
    int64_t VAR_8;
    int VAR_9 = -1;

    if (VAR_2) {


        MOVStreamContext *VAR_10 = VAR_2->priv_data;
        if (VAR_10->has_sidx)
            VAR_9 = VAR_2->id;
    }

    VAR_4 = -1;
    VAR_5 = VAR_1->nb_items;

    while (VAR_5 - VAR_4 > 1) {
        VAR_7 = VAR_6 = (VAR_4 + VAR_5) >> 1;

        while (VAR_6 < VAR_5 &&
               (VAR_8 = FUNC_0(VAR_1, VAR_6, VAR_9)) == VAR_0)
            VAR_6++;

        if (VAR_6 < VAR_5 && VAR_8 <= VAR_3)
            VAR_4 = VAR_6;
        else
            VAR_5 = VAR_7;
    }

    return VAR_4;
}
