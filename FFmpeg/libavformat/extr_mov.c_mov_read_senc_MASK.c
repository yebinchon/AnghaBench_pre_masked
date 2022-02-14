
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ eof_reached; } ;
struct TYPE_14__ {int fc; } ;
struct TYPE_13__ {int nb_encrypted_samples; int ** encrypted_samples; } ;
typedef int MOVStreamContext ;
typedef TYPE_1__ MOVEncryptionIndex ;
typedef TYPE_2__ MOVContext ;
typedef int MOVAtom ;
typedef TYPE_3__ AVIOContext ;
typedef int AVEncryptionInfo ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (unsigned int,int) ;
 unsigned int FUNC_2 (int ,unsigned int) ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int ** FUNC_4 (int **,unsigned int*,unsigned int) ;
 int FUNC_5 (int ***) ;
 int FUNC_6 (int ,int ,char*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;
 unsigned int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_2__*,TYPE_1__**,int **) ;
 int FUNC_11 (TYPE_2__*,TYPE_3__*,int *,int **,int) ;

__attribute__((used)) static int FUNC_12(MOVContext *VAR_5, AVIOContext *VAR_6, MOVAtom VAR_7)
{
    AVEncryptionInfo **VAR_8;
    MOVEncryptionIndex *VAR_9;
    MOVStreamContext *VAR_10;
    int VAR_11, VAR_12;
    unsigned int VAR_13, VAR_14, VAR_15 = 0;

    VAR_12 = FUNC_10(VAR_5, &VAR_9, &VAR_10);
    if (VAR_12 != 1)
        return VAR_12;

    if (VAR_9->nb_encrypted_samples) {

        FUNC_6(VAR_5->fc, VAR_1, "Ignoring duplicate encryption info in senc\n");
        return 0;
    }

    FUNC_7(VAR_6);
    VAR_11 = FUNC_8(VAR_6) & 0x02;

    VAR_13 = FUNC_9(VAR_6);
    if (VAR_13 >= VAR_4 / sizeof(*VAR_8))
        return FUNC_0(VAR_3);

    for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++) {
        unsigned int VAR_16 = FUNC_2(FUNC_1(VAR_14 + 1, 1024 * 1024), VAR_13);
        VAR_8 = FUNC_4(VAR_9->encrypted_samples, &VAR_15,
                                            VAR_16 * sizeof(*VAR_8));
        if (VAR_8) {
            VAR_9->encrypted_samples = VAR_8;

            VAR_12 = FUNC_11(
                VAR_5, VAR_6, VAR_10, &VAR_9->encrypted_samples[VAR_14], VAR_11);
        } else {
            VAR_12 = FUNC_0(VAR_3);
        }
        if (VAR_6->eof_reached) {
            FUNC_6(VAR_5->fc, VAR_2, "Hit EOF while reading senc\n");
            VAR_12 = VAR_0;
        }

        if (VAR_12 < 0) {
            for (; VAR_14 > 0; VAR_14--)
                FUNC_3(VAR_9->encrypted_samples[VAR_14 - 1]);
            FUNC_5(&VAR_9->encrypted_samples);
            return VAR_12;
        }
    }
    VAR_9->nb_encrypted_samples = VAR_13;

    return 0;
}
