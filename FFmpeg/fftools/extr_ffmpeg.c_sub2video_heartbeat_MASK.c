
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_17__ {int nb_streams; int ist_index; } ;
struct TYPE_14__ {scalar_t__ last_pts; scalar_t__ end_pts; TYPE_2__* frame; } ;
struct TYPE_16__ {size_t file_index; int nb_filters; TYPE_4__** filters; TYPE_3__ sub2video; TYPE_1__* st; } ;
struct TYPE_15__ {int filter; } ;
struct TYPE_13__ {int * data; } ;
struct TYPE_12__ {int time_base; } ;
typedef TYPE_5__ InputStream ;
typedef TYPE_6__ InputFile ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__,int ,int ) ;
 TYPE_6__** VAR_1 ;
 TYPE_5__** VAR_2 ;
 int FUNC_2 (TYPE_5__*,scalar_t__) ;
 int FUNC_3 (TYPE_5__*,int *) ;

__attribute__((used)) static void FUNC_4(InputStream *VAR_3, int64_t VAR_4)
{
    InputFile *VAR_5 = VAR_1[VAR_3->file_index];
    int VAR_6, VAR_7, VAR_8;
    int64_t VAR_9;





    for (VAR_6 = 0; VAR_6 < VAR_5->nb_streams; VAR_6++) {
        InputStream *VAR_10 = VAR_2[VAR_5->ist_index + VAR_6];
        if (!VAR_10->sub2video.frame)
            continue;


        VAR_9 = FUNC_1(VAR_4, VAR_3->st->time_base, VAR_10->st->time_base) - 1;

        if (VAR_9 <= VAR_10->sub2video.last_pts)
            continue;
        if (VAR_9 >= VAR_10->sub2video.end_pts ||
            (!VAR_10->sub2video.frame->data[0] && VAR_10->sub2video.end_pts < VAR_0))
            FUNC_3(VAR_10, ((void*)0));
        for (VAR_7 = 0, VAR_8 = 0; VAR_7 < VAR_10->nb_filters; VAR_7++)
            VAR_8 += FUNC_0(VAR_10->filters[VAR_7]->filter);
        if (VAR_8)
            FUNC_2(VAR_10, VAR_9);
    }
}
