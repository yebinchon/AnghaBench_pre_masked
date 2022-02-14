
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int filename ;
struct TYPE_14__ {int nb_streams; char* url; TYPE_1__** streams; TYPE_3__* priv_data; } ;
struct TYPE_13__ {char* dirname; scalar_t__ master_playlist_created; scalar_t__ hls_playlist; TYPE_2__* streams; scalar_t__ remove_at_exit; void* total_duration; void* last_duration; } ;
struct TYPE_12__ {scalar_t__ segment_type; int initfile; int nb_segments; scalar_t__ first_pts; scalar_t__ max_pts; scalar_t__ start_pts; } ;
struct TYPE_11__ {int time_base; } ;
typedef TYPE_2__ OutputStream ;
typedef TYPE_3__ DASHContext ;
typedef TYPE_4__ AVFormatContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (scalar_t__,int ,int ) ;
 int FUNC_1 (TYPE_4__*,int,int) ;
 int FUNC_2 (TYPE_4__*,char*) ;
 int FUNC_3 (TYPE_4__*,TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_4__*,int ) ;
 int FUNC_5 (char*,int,char*,int) ;
 int FUNC_6 (char*,int,char*,char*) ;

__attribute__((used)) static int FUNC_7(AVFormatContext *VAR_2)
{
    DASHContext *VAR_3 = VAR_2->priv_data;
    int VAR_4;

    if (VAR_2->nb_streams > 0) {
        OutputStream *VAR_5 = &VAR_3->streams[0];


        if (!VAR_3->last_duration)
            VAR_3->last_duration = FUNC_0(VAR_5->max_pts - VAR_5->start_pts,
                                            VAR_2->streams[0]->time_base,
                                            VAR_0);
        VAR_3->total_duration = FUNC_0(VAR_5->max_pts - VAR_5->first_pts,
                                         VAR_2->streams[0]->time_base,
                                         VAR_0);
    }
    FUNC_1(VAR_2, 1, -1);

    if (VAR_3->remove_at_exit) {
        for (VAR_4 = 0; VAR_4 < VAR_2->nb_streams; ++VAR_4) {
            OutputStream *VAR_6 = &VAR_3->streams[VAR_4];
            FUNC_3(VAR_2, VAR_6, VAR_6->nb_segments);
            FUNC_4(VAR_2, VAR_6->initfile);
            if (VAR_3->hls_playlist && VAR_6->segment_type == VAR_1) {
                char VAR_7[1024];
                FUNC_5(VAR_7, sizeof(VAR_7), VAR_3->dirname, VAR_4);
                FUNC_2(VAR_2, VAR_7);
            }
        }
        FUNC_2(VAR_2, VAR_2->url);

        if (VAR_3->hls_playlist && VAR_3->master_playlist_created) {
            char VAR_8[1024];
            FUNC_6(VAR_8, sizeof(VAR_8), "%smaster.m3u8", VAR_3->dirname);
            FUNC_2(VAR_2, VAR_8);
        }
    }

    return 0;
}
