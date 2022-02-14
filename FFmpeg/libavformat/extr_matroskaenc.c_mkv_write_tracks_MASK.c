
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_18__ {int nb_streams; TYPE_2__** streams; TYPE_3__* pb; TYPE_1__* priv_data; } ;
struct TYPE_17__ {int seekable; } ;
struct TYPE_16__ {int disposition; } ;
struct TYPE_15__ {int tracks_bc; int tracks_pos; int is_live; int seekhead; } ;
typedef TYPE_1__ MatroskaMuxContext ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVIOContext ;
typedef TYPE_4__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,int *,TYPE_1__*) ;
 int FUNC_2 (TYPE_3__*,int *,TYPE_1__*,int *) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (TYPE_4__*,TYPE_1__*,int,int ,int) ;
 int FUNC_5 (TYPE_3__*,int *,TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_6(AVFormatContext *VAR_3)
{
    MatroskaMuxContext *VAR_4 = VAR_3->priv_data;
    AVIOContext *VAR_5 = VAR_3->pb;
    int VAR_6, VAR_7, VAR_8 = 0;

    VAR_7 = FUNC_3(VAR_4->seekhead, VAR_2, FUNC_0(VAR_5));
    if (VAR_7 < 0)
        return VAR_7;

    VAR_7 = FUNC_5(VAR_5, &VAR_4->tracks_bc, VAR_4, VAR_2);
    if (VAR_7 < 0)
        return VAR_7;

    for (VAR_6 = 0; VAR_6 < VAR_3->nb_streams; VAR_6++) {
        AVStream *VAR_9 = VAR_3->streams[VAR_6];
        VAR_8 |= VAR_9->disposition & VAR_1;
    }
    for (VAR_6 = 0; VAR_6 < VAR_3->nb_streams; VAR_6++) {
        VAR_7 = FUNC_4(VAR_3, VAR_4, VAR_6, VAR_4->tracks_bc, VAR_8);
        if (VAR_7 < 0)
            return VAR_7;
    }

    if ((VAR_5->seekable & VAR_0) && !VAR_4->is_live)
        FUNC_2(VAR_5, &VAR_4->tracks_bc, VAR_4, &VAR_4->tracks_pos);
    else
        FUNC_1(VAR_5, &VAR_4->tracks_bc, VAR_4);

    return 0;
}
