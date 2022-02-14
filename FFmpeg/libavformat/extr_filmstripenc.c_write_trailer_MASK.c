
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {TYPE_4__** streams; int * pb; TYPE_3__* priv_data; } ;
struct TYPE_8__ {int den; int num; } ;
struct TYPE_10__ {TYPE_2__ time_base; TYPE_1__* codecpar; } ;
struct TYPE_9__ {int nb_frames; } ;
struct TYPE_7__ {int width; int height; } ;
typedef TYPE_3__ FilmstripMuxContext ;
typedef TYPE_4__ AVStream ;
typedef int AVIOContext ;
typedef TYPE_5__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_1)
{
    FilmstripMuxContext *VAR_2 = VAR_1->priv_data;
    AVIOContext *VAR_3 = VAR_1->pb;
    AVStream *VAR_4 = VAR_1->streams[0];
    int VAR_5;

    FUNC_2(VAR_3, VAR_0);
    FUNC_2(VAR_3, VAR_2->nb_frames);
    FUNC_1(VAR_3, 0);
    FUNC_1(VAR_3, 0);
    FUNC_1(VAR_3, VAR_4->codecpar->width);
    FUNC_1(VAR_3, VAR_4->codecpar->height);
    FUNC_1(VAR_3, 0);

    FUNC_1(VAR_3, VAR_4->time_base.den / VAR_4->time_base.num);
    for (VAR_5 = 0; VAR_5 < 16; VAR_5++)
        FUNC_0(VAR_3, 0x00);

    return 0;
}
