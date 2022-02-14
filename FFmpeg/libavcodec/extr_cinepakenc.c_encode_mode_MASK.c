
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
typedef unsigned int uint32_t ;
struct TYPE_13__ {int mode; scalar_t__ v1_size; int v1_codebook; scalar_t__ v4_size; int v4_codebook; } ;
typedef TYPE_1__ strip_info ;
struct TYPE_14__ {scalar_t__ best_encoding; unsigned char v1_vector; unsigned char* v4_vector; } ;
typedef TYPE_2__ mb_info ;
struct TYPE_15__ {int w; TYPE_2__* mb; int skip_empty_cb; } ;
typedef TYPE_3__ CinepakEncContext ;


 int FUNC_0 (unsigned char*,unsigned int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int,int) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;



 int FUNC_2 (TYPE_3__*,int **,int*,int **,int*) ;
 int FUNC_3 (TYPE_3__*,int **,int*,unsigned char,TYPE_1__*) ;
 int FUNC_4 (TYPE_3__*,int **,int*,unsigned char*,TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_3__*,int ,scalar_t__,int,int,unsigned char*) ;
 int FUNC_6 (TYPE_3__*,int,int,int **,int*,int **,int*) ;
 int FUNC_7 (unsigned char*,unsigned char*,int) ;
 int FUNC_8 (unsigned char*,int,int) ;

__attribute__((used)) static int FUNC_9(CinepakEncContext *VAR_6, int VAR_7,
                       uint8_t *VAR_8[4], int VAR_9[4],
                       uint8_t *VAR_10[4], int VAR_11[4],
                       strip_info *VAR_12, unsigned char *VAR_13)
{
    int VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20 = 0, VAR_21 = VAR_6->w * VAR_7 / VAR_4;
    int VAR_22, VAR_23;
    uint32_t VAR_24;
    unsigned char VAR_25[64];
    mb_info *VAR_26;
    uint8_t *VAR_27[4] = { 0 }, *VAR_28[4] = { 0 };
    int VAR_29[4] = { 0 }, VAR_30[4] = { 0 };





    if (VAR_12->v4_size || !VAR_6->skip_empty_cb)
        VAR_20 += FUNC_5(VAR_6, VAR_12->v4_codebook, VAR_12->v4_size, 0x20, 0x24, VAR_13 + VAR_20);

    if (VAR_12->v1_size || !VAR_6->skip_empty_cb)
        VAR_20 += FUNC_5(VAR_6, VAR_12->v1_codebook, VAR_12->v1_size, 0x22, 0x26, VAR_13 + VAR_20);


    for (VAR_16 = VAR_15 = 0; VAR_15 < VAR_7; VAR_15 += VAR_5)
        for (VAR_14 = 0; VAR_14 < VAR_6->w; VAR_14 += VAR_5, VAR_16++) {
            VAR_26 = &VAR_6->mb[VAR_16];

            FUNC_6(VAR_6, VAR_14, VAR_15, VAR_8, VAR_9,
                            VAR_27, VAR_29);

            if (VAR_12->mode == 130 && VAR_26->best_encoding == VAR_1) {
                FUNC_6(VAR_6, VAR_14, VAR_15, VAR_10, VAR_11,
                                VAR_28, VAR_30);
                FUNC_2(VAR_6, VAR_27, VAR_29,
                        VAR_28, VAR_30);
            } else if (VAR_12->mode == 129 || VAR_26->best_encoding == VAR_2)
                FUNC_3(VAR_6, VAR_27, VAR_29,
                                 VAR_26->v1_vector, VAR_12);
            else
                FUNC_4(VAR_6, VAR_27, VAR_29,
                                 VAR_26->v4_vector, VAR_12);
        }

    switch (VAR_12->mode) {
    case 129:
        VAR_20 += FUNC_8(VAR_13 + VAR_20, 0x32, VAR_21);

        for (VAR_14 = 0; VAR_14 < VAR_21; VAR_14++)
            VAR_13[VAR_20++] = VAR_6->mb[VAR_14].v1_vector;

        break;
    case 128:

        VAR_19 = VAR_20;
        VAR_20 += VAR_0;

        for (VAR_14 = 0; VAR_14 < VAR_21; VAR_14 += 32) {
            VAR_24 = 0;
            for (VAR_15 = VAR_14; VAR_15 < FUNC_1(VAR_14 + 32, VAR_21); VAR_15++)
                if (VAR_6->mb[VAR_15].best_encoding == VAR_3)
                    VAR_24 |= 1U << (31 - VAR_15 + VAR_14);

            FUNC_0(&VAR_13[VAR_20], VAR_24);
            VAR_20 += 4;

            for (VAR_15 = VAR_14; VAR_15 < FUNC_1(VAR_14 + 32, VAR_21); VAR_15++) {
                VAR_26 = &VAR_6->mb[VAR_15];

                if (VAR_26->best_encoding == VAR_2)
                    VAR_13[VAR_20++] = VAR_26->v1_vector;
                else
                    for (VAR_16 = 0; VAR_16 < 4; VAR_16++)
                        VAR_13[VAR_20++] = VAR_26->v4_vector[VAR_16];
            }
        }

        FUNC_8(VAR_13 + VAR_19, 0x30, VAR_20 - VAR_19 - VAR_0);

        break;
    case 130:

        VAR_19 = VAR_20;
        VAR_20 += VAR_0;
        VAR_24 = VAR_17 = VAR_18 = 0;

        for (VAR_14 = 0; VAR_14 < VAR_21; VAR_14++) {
            VAR_26 = &VAR_6->mb[VAR_14];
            VAR_24 |= (uint32_t)(VAR_26->best_encoding != VAR_1) << (31 - VAR_17++);
            VAR_22 = 0;
            VAR_23 = 0;

            if (VAR_26->best_encoding != VAR_1) {
                if (VAR_17 < 32)
                    VAR_24 |= (uint32_t)(VAR_26->best_encoding == VAR_3) << (31 - VAR_17++);
                else
                    VAR_22 = 1;
            }

            if (VAR_17 == 32) {
                FUNC_0(&VAR_13[VAR_20], VAR_24);
                VAR_20 += 4;
                VAR_24 = VAR_17 = 0;

                if (VAR_26->best_encoding == VAR_1 || VAR_22) {
                    FUNC_7(&VAR_13[VAR_20], VAR_25, VAR_18);
                    VAR_20 += VAR_18;
                    VAR_18 = 0;
                } else
                    VAR_23 = 1;
            }

            if (VAR_22) {
                VAR_24 = (uint32_t)(VAR_26->best_encoding == VAR_3) << 31;
                VAR_17 = 1;
            }

            if (VAR_26->best_encoding == VAR_2)
                VAR_25[VAR_18++] = VAR_26->v1_vector;
            else if (VAR_26->best_encoding == VAR_3)
                for (VAR_16 = 0; VAR_16 < 4; VAR_16++)
                    VAR_25[VAR_18++] = VAR_26->v4_vector[VAR_16];

            if (VAR_23) {
                FUNC_7(&VAR_13[VAR_20], VAR_25, VAR_18);
                VAR_20 += VAR_18;
                VAR_18 = 0;
            }
        }

        if (VAR_17 > 0) {
            FUNC_0(&VAR_13[VAR_20], VAR_24);
            VAR_20 += 4;
            FUNC_7(&VAR_13[VAR_20], VAR_25, VAR_18);
            VAR_20 += VAR_18;
        }

        FUNC_8(VAR_13 + VAR_19, 0x31, VAR_20 - VAR_19 - VAR_0);

        break;
    }

    return VAR_20;
}
