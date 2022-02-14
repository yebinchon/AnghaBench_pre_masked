
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int nb_streams; TYPE_1__** streams; } ;
struct TYPE_11__ {int nb_stream_indexes; size_t* stream_index; } ;
struct TYPE_10__ {int index; } ;
typedef TYPE_1__ AVStream ;
typedef TYPE_2__ AVProgram ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__*,int ,char*,char const*) ;
 int FUNC_2 (TYPE_3__*,TYPE_1__*,char const*,char const**,TYPE_2__**) ;
 int FUNC_3 (char const*,char**,int ) ;

int FUNC_4(AVFormatContext *VAR_2, AVStream *VAR_3,
                                    const char *VAR_4)
{
    int VAR_5, VAR_6;
    char *VAR_7;
    const char *VAR_8 = ((void*)0);
    AVProgram *VAR_9 = ((void*)0);
    int VAR_10;

    VAR_5 = FUNC_2(VAR_2, VAR_3, VAR_4, &VAR_8, &VAR_9);
    if (VAR_5 < 0)
        goto error;

    if (!VAR_8)
        return VAR_5;

    VAR_6 = FUNC_3(VAR_8, &VAR_7, 0);
    if (*VAR_7) {
        VAR_5 = FUNC_0(VAR_1);
        goto error;
    }


    if (VAR_4 == VAR_8)
        return (VAR_6 == VAR_3->index);


    VAR_10 = VAR_9 ? VAR_9->nb_stream_indexes : VAR_2->nb_streams;
    for (int VAR_11 = 0; VAR_11 < VAR_10 && VAR_6 >= 0; VAR_11++) {
        AVStream *VAR_12 = VAR_9 ? VAR_2->streams[VAR_9->stream_index[VAR_11]] : VAR_2->streams[VAR_11];
        VAR_5 = FUNC_2(VAR_2, VAR_12, VAR_4, ((void*)0), ((void*)0));
        if (VAR_5 < 0)
            goto error;
        if (VAR_5 > 0 && VAR_6-- == 0 && VAR_3 == VAR_12)
            return 1;
    }
    return 0;

error:
    if (VAR_5 == FUNC_0(VAR_1))
        FUNC_1(VAR_2, VAR_0, "Invalid stream specifier: %s.\n", VAR_4);
    return VAR_5;
}
