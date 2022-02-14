
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {unsigned int nb_streams; int * streams; int ccgroup; scalar_t__ var_stream_idx; } ;
struct TYPE_10__ {unsigned int nb_streams; int * streams; TYPE_2__* priv_data; } ;
struct TYPE_9__ {int nb_varstreams; TYPE_7__* var_streams; TYPE_1__* cc_streams; scalar_t__ nb_ccstreams; scalar_t__ var_stream_map; scalar_t__ cc_stream_map; } ;
struct TYPE_8__ {int ccgroup; } ;
typedef TYPE_2__ HLSContext ;
typedef int AVStream ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_7__**) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_6(AVFormatContext *VAR_1)
{
    HLSContext *VAR_2 = VAR_1->priv_data;
    unsigned int VAR_3;
    int VAR_4 = 0;

    if (VAR_2->cc_stream_map) {
        VAR_4 = FUNC_4(VAR_1);
        if (VAR_4 < 0)
            return VAR_4;
    }

    if (VAR_2->var_stream_map) {
        return FUNC_5(VAR_1);
    } else {

        VAR_2->nb_varstreams = 1;
        VAR_2->var_streams = FUNC_2(sizeof(*VAR_2->var_streams) *
                                             VAR_2->nb_varstreams);
        if (!VAR_2->var_streams)
            return FUNC_0(VAR_0);

        VAR_2->var_streams[0].var_stream_idx = 0;
        VAR_2->var_streams[0].nb_streams = VAR_1->nb_streams;
        VAR_2->var_streams[0].streams = FUNC_2(sizeof(AVStream *) *
                                            VAR_2->var_streams[0].nb_streams);
        if (!VAR_2->var_streams[0].streams) {
            FUNC_1(&VAR_2->var_streams);
            return FUNC_0(VAR_0);
        }


        if (VAR_2->nb_ccstreams) {
            VAR_2->var_streams[0].ccgroup = FUNC_3(VAR_2->cc_streams[0].ccgroup);
            if (!VAR_2->var_streams[0].ccgroup) {
                FUNC_1(&VAR_2->var_streams);
                return FUNC_0(VAR_0);
            }
        }

        for (VAR_3 = 0; VAR_3 < VAR_1->nb_streams; VAR_3++)
            VAR_2->var_streams[0].streams[VAR_3] = VAR_1->streams[VAR_3];
    }
    return 0;
}
