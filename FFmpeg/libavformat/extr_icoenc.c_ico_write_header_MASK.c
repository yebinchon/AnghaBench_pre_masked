
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {int nb_streams; TYPE_1__** streams; TYPE_3__* pb; TYPE_2__* priv_data; } ;
struct TYPE_13__ {int seekable; } ;
struct TYPE_12__ {int nb_images; int images; scalar_t__ current_image; } ;
struct TYPE_11__ {int codecpar; } ;
typedef TYPE_2__ IcoMuxContext ;
typedef TYPE_3__ AVIOContext ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_4__*,int ,char*) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int) ;
 int FUNC_5 (TYPE_3__*,int) ;
 int FUNC_6 (TYPE_4__*,int ) ;

__attribute__((used)) static int FUNC_7(AVFormatContext *VAR_4)
{
    IcoMuxContext *VAR_5 = VAR_4->priv_data;
    AVIOContext *VAR_6 = VAR_4->pb;
    int VAR_7;
    int VAR_8;

    if (!(VAR_6->seekable & VAR_0)) {
        FUNC_1(VAR_4, VAR_1, "Output is not seekable\n");
        return FUNC_0(VAR_2);
    }

    VAR_5->current_image = 0;
    VAR_5->nb_images = VAR_4->nb_streams;

    FUNC_5(VAR_6, 0);
    FUNC_5(VAR_6, 1);
    FUNC_4(VAR_6, 2);

    for (VAR_8 = 0; VAR_8 < VAR_4->nb_streams; VAR_8++) {
        if ((VAR_7 = FUNC_6(VAR_4, VAR_4->streams[VAR_8]->codecpar)))
            return VAR_7;


        FUNC_4(VAR_6, 16);
    }

    VAR_5->images = FUNC_2(VAR_5->nb_images, sizeof(IcoMuxContext));
    if (!VAR_5->images)
        return FUNC_0(VAR_3);

    FUNC_3(VAR_6);

    return 0;
}
