
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int * streams; } ;
struct TYPE_10__ {int nb_streams; int ist_index; TYPE_5__* ctx; } ;
struct TYPE_9__ {scalar_t__ user_set_discard; } ;
struct TYPE_8__ {int nb_stream_maps; TYPE_1__* stream_maps; } ;
struct TYPE_7__ {int file_index; size_t stream_index; int disabled; int sync_file_index; int sync_stream_index; int linklabel; } ;
typedef TYPE_1__ StreamMap ;
typedef TYPE_2__ OptionsContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (char**) ;
 int FUNC_3 (char const**,char*) ;
 int FUNC_4 (int *,int ,char*,...) ;
 char* FUNC_5 (char const*) ;
 int FUNC_6 (TYPE_5__*,int ,char*) ;
 int FUNC_7 (int) ;
 TYPE_4__** VAR_5 ;
 TYPE_3__** VAR_6 ;
 int VAR_7 ;
 char* FUNC_8 (char*,char) ;
 int FUNC_9 (char*,char**,int ) ;

__attribute__((used)) static int FUNC_10(void *VAR_8, const char *VAR_9, const char *VAR_10)
{
    OptionsContext *VAR_11 = VAR_8;
    StreamMap *VAR_12 = ((void*)0);
    int VAR_13, VAR_14 = 0, VAR_15, VAR_16 = 0;
    int VAR_17 = -1, VAR_18 = 0;
    char *VAR_19, *VAR_20;
    char *VAR_21;
    char *VAR_22;

    if (*VAR_10 == '-') {
        VAR_14 = 1;
        VAR_10++;
    }
    VAR_21 = FUNC_5(VAR_10);
    if (!VAR_21)
        return FUNC_0(VAR_4);


    if ((VAR_20 = FUNC_8(VAR_21, ','))) {
        *VAR_20 = 0;
        VAR_17 = FUNC_9(VAR_20 + 1, &VAR_20, 0);
        if (VAR_17 >= VAR_7 || VAR_17 < 0) {
            FUNC_4(((void*)0), VAR_2, "Invalid sync file index: %d.\n", VAR_17);
            FUNC_7(1);
        }
        if (*VAR_20)
            VAR_20++;
        for (VAR_13 = 0; VAR_13 < VAR_5[VAR_17]->nb_streams; VAR_13++)
            if (FUNC_6(VAR_5[VAR_17]->ctx,
                                       VAR_5[VAR_17]->ctx->streams[VAR_13], VAR_20) == 1) {
                VAR_18 = VAR_13;
                break;
            }
        if (VAR_13 == VAR_5[VAR_17]->nb_streams) {
            FUNC_4(((void*)0), VAR_2, "Sync stream specification in map %s does not "
                                       "match any streams.\n", VAR_10);
            FUNC_7(1);
        }
        if (VAR_6[VAR_5[VAR_17]->ist_index + VAR_18]->user_set_discard == VAR_0) {
            FUNC_4(((void*)0), VAR_2, "Sync stream specification in map %s matches a disabled input "
                                       "stream.\n", VAR_10);
            FUNC_7(1);
        }
    }


    if (VAR_21[0] == '[') {

        const char *VAR_23 = VAR_21 + 1;
        FUNC_1(VAR_11->stream_maps, VAR_11->nb_stream_maps);
        VAR_12 = &VAR_11->stream_maps[VAR_11->nb_stream_maps - 1];
        VAR_12->linklabel = FUNC_3(&VAR_23, "]");
        if (!VAR_12->linklabel) {
            FUNC_4(((void*)0), VAR_1, "Invalid output link label: %s.\n", VAR_21);
            FUNC_7(1);
        }
    } else {
        if ((VAR_22 = FUNC_8(VAR_21, '?')))
            *VAR_22 = 0;
        VAR_15 = FUNC_9(VAR_21, &VAR_19, 0);
        if (VAR_15 >= VAR_7 || VAR_15 < 0) {
            FUNC_4(((void*)0), VAR_2, "Invalid input file index: %d.\n", VAR_15);
            FUNC_7(1);
        }
        if (VAR_14)

            for (VAR_13 = 0; VAR_13 < VAR_11->nb_stream_maps; VAR_13++) {
                VAR_12 = &VAR_11->stream_maps[VAR_13];
                if (VAR_15 == VAR_12->file_index &&
                    FUNC_6(VAR_5[VAR_12->file_index]->ctx,
                                           VAR_5[VAR_12->file_index]->ctx->streams[VAR_12->stream_index],
                                           *VAR_19 == ':' ? VAR_19 + 1 : VAR_19) > 0)
                    VAR_12->disabled = 1;
            }
        else
            for (VAR_13 = 0; VAR_13 < VAR_5[VAR_15]->nb_streams; VAR_13++) {
                if (FUNC_6(VAR_5[VAR_15]->ctx, VAR_5[VAR_15]->ctx->streams[VAR_13],
                            *VAR_19 == ':' ? VAR_19 + 1 : VAR_19) <= 0)
                    continue;
                if (VAR_6[VAR_5[VAR_15]->ist_index + VAR_13]->user_set_discard == VAR_0) {
                    VAR_16 = 1;
                    continue;
                }
                FUNC_1(VAR_11->stream_maps, VAR_11->nb_stream_maps);
                VAR_12 = &VAR_11->stream_maps[VAR_11->nb_stream_maps - 1];

                VAR_12->file_index = VAR_15;
                VAR_12->stream_index = VAR_13;

                if (VAR_17 >= 0) {
                    VAR_12->sync_file_index = VAR_17;
                    VAR_12->sync_stream_index = VAR_18;
                } else {
                    VAR_12->sync_file_index = VAR_15;
                    VAR_12->sync_stream_index = VAR_13;
                }
            }
    }

    if (!VAR_12) {
        if (VAR_22) {
            FUNC_4(((void*)0), VAR_3, "Stream map '%s' matches no streams; ignoring.\n", VAR_10);
        } else if (VAR_16) {
            FUNC_4(((void*)0), VAR_2, "Stream map '%s' matches disabled streams.\n"
                                       "To ignore this, add a trailing '?' to the map.\n", VAR_10);
            FUNC_7(1);
        } else {
            FUNC_4(((void*)0), VAR_2, "Stream map '%s' matches no streams.\n"
                                       "To ignore this, add a trailing '?' to the map.\n", VAR_10);
            FUNC_7(1);
        }
    }

    FUNC_2(&VAR_21);
    return 0;
}
