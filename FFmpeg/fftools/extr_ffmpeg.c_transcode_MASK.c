
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_16__ {int eof_reached; } ;
struct TYPE_15__ {int header_written; TYPE_4__* ctx; } ;
struct TYPE_14__ {int url; } ;
struct TYPE_13__ {size_t file_index; int dec_ctx; int (* hwaccel_uninit ) (int ) ;scalar_t__ decoding_needed; } ;
struct TYPE_12__ {int resample_opts; int swr_opts; int sws_dict; int encoder_opts; int disposition; int apad; int forced_kf_pts; int * logfile; scalar_t__ packets_written; TYPE_1__* enc_ctx; scalar_t__ encoding_needed; } ;
struct TYPE_11__ {int stats_in; } ;
typedef TYPE_2__ OutputStream ;
typedef TYPE_3__ InputStream ;
typedef TYPE_4__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int *,int ,char*,...) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_10 (int) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int VAR_9 ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 TYPE_9__** VAR_10 ;
 TYPE_3__** VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_16 () ;
 TYPE_7__** VAR_15 ;
 TYPE_2__** VAR_16 ;
 int FUNC_17 (int,scalar_t__,scalar_t__) ;
 int FUNC_18 (TYPE_3__*,int *,int ) ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_19 (int ) ;
 int FUNC_20 () ;
 int FUNC_21 () ;
 int FUNC_22 () ;

__attribute__((used)) static int FUNC_23(void)
{
    int VAR_19, VAR_20;
    AVFormatContext *VAR_21;
    OutputStream *VAR_22;
    InputStream *VAR_23;
    int64_t VAR_24;
    int64_t VAR_25 = 0;

    VAR_19 = FUNC_21();
    if (VAR_19 < 0)
        goto fail;

    if (VAR_18) {
        FUNC_6(((void*)0), VAR_4, "Press [q] to stop, [?] for help\n");
    }

    VAR_24 = FUNC_5();






    while (!VAR_17) {
        int64_t VAR_26= FUNC_5();


        if (VAR_18)
            if (FUNC_9(VAR_26) < 0)
                break;


        if (!FUNC_16()) {
            FUNC_6(((void*)0), VAR_5, "No more output streams to write to, finishing.\n");
            break;
        }

        VAR_19 = FUNC_22();
        if (VAR_19 < 0 && VAR_19 != VAR_1) {
            FUNC_6(((void*)0), VAR_2, "Error while filtering: %s\n", FUNC_3(VAR_19));
            break;
        }


        FUNC_17(0, VAR_24, VAR_26);
    }





    for (VAR_20 = 0; VAR_20 < VAR_12; VAR_20++) {
        VAR_23 = VAR_11[VAR_20];
        if (!VAR_10[VAR_23->file_index]->eof_reached) {
            FUNC_18(VAR_23, ((void*)0), 0);
        }
    }
    FUNC_12();

    FUNC_20();


    for (VAR_20 = 0; VAR_20 < VAR_13; VAR_20++) {
        VAR_21 = VAR_15[VAR_20]->ctx;
        if (!VAR_15[VAR_20]->header_written) {
            FUNC_6(((void*)0), VAR_2,
                   "Nothing was written into output file %d (%s), because "
                   "at least one of its streams received no packets.\n",
                   VAR_20, VAR_21->url);
            continue;
        }
        if ((VAR_19 = FUNC_7(VAR_21)) < 0) {
            FUNC_6(((void*)0), VAR_2, "Error writing trailer of %s: %s\n", VAR_21->url, FUNC_3(VAR_19));
            if (VAR_8)
                FUNC_10(1);
        }
    }


    FUNC_17(1, VAR_24, FUNC_5());


    for (VAR_20 = 0; VAR_20 < VAR_14; VAR_20++) {
        VAR_22 = VAR_16[VAR_20];
        if (VAR_22->encoding_needed) {
            FUNC_4(&VAR_22->enc_ctx->stats_in);
        }
        VAR_25 += VAR_22->packets_written;
    }

    if (!VAR_25 && (VAR_6 & VAR_0)) {
        FUNC_6(((void*)0), VAR_3, "Empty output\n");
        FUNC_10(1);
    }


    for (VAR_20 = 0; VAR_20 < VAR_12; VAR_20++) {
        VAR_23 = VAR_11[VAR_20];
        if (VAR_23->decoding_needed) {
            FUNC_8(VAR_23->dec_ctx);
            if (VAR_23->hwaccel_uninit)
                VAR_23->hwaccel_uninit(VAR_23->dec_ctx);
        }
    }

    FUNC_1(&VAR_9);
    FUNC_14();


    VAR_19 = 0;

 fail:




    if (VAR_16) {
        for (VAR_20 = 0; VAR_20 < VAR_14; VAR_20++) {
            VAR_22 = VAR_16[VAR_20];
            if (VAR_22) {
                if (VAR_22->logfile) {
                    if (FUNC_11(VAR_22->logfile))
                        FUNC_6(((void*)0), VAR_2,
                               "Error closing logfile, loss of information possible: %s\n",
                               FUNC_3(FUNC_0(VAR_7)));
                    VAR_22->logfile = ((void*)0);
                }
                FUNC_4(&VAR_22->forced_kf_pts);
                FUNC_4(&VAR_22->apad);
                FUNC_4(&VAR_22->disposition);
                FUNC_2(&VAR_22->encoder_opts);
                FUNC_2(&VAR_22->sws_dict);
                FUNC_2(&VAR_22->swr_opts);
                FUNC_2(&VAR_22->resample_opts);
            }
        }
    }
    return VAR_19;
}
