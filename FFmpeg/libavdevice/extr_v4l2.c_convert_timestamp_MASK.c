
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct video_data {scalar_t__ timefilter; scalar_t__ last_time_m; scalar_t__ ts_mode; } ;
typedef scalar_t__ int64_t ;
struct TYPE_4__ {struct video_data* priv_data; } ;
typedef TYPE_1__ AVFormatContext ;


 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_4 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_0, int64_t *VAR_1)
{
    struct video_data *VAR_2 = VAR_0->priv_data;

    if (VAR_2->ts_mode) {
        int VAR_3 = FUNC_4(VAR_0, *VAR_1);
        if (VAR_3 < 0)
            return VAR_3;
    }
    return 0;
}
