
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int nb_streams; TYPE_1__* priv_data; } ;
struct TYPE_9__ {scalar_t__ initial_timeout; int rtsp_flags; scalar_t__ initial_pause; int * real_setup_cache; int * real_setup; } ;
typedef TYPE_1__ RTSPState ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_7(AVFormatContext *VAR_2)
{
    RTSPState *VAR_3 = VAR_2->priv_data;
    int VAR_4;

    if (VAR_3->initial_timeout > 0)
        VAR_3->rtsp_flags |= VAR_1;

    if (VAR_3->rtsp_flags & VAR_1) {
        VAR_4 = FUNC_5(VAR_2);
        if (VAR_4)
            return VAR_4;
    } else {
        VAR_4 = FUNC_4(VAR_2);
        if (VAR_4)
            return VAR_4;

        VAR_3->real_setup_cache = !VAR_2->nb_streams ? ((void*)0) :
            FUNC_1(VAR_2->nb_streams, 2 * sizeof(*VAR_3->real_setup_cache));
        if (!VAR_3->real_setup_cache && VAR_2->nb_streams)
            return FUNC_0(VAR_0);
        VAR_3->real_setup = VAR_3->real_setup_cache + VAR_2->nb_streams;

        if (VAR_3->initial_pause) {

        } else {
            if ((VAR_4 = FUNC_6(VAR_2)) < 0) {
                FUNC_3(VAR_2);
                FUNC_2(VAR_2);
                return VAR_4;
            }
        }
    }

    return 0;
}
