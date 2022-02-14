
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_12__ {int nb_streams; TYPE_1__** streams; TYPE_3__* priv_data; } ;
struct TYPE_11__ {int nb_files; TYPE_4__* avf; TYPE_2__* files; TYPE_2__* cur_file; int seekable; } ;
struct TYPE_10__ {scalar_t__ start_time; } ;
struct TYPE_9__ {int time_base; } ;
typedef TYPE_3__ ConcatContext ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_4__*,int) ;
 int FUNC_2 (int ,int ,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_3 (TYPE_4__*,int,scalar_t__,scalar_t__,scalar_t__,int) ;

__attribute__((used)) static int FUNC_4(AVFormatContext *VAR_3, int VAR_4,
                     int64_t VAR_5, int64_t VAR_6, int64_t VAR_7, int VAR_8, AVFormatContext *VAR_9)
{
    ConcatContext *VAR_10 = VAR_3->priv_data;
    int VAR_11, VAR_12, VAR_13;

    if (VAR_4 >= 0) {
        if (VAR_4 >= VAR_3->nb_streams)
            return FUNC_0(VAR_1);
        FUNC_2(VAR_3->streams[VAR_4]->time_base, VAR_0,
                         &VAR_5, &VAR_6, &VAR_7);
    }

    VAR_12 = 0;
    VAR_13 = VAR_10->nb_files;


    if (VAR_6 <= 0)
        VAR_13 = 1;
    else if (!VAR_10->seekable)
        return FUNC_0(VAR_2);

    while (VAR_13 - VAR_12 > 1) {
        int VAR_14 = (VAR_12 + VAR_13) / 2;
        if (VAR_6 < VAR_10->files[VAR_14].start_time)
            VAR_13 = VAR_14;
        else
            VAR_12 = VAR_14;
    }

    if (VAR_10->cur_file != &VAR_10->files[VAR_12]) {
        if ((VAR_11 = FUNC_1(VAR_3, VAR_12)) < 0)
            return VAR_11;
    } else {
        VAR_10->avf = VAR_9;
    }

    VAR_11 = FUNC_3(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
    if (VAR_11 < 0 &&
        VAR_12 < VAR_10->nb_files - 1 &&
        VAR_10->files[VAR_12 + 1].start_time < VAR_7) {
        if (VAR_10->cur_file == &VAR_10->files[VAR_12])
            VAR_10->avf = ((void*)0);
        if ((VAR_11 = FUNC_1(VAR_3, VAR_12 + 1)) < 0)
            return VAR_11;
        VAR_11 = FUNC_3(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
    }
    return VAR_11;
}
