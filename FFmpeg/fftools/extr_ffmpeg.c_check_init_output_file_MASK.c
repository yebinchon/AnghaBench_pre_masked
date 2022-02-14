
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int pkt ;
struct TYPE_13__ {int nb_streams; int url; int interrupt_callback; } ;
struct TYPE_12__ {int ost_index; int header_written; TYPE_8__* ctx; int opts; } ;
struct TYPE_11__ {int muxing_queue; TYPE_1__* st; int mux_timebase; int initialized; } ;
struct TYPE_10__ {int time_base; } ;
typedef TYPE_2__ OutputStream ;
typedef TYPE_3__ OutputFile ;
typedef int AVPacket ;


 int VAR_0 ;
 int FUNC_0 (TYPE_8__*,int,int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int *,int,int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,char*,int,int ) ;
 int FUNC_5 (TYPE_8__*,int *) ;
 int VAR_1 ;
 TYPE_2__** VAR_2 ;
 int FUNC_6 () ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_7 (TYPE_3__*,int *,TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_8(OutputFile *VAR_5, int VAR_6)
{
    int VAR_7, VAR_8;

    for (VAR_8 = 0; VAR_8 < VAR_5->ctx->nb_streams; VAR_8++) {
        OutputStream *VAR_9 = VAR_2[VAR_5->ost_index + VAR_8];
        if (!VAR_9->initialized)
            return 0;
    }

    VAR_5->ctx->interrupt_callback = VAR_1;

    VAR_7 = FUNC_5(VAR_5->ctx, &VAR_5->opts);
    if (VAR_7 < 0) {
        FUNC_4(((void*)0), VAR_0,
               "Could not write header for output file #%d "
               "(incorrect codec parameters ?): %s\n",
               VAR_6, FUNC_1(VAR_7));
        return VAR_7;
    }

    VAR_5->header_written = 1;

    FUNC_0(VAR_5->ctx, VAR_6, VAR_5->ctx->url, 1);

    if (VAR_3 || VAR_4)
        FUNC_6();


    for (VAR_8 = 0; VAR_8 < VAR_5->ctx->nb_streams; VAR_8++) {
        OutputStream *VAR_10 = VAR_2[VAR_5->ost_index + VAR_8];


        if (!FUNC_3(VAR_10->muxing_queue))
            VAR_10->mux_timebase = VAR_10->st->time_base;

        while (FUNC_3(VAR_10->muxing_queue)) {
            AVPacket VAR_11;
            FUNC_2(VAR_10->muxing_queue, &VAR_11, sizeof(VAR_11), ((void*)0));
            FUNC_7(VAR_5, &VAR_11, VAR_10, 1);
        }
    }

    return 0;
}
