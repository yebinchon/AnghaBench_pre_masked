
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_22__ ;
typedef struct TYPE_25__ TYPE_1__ ;


struct TYPE_25__ {int* stream_map; int header_written; TYPE_22__** bsfs; TYPE_3__* avf; int use_fifo; int * fifo_options; } ;
typedef TYPE_1__ TeeSlave ;
struct TYPE_29__ {char* key; char* value; } ;
struct TYPE_28__ {int nb_streams; TYPE_2__** streams; int strict_std_compliance; int flags; int interrupt_callback; int io_close; int io_open; int opaque; int metadata; } ;
struct TYPE_27__ {int codecpar; int time_base; } ;
struct TYPE_26__ {int par_in; int time_base_in; } ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVFormatContext ;
typedef TYPE_4__ AVDictionaryEntry ;
typedef int AVDictionary ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (TYPE_22__**) ;
 int FUNC_3 (TYPE_22__*) ;
 int FUNC_4 (char*,TYPE_22__**) ;
 void* FUNC_5 (int,int) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int **) ;
 TYPE_4__* FUNC_8 (int *,char*,TYPE_4__*,int ) ;
 int FUNC_9 (int *,char**,char,char) ;
 int FUNC_10 (int **,char*,char*,int ) ;
 char* FUNC_11 (int) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char**) ;
 int FUNC_14 (TYPE_3__*,int ,char*,...) ;
 char* FUNC_15 (char*) ;
 char* FUNC_16 (char*,int ,char**) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (TYPE_3__**,int *,char*,char*) ;
 int FUNC_19 (TYPE_3__*,TYPE_2__*,char const*) ;
 TYPE_2__* FUNC_20 (TYPE_3__*,int *) ;
 int FUNC_21 (TYPE_3__*,int **) ;
 int FUNC_22 (TYPE_3__*,char*,int *) ;
 int FUNC_23 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_24 (TYPE_3__*,char*,int **,char**) ;
 int FUNC_25 (char*,TYPE_1__*) ;
 int FUNC_26 (char*,char*,TYPE_1__*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_27 (char const*,int ) ;

__attribute__((used)) static int FUNC_28(AVFormatContext *VAR_10, char *VAR_11, TeeSlave *VAR_12)
{
    int VAR_13, VAR_14;
    AVDictionary *VAR_15 = ((void*)0), *VAR_16 = ((void*)0);
    AVDictionaryEntry *VAR_17;
    char *VAR_18;
    char *VAR_19 = ((void*)0), *VAR_20 = ((void*)0), *VAR_21 = ((void*)0);
    char *VAR_22 = ((void*)0), *VAR_23 = ((void*)0);
    AVFormatContext *VAR_24 = ((void*)0);
    AVStream *VAR_25, *VAR_26;
    int VAR_27;
    int VAR_28;
    char *VAR_29 = ((void*)0), *VAR_30 = ((void*)0), *VAR_31 = ((void*)0), *VAR_32 = ((void*)0);

    if ((VAR_14 = FUNC_24(VAR_10, VAR_11, &VAR_15, &VAR_18)) < 0)
        return VAR_14;
    do { if ((VAR_17 = FUNC_8(VAR_15, "f", ((void*)0), 0))) { VAR_19 = VAR_17->value; VAR_17->value = ((void*)0); FUNC_10(&VAR_15, "f", ((void*)0), 0); } } while (0);
    do { if ((VAR_17 = FUNC_8(VAR_15, "select", ((void*)0), 0))) { VAR_20 = VAR_17->value; VAR_17->value = ((void*)0); FUNC_10(&VAR_15, "select", ((void*)0), 0); } } while (0);
    do { if ((VAR_17 = FUNC_8(VAR_15, "onfail", ((void*)0), 0))) { VAR_21 = VAR_17->value; VAR_17->value = ((void*)0); FUNC_10(&VAR_15, "onfail", ((void*)0), 0); } } while (0);
    do { if ((VAR_17 = FUNC_8(VAR_15, "use_fifo", ((void*)0), 0))) { VAR_22 = VAR_17->value; VAR_17->value = ((void*)0); FUNC_10(&VAR_15, "use_fifo", ((void*)0), 0); } } while (0);
    do { if ((VAR_17 = FUNC_8(VAR_15, "fifo_options", ((void*)0), 0))) { VAR_23 = VAR_17->value; VAR_17->value = ((void*)0); FUNC_10(&VAR_15, "fifo_options", ((void*)0), 0); } } while (0);
    VAR_17 = ((void*)0);
    while ((VAR_17 = FUNC_8(VAR_15, "bsfs", VAR_17, VAR_2))) {

        FUNC_10(&VAR_16, VAR_17->key + 4, VAR_17->value, 0);
        FUNC_10(&VAR_15, VAR_17->key, ((void*)0), 0);
    }

    VAR_14 = FUNC_25(VAR_21, VAR_12);
    if (VAR_14 < 0) {
        FUNC_14(VAR_10, VAR_4,
               "Invalid onfail option value, valid options are 'abort' and 'ignore'\n");
        goto end;
    }

    VAR_14 = FUNC_26(VAR_22, VAR_23, VAR_12);
    if (VAR_14 < 0) {
        FUNC_14(VAR_10, VAR_4, "Error parsing fifo options: %s\n", FUNC_11(VAR_14));
        goto end;
    }

    if (VAR_12->use_fifo) {

        if (VAR_15) {
            char *VAR_33 = ((void*)0);
            VAR_14 = FUNC_9(VAR_15, &VAR_33, '=', ':');
            if (VAR_14 < 0)
                goto end;

            VAR_14 = FUNC_10(&VAR_12->fifo_options, "format_opts", VAR_33,
                              VAR_1);
            if (VAR_14 < 0)
                goto end;
        }

        if (VAR_19) {
            VAR_14 = FUNC_10(&VAR_12->fifo_options, "fifo_format", VAR_19,
                              VAR_1);
            VAR_19 = ((void*)0);
            if (VAR_14 < 0)
                goto end;
        }

        FUNC_7(&VAR_15);
        VAR_15 = VAR_12->fifo_options;
    }
    VAR_14 = FUNC_18(&VAR_24, ((void*)0),
                                         VAR_12->use_fifo ? "fifo" :VAR_19, VAR_18);
    if (VAR_14 < 0)
        goto end;
    VAR_12->avf = VAR_24;
    FUNC_6(&VAR_24->metadata, VAR_10->metadata, 0);
    VAR_24->opaque = VAR_10->opaque;
    VAR_24->io_open = VAR_10->io_open;
    VAR_24->io_close = VAR_10->io_close;
    VAR_24->interrupt_callback = VAR_10->interrupt_callback;
    VAR_24->flags = VAR_10->flags;
    VAR_24->strict_std_compliance = VAR_10->strict_std_compliance;

    VAR_12->stream_map = FUNC_5(VAR_10->nb_streams, sizeof(*VAR_12->stream_map));
    if (!VAR_12->stream_map) {
        VAR_14 = FUNC_0(VAR_7);
        goto end;
    }

    VAR_27 = 0;
    for (VAR_13 = 0; VAR_13 < VAR_10->nb_streams; VAR_13++) {
        VAR_25 = VAR_10->streams[VAR_13];
        if (VAR_20) {
            VAR_32 = FUNC_15(VAR_20);
            if (!VAR_32) {
                VAR_14 = FUNC_0(VAR_7);
                goto end;
            }
            VAR_28 = 0;
            VAR_31 = VAR_32;
            VAR_30 = ((void*)0);
            while ((VAR_29 = FUNC_16(VAR_31, VAR_9, &VAR_30))) {
                VAR_31 = ((void*)0);

                VAR_14 = FUNC_19(VAR_10, VAR_10->streams[VAR_13], VAR_29);
                if (VAR_14 < 0) {
                    FUNC_14(VAR_10, VAR_4,
                           "Invalid stream specifier '%s' for output '%s'\n",
                           VAR_29, VAR_11);
                    goto end;
                }
                if (VAR_14 != 0) {
                    VAR_28 = 1;
                    break;
                }
            }
            FUNC_13(&VAR_32);

            if (VAR_28 == 0) {
                VAR_12->stream_map[VAR_13] = -1;
                continue;
            }
        }
        VAR_12->stream_map[VAR_13] = VAR_27++;

        if (!(VAR_26 = FUNC_20(VAR_24, ((void*)0)))) {
            VAR_14 = FUNC_0(VAR_7);
            goto end;
        }

        VAR_14 = FUNC_23(VAR_26, VAR_25);
        if (VAR_14 < 0)
            goto end;
    }

    VAR_14 = FUNC_22(VAR_24, VAR_18, ((void*)0));
    if (VAR_14 < 0) {
        FUNC_14(VAR_10, VAR_4, "Slave '%s': error opening: %s\n", VAR_11,
               FUNC_11(VAR_14));
        goto end;
    }

    if ((VAR_14 = FUNC_21(VAR_24, &VAR_15)) < 0) {
        FUNC_14(VAR_10, VAR_4, "Slave '%s': error writing header: %s\n",
               VAR_11, FUNC_11(VAR_14));
        goto end;
    }
    VAR_12->header_written = 1;

    VAR_12->bsfs = FUNC_5(VAR_24->nb_streams, sizeof(*VAR_12->bsfs));
    if (!VAR_12->bsfs) {
        VAR_14 = FUNC_0(VAR_7);
        goto end;
    }

    VAR_17 = ((void*)0);
    while ((VAR_17 = FUNC_8(VAR_16, "", ((void*)0), VAR_2))) {
        const char *VAR_34 = VAR_17->key;
        if (*VAR_34) {
            if (FUNC_27(VAR_34, VAR_8) != 1) {
                FUNC_14(VAR_10, VAR_4,
                       "Specifier separator in '%s' is '%c', but only characters '%s' "
                       "are allowed\n", VAR_17->key, *VAR_34, VAR_8);
                VAR_14 = FUNC_0(VAR_6);
                goto end;
            }
            VAR_34++;
        }

        for (VAR_13 = 0; VAR_13 < VAR_24->nb_streams; VAR_13++) {
            VAR_14 = FUNC_19(VAR_24, VAR_24->streams[VAR_13], VAR_34);
            if (VAR_14 < 0) {
                FUNC_14(VAR_10, VAR_4,
                       "Invalid stream specifier '%s' in bsfs option '%s' for slave "
                       "output '%s'\n", VAR_34, VAR_17->key, VAR_18);
                goto end;
            }

            if (VAR_14 > 0) {
                FUNC_14(VAR_10, VAR_3, "spec:%s bsfs:%s matches stream %d of slave "
                       "output '%s'\n", VAR_34, VAR_17->value, VAR_13, VAR_18);
                if (VAR_12->bsfs[VAR_13]) {
                    FUNC_14(VAR_10, VAR_5,
                           "Duplicate bsfs specification associated to stream %d of slave "
                           "output '%s', filters will be ignored\n", VAR_13, VAR_18);
                    continue;
                }
                VAR_14 = FUNC_4(VAR_17->value, &VAR_12->bsfs[VAR_13]);
                if (VAR_14 < 0) {
                    FUNC_14(VAR_10, VAR_4,
                           "Error parsing bitstream filter sequence '%s' associated to "
                           "stream %d of slave output '%s'\n", VAR_17->value, VAR_13, VAR_18);
                    goto end;
                }
            }
        }

        FUNC_10(&VAR_16, VAR_17->key, ((void*)0), 0);
    }

    for (VAR_13 = 0; VAR_13 < VAR_10->nb_streams; VAR_13++){
        int VAR_35 = VAR_12->stream_map[VAR_13];
        if (VAR_35 < 0)
            continue;

        if (!VAR_12->bsfs[VAR_35]) {

            VAR_14 = FUNC_2(&VAR_12->bsfs[VAR_35]);
            if (VAR_14 < 0) {
                FUNC_14(VAR_10, VAR_4,
                       "Failed to create pass-through bitstream filter: %s\n",
                       FUNC_11(VAR_14));
                goto end;
            }
        }

        VAR_12->bsfs[VAR_35]->time_base_in = VAR_10->streams[VAR_13]->time_base;
        VAR_14 = FUNC_17(VAR_12->bsfs[VAR_35]->par_in,
                                      VAR_10->streams[VAR_13]->codecpar);
        if (VAR_14 < 0)
            goto end;

        VAR_14 = FUNC_3(VAR_12->bsfs[VAR_35]);
        if (VAR_14 < 0) {
            FUNC_14(VAR_10, VAR_4,
            "Failed to initialize bitstream filter(s): %s\n",
            FUNC_11(VAR_14));
            goto end;
        }
    }

    if (VAR_15) {
        VAR_17 = ((void*)0);
        while ((VAR_17 = FUNC_8(VAR_15, "", VAR_17, VAR_2)))
            FUNC_14(VAR_24, VAR_4, "Unknown option '%s'\n", VAR_17->key);
        VAR_14 = VAR_0;
        goto end;
    }

end:
    FUNC_12(VAR_19);
    FUNC_12(VAR_20);
    FUNC_12(VAR_21);
    FUNC_7(&VAR_15);
    FUNC_7(&VAR_16);
    FUNC_13(&VAR_32);
    return VAR_14;
}
