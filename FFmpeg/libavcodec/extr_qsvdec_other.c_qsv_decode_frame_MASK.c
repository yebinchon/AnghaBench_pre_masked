
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int input_ref ;
struct TYPE_17__ {scalar_t__ reinit_flag; } ;
struct TYPE_16__ {TYPE_1__* priv_data; } ;
struct TYPE_15__ {int size; int data; int member_0; } ;
struct TYPE_14__ {TYPE_2__ input_ref; TYPE_7__ qsv; int packet_fifo; } ;
typedef TYPE_1__ QSVOtherContext ;
typedef TYPE_2__ AVPacket ;
typedef int AVFrame ;
typedef TYPE_3__ AVCodecContext ;


 int FUNC_0 (int ,TYPE_2__*,int,int *) ;
 int FUNC_1 (int ,TYPE_2__*,int,int *) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_3__*,TYPE_7__*,int *,int*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_8(AVCodecContext *VAR_0, void *VAR_1,
                            int *VAR_2, AVPacket *VAR_3)
{
    QSVOtherContext *VAR_4 = VAR_0->priv_data;
    AVFrame *VAR_5 = VAR_1;
    int VAR_6;


    if (VAR_3->size) {
        AVPacket VAR_7 = { 0 };

        if (FUNC_4(VAR_4->packet_fifo) < sizeof(VAR_7)) {
            VAR_6 = FUNC_2(VAR_4->packet_fifo,
                                   FUNC_3(VAR_4->packet_fifo) + sizeof(VAR_7));
            if (VAR_6 < 0)
                return VAR_6;
        }

        VAR_6 = FUNC_5(&VAR_7, VAR_3);
        if (VAR_6 < 0)
            return VAR_6;
        FUNC_1(VAR_4->packet_fifo, &VAR_7, sizeof(VAR_7), ((void*)0));
    }


    while (!*VAR_2) {
        if (VAR_4->input_ref.size <= 0) {

            if (FUNC_3(VAR_4->packet_fifo) < sizeof(AVPacket))
                return VAR_3->size ? VAR_3->size : FUNC_7(VAR_0, &VAR_4->qsv, VAR_5, VAR_2, VAR_3);

            if (!VAR_4->qsv.reinit_flag) {
                FUNC_6(&VAR_4->input_ref);
                FUNC_0(VAR_4->packet_fifo, &VAR_4->input_ref, sizeof(VAR_4->input_ref), ((void*)0));
            }
        }

        VAR_6 = FUNC_7(VAR_0, &VAR_4->qsv, VAR_5, VAR_2, &VAR_4->input_ref);
        if (VAR_6 < 0) {


            FUNC_6(&VAR_4->input_ref);

            return VAR_6;
        }
        if (VAR_4->qsv.reinit_flag)
            continue;

        VAR_4->input_ref.size -= VAR_6;
        VAR_4->input_ref.data += VAR_6;
    }

    return VAR_3->size;
}
