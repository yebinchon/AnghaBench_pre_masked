
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_17__ {scalar_t__ id; } ;
struct TYPE_16__ {int nb_streams; TYPE_8__** streams; TYPE_4__* priv_data; } ;
struct TYPE_15__ {scalar_t__ id; } ;
struct TYPE_14__ {TYPE_3__* cur_file; TYPE_1__* avf; } ;
struct TYPE_13__ {int nb_streams; TYPE_2__* streams; } ;
struct TYPE_12__ {int out_stream_index; } ;
struct TYPE_11__ {int nb_streams; TYPE_5__** streams; } ;
typedef TYPE_4__ ConcatContext ;
typedef TYPE_5__ AVStream ;
typedef TYPE_6__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_6__*,int ,char*,int,int,scalar_t__) ;
 int FUNC_1 (TYPE_8__*,TYPE_5__*) ;

__attribute__((used)) static int FUNC_2(AVFormatContext *VAR_1)
{
    ConcatContext *VAR_2 = VAR_1->priv_data;
    AVStream *VAR_3;
    int VAR_4, VAR_5, VAR_6;

    for (VAR_4 = VAR_2->cur_file->nb_streams; VAR_4 < VAR_2->avf->nb_streams; VAR_4++) {
        VAR_3 = VAR_2->avf->streams[VAR_4];
        for (VAR_5 = 0; VAR_5 < VAR_1->nb_streams; VAR_5++) {
            if (VAR_1->streams[VAR_5]->id == VAR_3->id) {
                FUNC_0(VAR_1, VAR_0,
                       "Match slave stream #%d with stream #%d id 0x%x\n",
                       VAR_4, VAR_5, VAR_3->id);
                if ((VAR_6 = FUNC_1(VAR_1->streams[VAR_5], VAR_3)) < 0)
                    return VAR_6;
                VAR_2->cur_file->streams[VAR_4].out_stream_index = VAR_5;
            }
        }
    }
    return 0;
}
