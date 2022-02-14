
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ http_method; TYPE_3__* avf; int prev_pts; int oformat; int chunk_start_index; int chunk_index; } ;
typedef TYPE_2__ WebMChunkContext ;
struct TYPE_16__ {scalar_t__ seekable; } ;
struct TYPE_15__ {int nb_streams; int (* io_open ) (TYPE_3__*,TYPE_7__**,int ,int ,int **) ;int * streams; TYPE_7__* pb; TYPE_1__* oformat; int url; TYPE_2__* priv_data; } ;
struct TYPE_13__ {int (* write_header ) (TYPE_3__*) ;} ;
typedef TYPE_3__ AVFormatContext ;
typedef int AVDictionary ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int **) ;
 int FUNC_2 (int **,char*,scalar_t__,int ) ;
 int FUNC_3 (char*,int ,char*) ;
 char* FUNC_4 (char*) ;
 int FUNC_5 (int ,int,int,int) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*,TYPE_7__**) ;
 int FUNC_8 (TYPE_3__*,char*) ;
 int FUNC_9 (TYPE_3__*,int,char*) ;
 int FUNC_10 (TYPE_3__*,TYPE_7__**,int ,int ,int **) ;
 int FUNC_11 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_12(AVFormatContext *VAR_6)
{
    WebMChunkContext *VAR_7 = VAR_6->priv_data;
    AVFormatContext *VAR_8 = ((void*)0);
    int VAR_9;
    int VAR_10;
    AVDictionary *VAR_11 = ((void*)0);
    char VAR_12[VAR_5];
    char *VAR_13;


    if (VAR_6->nb_streams != 1) { return VAR_0; }

    VAR_7->chunk_index = VAR_7->chunk_start_index;
    VAR_7->oformat = FUNC_3("webm", VAR_6->url, "video/webm");
    if (!VAR_7->oformat)
        return VAR_1;
    VAR_7->prev_pts = VAR_3;

    VAR_9 = FUNC_6(VAR_6);
    if (VAR_9 < 0)
        return VAR_9;
    VAR_8 = VAR_7->avf;
    VAR_9 = FUNC_9(VAR_6, 1, VAR_12);
    if (VAR_9 < 0)
        return VAR_9;
    VAR_13 = FUNC_4(VAR_12);
    if (!VAR_13)
        return FUNC_0(VAR_4);
    FUNC_8(VAR_8, VAR_13);
    if (VAR_7->http_method)
        FUNC_2(&VAR_11, "method", VAR_7->http_method, 0);
    VAR_9 = VAR_6->io_open(VAR_6, &VAR_8->pb, VAR_8->url, VAR_2, &VAR_11);
    FUNC_1(&VAR_11);
    if (VAR_9 < 0)
        return VAR_9;

    VAR_8->pb->seekable = 0;
    VAR_9 = VAR_8->oformat->write_header(VAR_8);
    if (VAR_9 < 0)
        return VAR_9;
    FUNC_7(VAR_6, &VAR_8->pb);
    for (VAR_10 = 0; VAR_10 < VAR_6->nb_streams; VAR_10++) {

        FUNC_5(VAR_6->streams[VAR_10], 64, 1, 1000);
    }
    return 0;
}
