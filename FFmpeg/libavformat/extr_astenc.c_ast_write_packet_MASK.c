
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int fbs; } ;
struct TYPE_11__ {int channels; } ;
struct TYPE_10__ {TYPE_1__** streams; TYPE_5__* priv_data; int * pb; } ;
struct TYPE_9__ {int size; int data; } ;
struct TYPE_8__ {scalar_t__ nb_frames; TYPE_4__* codecpar; } ;
typedef TYPE_2__ AVPacket ;
typedef int AVIOContext ;
typedef TYPE_3__ AVFormatContext ;
typedef TYPE_4__ AVCodecParameters ;
typedef TYPE_5__ ASTMuxContext ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *,char*) ;

__attribute__((used)) static int FUNC_4(AVFormatContext *VAR_0, AVPacket *VAR_1)
{
    AVIOContext *VAR_2 = VAR_0->pb;
    ASTMuxContext *VAR_3 = VAR_0->priv_data;
    AVCodecParameters *VAR_4 = VAR_0->streams[0]->codecpar;
    int VAR_5 = VAR_1->size / VAR_4->channels;

    if (VAR_0->streams[0]->nb_frames == 0)
        VAR_3->fbs = VAR_5;

    FUNC_3(VAR_2, "BLCK");
    FUNC_0(VAR_2, VAR_5);


    FUNC_1(VAR_2, 0);
    FUNC_1(VAR_2, 0);
    FUNC_1(VAR_2, 0);

    FUNC_2(VAR_2, VAR_1->data, VAR_1->size);

    return 0;
}
