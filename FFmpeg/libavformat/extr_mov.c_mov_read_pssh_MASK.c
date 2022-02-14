
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_11__ ;


typedef int uint8_t ;
struct TYPE_19__ {unsigned int num_key_ids; unsigned int data_size; struct TYPE_19__* next; int * data; int ** key_ids; int * system_id; } ;
struct TYPE_18__ {scalar_t__ eof_reached; } ;
struct TYPE_17__ {TYPE_11__* fc; } ;
struct TYPE_16__ {int nb_streams; int ** streams; } ;
typedef TYPE_1__ MOVContext ;
typedef int MOVAtom ;
typedef int AVStream ;
typedef TYPE_2__ AVIOContext ;
typedef TYPE_3__ AVEncryptionInitInfo ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (unsigned int,int) ;
 unsigned int FUNC_2 (int ,unsigned int) ;
 int VAR_4 ;
 int * FUNC_3 (TYPE_3__*,size_t*) ;
 TYPE_3__* FUNC_4 (int,int ,int,int ) ;
 int FUNC_5 (TYPE_3__*) ;
 TYPE_3__* FUNC_6 (int *,int) ;
 int ** FUNC_7 (int **,unsigned int*,unsigned int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int **) ;
 int FUNC_10 (TYPE_11__*,int ,char*) ;
 int * FUNC_11 (int) ;
 int FUNC_12 (int *,int ,int *,size_t) ;
 int * FUNC_13 (int *,int ,int*) ;
 unsigned int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (TYPE_2__*) ;
 unsigned int FUNC_16 (TYPE_2__*) ;
 int FUNC_17 (TYPE_2__*,int *,int) ;
 int FUNC_18 (TYPE_2__*,unsigned int,int **) ;

__attribute__((used)) static int FUNC_19(MOVContext *VAR_5, AVIOContext *VAR_6, MOVAtom VAR_7)
{
    AVEncryptionInitInfo *VAR_8, *VAR_9;
    uint8_t **VAR_10;
    AVStream *VAR_11;
    uint8_t *VAR_12, *VAR_13, *VAR_14;
    size_t VAR_15;
    int VAR_16 = 0, VAR_17;
    unsigned int VAR_18, VAR_19, VAR_20, VAR_21 = 0;

    if (VAR_5->fc->nb_streams < 1)
        return 0;
    VAR_11 = VAR_5->fc->streams[VAR_5->fc->nb_streams-1];

    VAR_18 = FUNC_14(VAR_6);
    FUNC_15(VAR_6);

    VAR_8 = FUNC_4( 16, 0,
                                                           16, 0);
    if (!VAR_8)
        return FUNC_0(VAR_3);

    if (FUNC_17(VAR_6, VAR_8->system_id, 16) != 16) {
        FUNC_10(VAR_5->fc, VAR_1, "Failed to read the system id\n");
        VAR_16 = VAR_0;
        goto finish;
    }

    if (VAR_18 > 0) {
        VAR_19 = FUNC_16(VAR_6);
        if (VAR_19 >= VAR_4 / sizeof(*VAR_10))
            return FUNC_0(VAR_3);

        for (unsigned int VAR_22 = 0; VAR_22 < VAR_19 && !VAR_6->eof_reached; VAR_22++) {
            unsigned int VAR_23 = FUNC_2(FUNC_1(VAR_22 + 1, 1024), VAR_19);
            VAR_10 = FUNC_7(VAR_8->key_ids, &VAR_21,
                                      VAR_23 * sizeof(*VAR_10));
            if (!VAR_10) {
                VAR_16 = FUNC_0(VAR_3);
                goto finish;
            }
            VAR_8->key_ids = VAR_10;

            VAR_8->key_ids[VAR_22] = FUNC_11(16);
            if (!VAR_8->key_ids[VAR_22]) {
                VAR_16 = FUNC_0(VAR_3);
                goto finish;
            }
            VAR_8->num_key_ids = VAR_22 + 1;

            if (FUNC_17(VAR_6, VAR_8->key_ids[VAR_22], 16) != 16) {
                FUNC_10(VAR_5->fc, VAR_1, "Failed to read the key id\n");
                VAR_16 = VAR_0;
                goto finish;
            }
        }

        if (VAR_6->eof_reached) {
            FUNC_10(VAR_5->fc, VAR_1, "Hit EOF while reading pssh\n");
            VAR_16 = VAR_0;
            goto finish;
        }
    }

    VAR_20 = FUNC_16(VAR_6);
    VAR_16 = FUNC_18(VAR_6, VAR_20, &VAR_13);
    if (VAR_16 < 0)
        goto finish;

    FUNC_9(&VAR_8->data);
    VAR_8->data = VAR_13;
    VAR_8->data_size = VAR_20;


    VAR_14 = FUNC_13(VAR_11, VAR_2, &VAR_17);
    if (VAR_14) {
        VAR_9 = FUNC_6(VAR_14, VAR_17);
        if (VAR_9) {

            for (AVEncryptionInitInfo *VAR_24 = VAR_9;; VAR_24 = VAR_24->next) {
                if (!VAR_24->next) {
                    VAR_24->next = VAR_8;
                    break;
                }
            }
            VAR_8 = VAR_9;
        } else {

            VAR_16 = FUNC_0(VAR_3);
            goto finish;
        }
    }

    VAR_12 = FUNC_3(VAR_8, &VAR_15);
    if (!VAR_12) {
        VAR_16 = FUNC_0(VAR_3);
        goto finish;
    }
    VAR_16 = FUNC_12(VAR_11, VAR_2,
                                  VAR_12, VAR_15);
    if (VAR_16 < 0)
        FUNC_8(VAR_12);

finish:
    FUNC_5(VAR_8);
    return VAR_16;
}
