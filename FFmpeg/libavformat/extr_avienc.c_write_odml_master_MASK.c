
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_13__ {int codec_type; } ;
struct TYPE_12__ {TYPE_2__** streams; TYPE_4__* priv_data; int * pb; } ;
struct TYPE_11__ {int master_index_max_size; } ;
struct TYPE_8__ {int indx_start; } ;
struct TYPE_10__ {TYPE_1__ indexes; } ;
struct TYPE_9__ {TYPE_3__* priv_data; TYPE_6__* codecpar; } ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVIStream ;
typedef int AVIOContext ;
typedef TYPE_4__ AVIContext ;
typedef TYPE_5__ AVFormatContext ;
typedef TYPE_6__ AVCodecParameters ;


 int FUNC_0 (unsigned char*,int,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static void FUNC_8(AVFormatContext *VAR_0, int VAR_1)
{
    AVIOContext *VAR_2 = VAR_0->pb;
    AVIContext *VAR_3 = VAR_0->priv_data;
    AVStream *VAR_4 = VAR_0->streams[VAR_1];
    AVCodecParameters *VAR_5 = VAR_4->codecpar;
    AVIStream *VAR_6 = VAR_4->priv_data;
    unsigned char VAR_7[5];
    int VAR_8;





    VAR_6->indexes.indx_start = FUNC_6(VAR_2, "JUNK");
    FUNC_2(VAR_2, 4);
    FUNC_1(VAR_2, 0);
    FUNC_1(VAR_2, 0);
    FUNC_3(VAR_2, 0);
    FUNC_7(VAR_2, FUNC_0(VAR_7, VAR_1, VAR_5->codec_type));

    FUNC_4(VAR_2, 0);
    FUNC_3(VAR_2, 0);
    for (VAR_8 = 0; VAR_8 < VAR_3->master_index_max_size * 2; VAR_8++)
        FUNC_4(VAR_2, 0);
    FUNC_5(VAR_2, VAR_6->indexes.indx_start);
}
