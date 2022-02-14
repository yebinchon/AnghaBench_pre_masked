
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {int const* buffer; } ;
typedef int HEVCSEI ;
typedef int HEVCParamSets ;
typedef TYPE_1__ GetByteContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,int ,char*,...) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int const*,int) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (int const*,int,int *,int *,int,int,int,int,void*) ;

int FUNC_8(const uint8_t *VAR_2, int VAR_3, HEVCParamSets *VAR_4,
                             HEVCSEI *VAR_5, int *VAR_6, int *VAR_7,
                             int VAR_8, int VAR_9, void *VAR_10)
{
    int VAR_11 = 0;
    GetByteContext VAR_12;

    FUNC_4(&VAR_12, VAR_2, VAR_3);

    if (VAR_3 > 3 && (VAR_2[0] || VAR_2[1] || VAR_2[2] > 1)) {




        int VAR_13, VAR_14, VAR_15, VAR_16;

        *VAR_6 = 1;

        FUNC_6(&VAR_12, 21);
        VAR_16 = (FUNC_2(&VAR_12) & 3) + 1;
        VAR_15 = FUNC_2(&VAR_12);



        *VAR_7 = 2;


        for (VAR_13 = 0; VAR_13 < VAR_15; VAR_13++) {
            int VAR_17 = FUNC_2(&VAR_12) & 0x3f;
            int VAR_18 = FUNC_1(&VAR_12);

            for (VAR_14 = 0; VAR_14 < VAR_18; VAR_14++) {

                int VAR_19 = FUNC_5(&VAR_12) + 2;
                if (FUNC_3(&VAR_12) < VAR_19) {
                    FUNC_0(VAR_10, VAR_1,
                           "Invalid NAL unit size in extradata.\n");
                    return VAR_0;
                }

                VAR_11 = FUNC_7(VAR_12.buffer, VAR_19, VAR_4, VAR_5, *VAR_6,
                                            *VAR_7, VAR_8, VAR_9,
                                            VAR_10);
                if (VAR_11 < 0) {
                    FUNC_0(VAR_10, VAR_1,
                           "Decoding nal unit %d %d from hvcC failed\n",
                           VAR_17, VAR_13);
                    return VAR_11;
                }
                FUNC_6(&VAR_12, VAR_19);
            }
        }



        *VAR_7 = VAR_16;
    } else {
        *VAR_6 = 0;
        VAR_11 = FUNC_7(VAR_2, VAR_3, VAR_4, VAR_5, *VAR_6, *VAR_7,
                                    VAR_8, VAR_9, VAR_10);
        if (VAR_11 < 0)
            return VAR_11;
    }

    return VAR_11;
}
