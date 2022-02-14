
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int ptrdiff_t ;
typedef int int64_t ;
struct TYPE_12__ {int (* bswap_buf ) (int*,int*,int) ;} ;
struct TYPE_11__ {int (* sub_left_predict ) (int*,int*,int,int,int) ;} ;
struct TYPE_13__ {int frame_pred; int slices; scalar_t__ slice_bits; TYPE_2__ bdsp; TYPE_1__ llvidencdsp; } ;
typedef TYPE_3__ UtvideoContext ;
struct TYPE_15__ {scalar_t__ pix_fmt; TYPE_3__* priv_data; } ;
struct TYPE_14__ {int len; int sym; } ;
typedef int PutByteContext ;
typedef TYPE_4__ HuffEntry ;
typedef TYPE_5__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;



 int VAR_3 ;
 int FUNC_0 (int*,int,int*,int,int,int) ;
 int FUNC_1 (TYPE_5__*,int ,char*,int) ;
 int FUNC_2 (int *,scalar_t__,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int,int ) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (int*,int,int,int*) ;
 int FUNC_8 (int*,int*,int,int) ;
 int FUNC_9 (TYPE_3__*,int*,int*,int,int,int) ;
 int FUNC_10 (int*,int*,int,int,int) ;
 int FUNC_11 (int*,int*,int) ;
 int FUNC_12 (int*,scalar_t__,int,int,int,TYPE_4__*) ;

__attribute__((used)) static int FUNC_13(AVCodecContext *VAR_4, uint8_t *VAR_5,
                        uint8_t *VAR_6, ptrdiff_t VAR_7, int VAR_8,
                        int VAR_9, int VAR_10, PutByteContext *VAR_11)
{
    UtvideoContext *VAR_12 = VAR_4->priv_data;
    uint8_t VAR_13[256];
    uint64_t VAR_14[256] = { 0 };

    HuffEntry VAR_15[256];

    uint32_t VAR_16 = 0, VAR_17 = 0;
    const int VAR_18 = !(!VAR_8 && VAR_4->pix_fmt == VAR_2);
    int VAR_19, VAR_20, VAR_21 = 0;
    int VAR_22;
    int VAR_23;


    switch (VAR_12->frame_pred) {
    case 128:
        for (VAR_19 = 0; VAR_19 < VAR_12->slices; VAR_19++) {
            VAR_20 = VAR_21;
            VAR_21 = VAR_10 * (VAR_19 + 1) / VAR_12->slices & VAR_18;
            FUNC_0(VAR_6 + VAR_20 * VAR_9, VAR_9,
                                VAR_5 + VAR_20 * VAR_7, VAR_7,
                                VAR_9, VAR_21 - VAR_20);
        }
        break;
    case 130:
        for (VAR_19 = 0; VAR_19 < VAR_12->slices; VAR_19++) {
            VAR_20 = VAR_21;
            VAR_21 = VAR_10 * (VAR_19 + 1) / VAR_12->slices & VAR_18;
            VAR_12->llvidencdsp.sub_left_predict(VAR_6 + VAR_20 * VAR_9, VAR_5 + VAR_20 * VAR_7, VAR_7, VAR_9, VAR_21 - VAR_20);
        }
        break;
    case 129:
        for (VAR_19 = 0; VAR_19 < VAR_12->slices; VAR_19++) {
            VAR_20 = VAR_21;
            VAR_21 = VAR_10 * (VAR_19 + 1) / VAR_12->slices & VAR_18;
            FUNC_9(VAR_12, VAR_5 + VAR_20 * VAR_7, VAR_6 + VAR_20 * VAR_9,
                           VAR_7, VAR_9, VAR_21 - VAR_20);
        }
        break;
    default:
        FUNC_1(VAR_4, VAR_1, "Unknown prediction mode: %d\n",
               VAR_12->frame_pred);
        return VAR_0;
    }


    FUNC_7(VAR_6, VAR_9, VAR_10, VAR_14);


    for (VAR_22 = 0; VAR_22 < 256; VAR_22++) {

        if (VAR_14[VAR_22]) {

            if (VAR_14[VAR_22] == VAR_9 * (int64_t)VAR_10) {




                for (VAR_19 = 0; VAR_19 < 256; VAR_19++) {
                    if (VAR_19 == VAR_22)
                        FUNC_3(VAR_11, 0);
                    else
                        FUNC_3(VAR_11, 0xFF);
                }


                for (VAR_19 = 0; VAR_19 < VAR_12->slices; VAR_19++)
                    FUNC_4(VAR_11, 0);


                return 0;
            }
            break;
        }
    }


    if ((VAR_23 = FUNC_8(VAR_13, VAR_14, 256, 1)) < 0)
        return VAR_23;






    for (VAR_19 = 0; VAR_19 < 256; VAR_19++) {
        FUNC_3(VAR_11, VAR_13[VAR_19]);

        VAR_15[VAR_19].len = VAR_13[VAR_19];
        VAR_15[VAR_19].sym = VAR_19;
    }


    FUNC_6(VAR_15);

    VAR_21 = 0;
    for (VAR_19 = 0; VAR_19 < VAR_12->slices; VAR_19++) {
        VAR_20 = VAR_21;
        VAR_21 = VAR_10 * (VAR_19 + 1) / VAR_12->slices & VAR_18;





        VAR_16 += FUNC_12(VAR_6 + VAR_20 * VAR_9, VAR_12->slice_bits,
                                   VAR_9 * VAR_10 + 4, VAR_9,
                                   VAR_21 - VAR_20, VAR_15) >> 3;

        VAR_17 = VAR_16 - VAR_17;


        VAR_12->bdsp.bswap_buf((uint32_t *) VAR_12->slice_bits,
                          (uint32_t *) VAR_12->slice_bits,
                          VAR_17 >> 2);


        FUNC_4(VAR_11, VAR_16);


        FUNC_5(VAR_11, 4 * (VAR_12->slices - VAR_19 - 1) +
                           VAR_16 - VAR_17, VAR_3);


        FUNC_2(VAR_11, VAR_12->slice_bits, VAR_17);


        FUNC_5(VAR_11, -4 * (VAR_12->slices - VAR_19 - 1) - VAR_16,
                           VAR_3);

        VAR_17 = VAR_16;
    }


    FUNC_5(VAR_11, VAR_16, VAR_3);

    return 0;
}
