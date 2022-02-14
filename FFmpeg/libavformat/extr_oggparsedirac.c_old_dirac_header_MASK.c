
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef char uint8_t ;
struct ogg_stream {char* buf; int pstart; } ;
struct ogg {struct ogg_stream* streams; } ;
struct TYPE_8__ {TYPE_2__** streams; struct ogg* priv_data; } ;
struct TYPE_7__ {TYPE_1__* codecpar; } ;
struct TYPE_6__ {int codec_id; int codec_type; } ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_2__*,int,int ,int ) ;

__attribute__((used)) static int FUNC_2(AVFormatContext *VAR_2, int VAR_3)
{
    struct ogg *VAR_4 = VAR_2->priv_data;
    struct ogg_stream *VAR_5 = VAR_4->streams + VAR_3;
    AVStream *VAR_6 = VAR_2->streams[VAR_3];
    uint8_t *VAR_7 = VAR_5->buf + VAR_5->pstart;

    if (VAR_7[0] != 'K')
        return 0;

    VAR_6->codecpar->codec_type = VAR_0;
    VAR_6->codecpar->codec_id = VAR_1;
    FUNC_1(VAR_6, 64, FUNC_0(VAR_7+12), FUNC_0(VAR_7+8));
    return 1;
}
