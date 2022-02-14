
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int filename ;
struct TYPE_10__ {int last_ts; } ;
struct TYPE_9__ {char* url; TYPE_1__* priv_data; } ;
struct TYPE_8__ {int nb_streams; scalar_t__ remove_at_exit; TYPE_7__* streams; } ;
typedef TYPE_1__ HDSContext ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (TYPE_2__*,TYPE_7__*,int,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int,char*,char*,...) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_6(AVFormatContext *VAR_0)
{
    HDSContext *VAR_1 = VAR_0->priv_data;
    int VAR_2;

    for (VAR_2 = 0; VAR_2 < VAR_1->nb_streams; VAR_2++)
        FUNC_0(VAR_0, &VAR_1->streams[VAR_2], 1, VAR_1->streams[VAR_2].last_ts);
    FUNC_5(VAR_0, 1);

    if (VAR_1->remove_at_exit) {
        char VAR_3[1024];
        FUNC_3(VAR_3, sizeof(VAR_3), "%s/index.f4m", VAR_0->url);
        FUNC_4(VAR_3);
        for (VAR_2 = 0; VAR_2 < VAR_1->nb_streams; VAR_2++) {
            FUNC_3(VAR_3, sizeof(VAR_3), "%s/stream%d.abst", VAR_0->url, VAR_2);
            FUNC_4(VAR_3);
        }
        FUNC_2(VAR_0->url);
    }

    FUNC_1(VAR_0);
    return 0;
}
