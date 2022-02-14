
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_10__ {scalar_t__ http_method; TYPE_3__* avf; } ;
typedef TYPE_2__ WebMChunkContext ;
struct TYPE_11__ {int (* io_open ) (TYPE_3__*,int **,char*,int ,int **) ;int * pb; TYPE_1__* oformat; TYPE_2__* priv_data; } ;
struct TYPE_9__ {int (* write_packet ) (TYPE_3__*,int *) ;} ;
typedef int AVIOContext ;
typedef TYPE_3__ AVFormatContext ;
typedef int AVDictionary ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int **) ;
 int FUNC_1 (int **,char*,scalar_t__,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int **) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (TYPE_3__*,int **) ;
 int FUNC_6 (TYPE_3__*,int ,char*) ;
 int FUNC_7 (TYPE_3__*,int *) ;
 int FUNC_8 (TYPE_3__*,int **,char*,int ,int **) ;

__attribute__((used)) static int FUNC_9(AVFormatContext *VAR_2, int VAR_3)
{
    WebMChunkContext *VAR_4 = VAR_2->priv_data;
    AVFormatContext *VAR_5 = VAR_4->avf;
    int VAR_6;
    int VAR_7;
    uint8_t *VAR_8;
    AVIOContext *VAR_9;
    char VAR_10[VAR_1];
    AVDictionary *VAR_11 = ((void*)0);

    if (!VAR_5->pb)
        return 0;

    if (VAR_3)

        VAR_5->oformat->write_packet(VAR_5, ((void*)0));
    VAR_7 = FUNC_3(VAR_5->pb, &VAR_8);
    VAR_5->pb = ((void*)0);
    VAR_6 = FUNC_6(VAR_2, 0, VAR_10);
    if (VAR_6 < 0)
        goto fail;
    if (VAR_4->http_method)
        FUNC_1(&VAR_11, "method", VAR_4->http_method, 0);
    VAR_6 = VAR_2->io_open(VAR_2, &VAR_9, VAR_10, VAR_0, &VAR_11);
    if (VAR_6 < 0)
        goto fail;
    FUNC_4(VAR_9, VAR_8, VAR_7);
    FUNC_5(VAR_2, &VAR_9);
fail:
    FUNC_0(&VAR_11);
    FUNC_2(VAR_8);
    return (VAR_6 < 0) ? VAR_6 : 0;
}
