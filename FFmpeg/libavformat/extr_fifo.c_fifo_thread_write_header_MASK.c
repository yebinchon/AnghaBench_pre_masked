
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_16__ {int key; } ;
struct TYPE_15__ {int nb_streams; TYPE_1__** streams; int url; TYPE_3__* priv_data; } ;
struct TYPE_14__ {int format_options; TYPE_4__* avf; } ;
struct TYPE_13__ {int header_written; TYPE_4__* avf; } ;
struct TYPE_12__ {scalar_t__ cur_dts; } ;
typedef TYPE_2__ FifoThreadContext ;
typedef TYPE_3__ FifoContext ;
typedef TYPE_4__ AVFormatContext ;
typedef TYPE_5__ AVDictionaryEntry ;
typedef int AVDictionary ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int **,int ,int ) ;
 int FUNC_2 (int **) ;
 TYPE_5__* FUNC_3 (int *,char*,TYPE_5__*,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_4__*,int ,char*,int ,...) ;
 int FUNC_6 (TYPE_4__*,int **) ;
 int FUNC_7 (TYPE_4__*,int ,int **) ;

__attribute__((used)) static int FUNC_8(FifoThreadContext *VAR_3)
{
    AVFormatContext *VAR_4 = VAR_3->avf;
    FifoContext *VAR_5 = VAR_4->priv_data;
    AVFormatContext *VAR_6 = VAR_5->avf;
    AVDictionary *VAR_7 = ((void*)0);
    int VAR_8, VAR_9;

    VAR_8 = FUNC_1(&VAR_7, VAR_5->format_options, 0);
    if (VAR_8 < 0)
        return VAR_8;

    VAR_8 = FUNC_7(VAR_6, VAR_4->url, &VAR_7);
    if (VAR_8 < 0) {
        FUNC_5(VAR_4, VAR_1, "Error opening %s: %s\n", VAR_4->url,
               FUNC_4(VAR_8));
        goto end;
    }

    for (VAR_9 = 0;VAR_9 < VAR_6->nb_streams; VAR_9++)
        VAR_6->streams[VAR_9]->cur_dts = 0;

    VAR_8 = FUNC_6(VAR_6, &VAR_7);
    if (!VAR_8)
        VAR_3->header_written = 1;


    if (VAR_7) {
        AVDictionaryEntry *VAR_10 = ((void*)0);
        while ((VAR_10 = FUNC_3(VAR_7, "", VAR_10, VAR_0)))
            FUNC_5(VAR_6, VAR_1, "Unknown option '%s'\n", VAR_10->key);
        VAR_8 = FUNC_0(VAR_2);
    }

end:
    FUNC_2(&VAR_7);
    return VAR_8;
}
