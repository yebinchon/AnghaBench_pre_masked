
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {TYPE_2__* par_out; TYPE_1__* par_in; } ;
struct TYPE_7__ {size_t extradata_size; int * extradata; } ;
struct TYPE_6__ {int extradata_size; int extradata; } ;
typedef int GetByteContext ;
typedef TYPE_3__ AVBSFContext ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 int FUNC_1 (int **) ;
 int FUNC_2 (TYPE_3__*,int ,char*,...) ;
 int FUNC_3 (int **,size_t) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int ,size_t) ;

__attribute__((used)) static int FUNC_10(AVBSFContext *VAR_10)
{
    GetByteContext VAR_11;
    int VAR_12, VAR_13, VAR_14, VAR_15;
    int VAR_16 = 0;

    uint8_t *VAR_17 = ((void*)0);
    size_t VAR_18 = 0;

    FUNC_7(&VAR_11, VAR_10->par_in->extradata, VAR_10->par_in->extradata_size);

    FUNC_8(&VAR_11, 21);
    VAR_12 = (FUNC_6(&VAR_11) & 3) + 1;
    VAR_13 = FUNC_6(&VAR_11);

    for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++) {
        int VAR_19 = FUNC_6(&VAR_11) & 0x3f;
        int VAR_20 = FUNC_4(&VAR_11);

        if (!(VAR_19 == VAR_8 || VAR_19 == VAR_7 || VAR_19 == VAR_4 ||
              VAR_19 == VAR_5 || VAR_19 == VAR_6)) {
            FUNC_2(VAR_10, VAR_2, "Invalid NAL unit type in extradata: %d\n",
                   VAR_19);
            VAR_16 = VAR_0;
            goto fail;
        }

        for (VAR_15 = 0; VAR_15 < VAR_20; VAR_15++) {
            int VAR_21 = FUNC_4(&VAR_11);

            if (4 + VAR_1 + VAR_21 > VAR_9 - VAR_18) {
                VAR_16 = VAR_0;
                goto fail;
            }
            VAR_16 = FUNC_3(&VAR_17, VAR_18 + VAR_21 + 4 + VAR_1);
            if (VAR_16 < 0)
                goto fail;

            FUNC_0(VAR_17 + VAR_18, 1);
            FUNC_5(&VAR_11, VAR_17 + VAR_18 + 4, VAR_21);
            VAR_18 += 4 + VAR_21;
            FUNC_9(VAR_17 + VAR_18, 0, VAR_1);
        }
    }

    FUNC_1(&VAR_10->par_out->extradata);
    VAR_10->par_out->extradata = VAR_17;
    VAR_10->par_out->extradata_size = VAR_18;

    if (!VAR_18)
        FUNC_2(VAR_10, VAR_3, "No parameter sets in the extradata\n");

    return VAR_12;
fail:
    FUNC_1(&VAR_17);
    return VAR_16;
}
