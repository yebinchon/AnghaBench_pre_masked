
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct oggvorbis_private {int * packet; int vp; } ;
struct ogg_stream {struct oggvorbis_private* private; } ;
struct ogg {struct ogg_stream* streams; } ;
struct TYPE_3__ {struct ogg* priv_data; } ;
typedef TYPE_1__ AVFormatContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(AVFormatContext *VAR_0, int VAR_1)
{
    struct ogg *VAR_2 = VAR_0->priv_data;
    struct ogg_stream *VAR_3 = VAR_2->streams + VAR_1;
    struct oggvorbis_private *VAR_4 = VAR_3->private;
    int VAR_5;
    if (VAR_3->private) {
        FUNC_1(&VAR_4->vp);
        for (VAR_5 = 0; VAR_5 < 3; VAR_5++)
            FUNC_0(&VAR_4->packet[VAR_5]);
    }
}
