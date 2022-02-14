
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int val ;
typedef scalar_t__ pa_volume_t ;
struct TYPE_6__ {scalar_t__ mute; int volume; } ;
typedef TYPE_1__ pa_sink_input_info ;
typedef int pa_context ;
struct TYPE_8__ {TYPE_2__* priv_data; } ;
struct TYPE_7__ {scalar_t__ mute; scalar_t__ last_volume; int base_volume; int * ctx; } ;
typedef TYPE_2__ PulseData ;
typedef TYPE_3__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 double VAR_2 ;
 int FUNC_0 (TYPE_3__*,int ,double*,int) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_3(pa_context *VAR_3, const pa_sink_input_info *VAR_4,
                                      int VAR_5, void *VAR_6)
{
    AVFormatContext *VAR_7 = VAR_6;
    PulseData *VAR_8 = VAR_7->priv_data;

    if (VAR_8->ctx != VAR_3)
        return;

    if (!VAR_5) {
        double VAR_9;
        pa_volume_t VAR_10 = FUNC_1(&VAR_4->volume);
        if (VAR_8->mute < 0 || (VAR_8->mute && !VAR_4->mute) || (!VAR_8->mute && VAR_4->mute)) {
            VAR_8->mute = VAR_4->mute;
            FUNC_0(VAR_7, VAR_0, &VAR_8->mute, sizeof(VAR_8->mute));
        }

        VAR_10 = FUNC_2(VAR_10, VAR_8->base_volume);
        if (VAR_8->last_volume != VAR_10) {
            VAR_9 = (double)VAR_10 / VAR_2;
            FUNC_0(VAR_7, VAR_1, &VAR_9, sizeof(VAR_9));
            VAR_8->last_volume = VAR_10;
        }
    }
}
