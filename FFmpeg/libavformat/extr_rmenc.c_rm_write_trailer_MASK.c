
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int nb_streams; TYPE_3__* pb; TYPE_2__* priv_data; } ;
struct TYPE_12__ {int seekable; } ;
struct TYPE_11__ {int data_pos; TYPE_1__* streams; } ;
struct TYPE_10__ {int nb_frames; int total_frames; } ;
typedef TYPE_2__ RMMuxContext ;
typedef TYPE_3__ AVIOContext ;
typedef TYPE_4__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int ,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (TYPE_4__*,int,int ) ;

__attribute__((used)) static int FUNC_4(AVFormatContext *VAR_2)
{
    RMMuxContext *VAR_3 = VAR_2->priv_data;
    int VAR_4, VAR_5, VAR_6;
    AVIOContext *VAR_7 = VAR_2->pb;

    if (VAR_2->pb->seekable & VAR_0) {

        VAR_5 = FUNC_1(VAR_7);
        VAR_4 = VAR_5 - VAR_3->data_pos;




        FUNC_2(VAR_7, 0);
        FUNC_2(VAR_7, 0);

        FUNC_0(VAR_7, 0, VAR_1);
        for(VAR_6=0;VAR_6<VAR_2->nb_streams;VAR_6++)
            VAR_3->streams[VAR_6].total_frames = VAR_3->streams[VAR_6].nb_frames;
        FUNC_3(VAR_2, VAR_4, 0);
    } else {

        FUNC_2(VAR_7, 0);
        FUNC_2(VAR_7, 0);
    }

    return 0;
}
