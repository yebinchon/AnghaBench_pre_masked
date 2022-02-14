
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {TYPE_2__** streams; int * pb; TYPE_4__* priv_data; } ;
struct TYPE_10__ {int current_image; int nb_images; TYPE_3__* images; } ;
struct TYPE_9__ {int width; int height; int bits; int offset; int size; } ;
struct TYPE_8__ {TYPE_1__* codecpar; } ;
struct TYPE_7__ {scalar_t__ codec_id; scalar_t__ format; } ;
typedef TYPE_4__ IcoMuxContext ;
typedef int AVIOContext ;
typedef TYPE_5__ AVFormatContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static int FUNC_4(AVFormatContext *VAR_3)
{
    IcoMuxContext *VAR_4 = VAR_3->priv_data;
    AVIOContext *VAR_5 = VAR_3->pb;
    int VAR_6;

    FUNC_0(VAR_5, 4, VAR_2);

    FUNC_2(VAR_5, VAR_4->current_image);

    for (VAR_6 = 0; VAR_6 < VAR_4->nb_images; VAR_6++) {
        FUNC_1(VAR_5, VAR_4->images[VAR_6].width);
        FUNC_1(VAR_5, VAR_4->images[VAR_6].height);

        if (VAR_3->streams[VAR_6]->codecpar->codec_id == VAR_0 &&
            VAR_3->streams[VAR_6]->codecpar->format == VAR_1) {
            FUNC_1(VAR_5, (VAR_4->images[VAR_6].bits >= 8) ? 0 : 1 << VAR_4->images[VAR_6].bits);
        } else {
            FUNC_1(VAR_5, 0);
        }

        FUNC_1(VAR_5, 0);
        FUNC_2(VAR_5, 1);
        FUNC_2(VAR_5, VAR_4->images[VAR_6].bits);
        FUNC_3(VAR_5, VAR_4->images[VAR_6].size);
        FUNC_3(VAR_5, VAR_4->images[VAR_6].offset);
    }

    return 0;
}
