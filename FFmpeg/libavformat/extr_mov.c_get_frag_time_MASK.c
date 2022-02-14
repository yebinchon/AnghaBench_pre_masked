
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_10__ {TYPE_1__* item; } ;
struct TYPE_9__ {scalar_t__ sidx_pts; } ;
struct TYPE_8__ {int nb_stream_info; TYPE_2__* stream_info; } ;
typedef TYPE_2__ MOVFragmentStreamInfo ;
typedef TYPE_3__ MOVFragmentIndex ;


 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_0 (TYPE_3__*,int,int) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static int64_t FUNC_2(MOVFragmentIndex *VAR_1,
                             int VAR_2, int VAR_3)
{
    MOVFragmentStreamInfo * VAR_4;
    int64_t VAR_5;
    int VAR_6;

    if (VAR_3 >= 0) {
        VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);
        return VAR_4->sidx_pts;
    }

    for (VAR_6 = 0; VAR_6 < VAR_1->item[VAR_2].nb_stream_info; VAR_6++) {
        VAR_4 = &VAR_1->item[VAR_2].stream_info[VAR_6];
        VAR_5 = FUNC_1(VAR_4);
        if (VAR_5 != VAR_0)
            return VAR_5;
    }
    return VAR_0;
}
