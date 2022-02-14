
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {int nb_streams; TYPE_3__** streams; } ;
struct TYPE_13__ {TYPE_2__* priv_data; } ;
struct TYPE_11__ {int flags; int start_granule; } ;
struct TYPE_12__ {TYPE_1__ page; int * header_len; int * header; } ;
typedef TYPE_2__ OGGStreamContext ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,TYPE_3__*,int ,int ,int ,int) ;
 int FUNC_1 (TYPE_4__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_4__*,int) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_1)
{
    OGGStreamContext *VAR_2 = ((void*)0);
    int VAR_3, VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_1->nb_streams; VAR_4++) {
        VAR_2 = VAR_1->streams[VAR_4]->priv_data;
        FUNC_0(VAR_1, VAR_1->streams[VAR_4], VAR_2->header[0],
                        VAR_2->header_len[0], 0, 1);
        VAR_2->page.flags |= 2;
        FUNC_1(VAR_1, VAR_2);
    }
    for (VAR_4 = 0; VAR_4 < VAR_1->nb_streams; VAR_4++) {
        AVStream *VAR_5 = VAR_1->streams[VAR_4];
        VAR_2 = VAR_5->priv_data;
        for (VAR_3 = 1; VAR_3 < 3; VAR_3++) {
            if (VAR_2->header_len[VAR_3])
                FUNC_0(VAR_1, VAR_5, VAR_2->header[VAR_3],
                                VAR_2->header_len[VAR_3], 0, 1);
        }
        FUNC_1(VAR_1, VAR_2);
    }

    VAR_2->page.start_granule = VAR_0;

    FUNC_2(VAR_1, 2);

    return 0;
}
