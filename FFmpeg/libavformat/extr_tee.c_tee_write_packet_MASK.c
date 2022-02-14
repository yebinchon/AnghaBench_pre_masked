
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_23__ {unsigned int nb_slaves; TYPE_1__* slaves; } ;
typedef TYPE_3__ TeeContext ;
struct TYPE_26__ {int time_base_out; } ;
struct TYPE_25__ {TYPE_2__** streams; TYPE_3__* priv_data; } ;
struct TYPE_24__ {unsigned int stream_index; } ;
struct TYPE_22__ {int time_base; } ;
struct TYPE_21__ {int* stream_map; TYPE_6__** bsfs; TYPE_5__* avf; } ;
typedef TYPE_4__ AVPacket ;
typedef TYPE_5__ AVFormatContext ;
typedef TYPE_6__ AVBSFContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_6__*,TYPE_4__*) ;
 int FUNC_2 (TYPE_6__*,TYPE_4__*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_5__*,TYPE_4__*) ;
 int FUNC_5 (TYPE_5__*,int ,char*,int ) ;
 int FUNC_6 (TYPE_4__*,TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*,int ,int ) ;
 int FUNC_8 (TYPE_4__*,int ,int) ;
 int FUNC_9 (TYPE_5__*,unsigned int,int) ;

__attribute__((used)) static int FUNC_10(AVFormatContext *VAR_2, AVPacket *VAR_3)
{
    TeeContext *VAR_4 = VAR_2->priv_data;
    AVFormatContext *VAR_5;
    AVBSFContext *VAR_6;
    AVPacket VAR_7;
    int VAR_8 = 0, VAR_9;
    unsigned VAR_10, VAR_11;
    int VAR_12;

    for (VAR_10 = 0; VAR_10 < VAR_4->nb_slaves; VAR_10++) {
        if (!(VAR_5 = VAR_4->slaves[VAR_10].avf))
            continue;


        if (!VAR_3) {
            VAR_9 = FUNC_4(VAR_5, ((void*)0));
            if (VAR_9 < 0) {
                VAR_9 = FUNC_9(VAR_2, VAR_10, VAR_9);
                if (!VAR_8 && VAR_9 < 0)
                    VAR_8 = VAR_9;
            }
            continue;
        }

        VAR_11 = VAR_3->stream_index;
        VAR_12 = VAR_4->slaves[VAR_10].stream_map[VAR_11];
        if (VAR_12 < 0)
            continue;

        FUNC_8(&VAR_7, 0, sizeof(AVPacket));
        if ((VAR_9 = FUNC_6(&VAR_7, VAR_3)) < 0)
            if (!VAR_8) {
                VAR_8 = VAR_9;
                continue;
            }
        VAR_6 = VAR_4->slaves[VAR_10].bsfs[VAR_12];
        VAR_7 = VAR_12;

        VAR_9 = FUNC_2(VAR_6, &VAR_7);
        if (VAR_9 < 0) {
            FUNC_5(VAR_2, VAR_0, "Error while sending packet to bitstream filter: %s\n",
                   FUNC_3(VAR_9));
            VAR_9 = FUNC_9(VAR_2, VAR_10, VAR_9);
            if (!VAR_8 && VAR_9 < 0)
                VAR_8 = VAR_9;
        }

        while(1) {
            VAR_9 = FUNC_1(VAR_6, &VAR_7);
            if (VAR_9 == FUNC_0(VAR_1)) {
                VAR_9 = 0;
                break;
            } else if (VAR_9 < 0) {
                break;
            }

            FUNC_7(&VAR_7, VAR_6->time_base_out,
                                 VAR_5->streams[VAR_12]->time_base);
            VAR_9 = FUNC_4(VAR_5, &VAR_7);
            if (VAR_9 < 0)
                break;
        };

        if (VAR_9 < 0) {
            VAR_9 = FUNC_9(VAR_2, VAR_10, VAR_9);
            if (!VAR_8 && VAR_9 < 0)
                VAR_8 = VAR_9;
        }
    }
    return VAR_8;
}
