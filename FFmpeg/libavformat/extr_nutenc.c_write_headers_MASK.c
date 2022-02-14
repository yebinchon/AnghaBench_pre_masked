
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {TYPE_2__* priv_data; } ;
struct TYPE_13__ {int header_count; int last_syncpoint_pos; TYPE_1__* avf; } ;
struct TYPE_12__ {int nb_streams; int nb_chapters; int * streams; } ;
typedef TYPE_2__ NUTContext ;
typedef int AVIOContext ;
typedef TYPE_3__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int **) ;
 int FUNC_1 (TYPE_3__*,int ,int *) ;
 int VAR_4 ;
 int FUNC_2 (int **) ;
 int FUNC_3 (TYPE_2__*,int *,int *,int,int ) ;
 int FUNC_4 (TYPE_2__*,int *,int) ;
 int FUNC_5 (TYPE_2__*,int *) ;
 int FUNC_6 (TYPE_2__*,int *) ;
 int FUNC_7 (TYPE_3__*,int *,int ,int) ;
 int FUNC_8 (TYPE_2__*,int *,int) ;

__attribute__((used)) static int FUNC_9(AVFormatContext *VAR_5, AVIOContext *VAR_6)
{
    NUTContext *VAR_7 = VAR_5->priv_data;
    AVIOContext *VAR_8;
    int VAR_9, VAR_10;

    FUNC_1(VAR_5, VAR_4, ((void*)0));

    VAR_10 = FUNC_0(&VAR_8);
    if (VAR_10 < 0)
        return VAR_10;
    FUNC_6(VAR_7, VAR_8);
    FUNC_3(VAR_7, VAR_6, VAR_8, 1, VAR_2);

    for (VAR_9 = 0; VAR_9 < VAR_7->avf->nb_streams; VAR_9++) {
        VAR_10 = FUNC_0(&VAR_8);
        if (VAR_10 < 0)
            return VAR_10;
        VAR_10 = FUNC_7(VAR_5, VAR_8, VAR_7->avf->streams[VAR_9], VAR_9);
        if (VAR_10 < 0) {
            FUNC_2(&VAR_8);
            return VAR_10;
        }
        FUNC_3(VAR_7, VAR_6, VAR_8, 1, VAR_3);
    }

    VAR_10 = FUNC_0(&VAR_8);
    if (VAR_10 < 0)
        return VAR_10;
    FUNC_5(VAR_7, VAR_8);
    FUNC_3(VAR_7, VAR_6, VAR_8, 1, VAR_0);

    for (VAR_9 = 0; VAR_9 < VAR_7->avf->nb_streams; VAR_9++) {
        VAR_10 = FUNC_0(&VAR_8);
        if (VAR_10 < 0)
            return VAR_10;
        VAR_10 = FUNC_8(VAR_7, VAR_8, VAR_9);
        if (VAR_10 > 0)
            FUNC_3(VAR_7, VAR_6, VAR_8, 1, VAR_0);
        else {
            FUNC_2(&VAR_8);
            if (VAR_10 < 0)
                return VAR_10;
        }
    }

    for (VAR_9 = 0; VAR_9 < VAR_7->avf->nb_chapters; VAR_9++) {
        VAR_10 = FUNC_0(&VAR_8);
        if (VAR_10 < 0)
            return VAR_10;
        VAR_10 = FUNC_4(VAR_7, VAR_8, VAR_9);
        if (VAR_10 < 0) {
            FUNC_2(&VAR_8);
            return VAR_10;
        }
        FUNC_3(VAR_7, VAR_6, VAR_8, 1, VAR_0);
    }

    VAR_7->last_syncpoint_pos = VAR_1;
    VAR_7->header_count++;
    return 0;
}
