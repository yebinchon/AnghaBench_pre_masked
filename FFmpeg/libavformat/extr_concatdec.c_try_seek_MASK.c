
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_11__ {int nb_streams; TYPE_2__** streams; } ;
struct TYPE_10__ {TYPE_3__* priv_data; } ;
struct TYPE_9__ {TYPE_6__* avf; TYPE_1__* cur_file; } ;
struct TYPE_8__ {int time_base; } ;
struct TYPE_7__ {scalar_t__ file_inpoint; scalar_t__ start_time; } ;
typedef TYPE_3__ ConcatContext ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_6__*,int,scalar_t__,scalar_t__,scalar_t__,int) ;
 int FUNC_2 (int ,int ,scalar_t__*,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_4, int VAR_5,
                    int64_t VAR_6, int64_t VAR_7, int64_t VAR_8, int VAR_9)
{
    ConcatContext *VAR_10 = VAR_4->priv_data;
    int64_t VAR_11 = VAR_10->cur_file->start_time - VAR_10->cur_file->file_inpoint;

    VAR_7 -= VAR_11;
    VAR_6 = VAR_6 == VAR_3 ? VAR_3 : VAR_6 - VAR_11;
    VAR_8 = VAR_8 == VAR_2 ? VAR_2 : VAR_8 - VAR_11;
    if (VAR_5 >= 0) {
        if (VAR_5 >= VAR_10->avf->nb_streams)
            return FUNC_0(VAR_1);
        FUNC_2(VAR_0, VAR_10->avf->streams[VAR_5]->time_base,
                         &VAR_6, &VAR_7, &VAR_8);
    }
    return FUNC_1(VAR_10->avf, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
}
