
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct video_data {scalar_t__ ts_mode; int timefilter; } ;
typedef int int64_t ;
struct TYPE_11__ {scalar_t__ num; } ;
struct TYPE_10__ {TYPE_1__** streams; struct video_data* priv_data; } ;
struct TYPE_9__ {int member_0; int member_1; } ;
struct TYPE_8__ {TYPE_6__ avg_frame_rate; } ;
typedef TYPE_2__ AVRational ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 void* VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_3__*,int ,char*) ;
 int FUNC_4 (int,TYPE_2__,TYPE_6__) ;
 int FUNC_5 (int,int,double) ;

__attribute__((used)) static int FUNC_6(AVFormatContext *VAR_8, int64_t VAR_9)
{
    struct video_data *VAR_10 = VAR_8->priv_data;
    int64_t VAR_11;

    VAR_11 = FUNC_1();
    if (VAR_10->ts_mode == VAR_5 &&
        VAR_9 <= VAR_11 + 1 * VAR_2 && VAR_9 >= VAR_11 - 10 * VAR_2) {
        FUNC_3(VAR_8, VAR_1, "Detected absolute timestamps\n");
        VAR_10->ts_mode = VAR_6;
        return 0;
    }
    FUNC_3(VAR_8, VAR_0, "Unknown timestamps\n");
    return FUNC_0(VAR_3);
}
