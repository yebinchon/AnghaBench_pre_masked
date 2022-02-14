
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* codecpar; } ;
struct TYPE_7__ {int nb_streams; TYPE_5__** streams; } ;
struct TYPE_6__ {int codec_id; } ;
typedef TYPE_2__ AVFormatContext ;
typedef int AVDictionary ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*) ;
 int ** FUNC_1 (int,int) ;
 int * FUNC_2 (int *,int ,TYPE_2__*,TYPE_5__*,int *) ;

AVDictionary **FUNC_3(AVFormatContext *VAR_1,
                                           AVDictionary *VAR_2)
{
    int VAR_3;
    AVDictionary **VAR_4;

    if (!VAR_1->nb_streams)
        return ((void*)0);
    VAR_4 = FUNC_1(VAR_1->nb_streams, sizeof(*VAR_4));
    if (!VAR_4) {
        FUNC_0(((void*)0), VAR_0,
               "Could not alloc memory for stream options.\n");
        return ((void*)0);
    }
    for (VAR_3 = 0; VAR_3 < VAR_1->nb_streams; VAR_3++)
        VAR_4[VAR_3] = FUNC_2(VAR_2, VAR_1->streams[VAR_3]->codecpar->codec_id,
                                    VAR_1, VAR_1->streams[VAR_3], ((void*)0));
    return VAR_4;
}
