
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned int uint32_t ;
struct TYPE_5__ {int bits_per_coded_sample; unsigned int width; TYPE_1__* priv_data; } ;
struct TYPE_4__ {unsigned int bpp; } ;
typedef int PutByteContext ;
typedef TYPE_1__ MSCCContext ;
typedef int GetByteContext ;
typedef TYPE_2__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 unsigned int FUNC_2 (int *) ;
 unsigned int FUNC_3 (int *) ;
 unsigned int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned int) ;
 int FUNC_6 (int *,unsigned int) ;
 int FUNC_7 (int *,unsigned int) ;
 int FUNC_8 (int *,unsigned int) ;
 int FUNC_9 (int *,unsigned int,int ) ;
 int FUNC_10 (int *,int) ;

__attribute__((used)) static int FUNC_11(AVCodecContext *VAR_2, GetByteContext *VAR_3, PutByteContext *VAR_4)
{
    MSCCContext *VAR_5 = VAR_2->priv_data;
    unsigned VAR_6 = 0, VAR_7 = 0;

    while (FUNC_1(VAR_3) > 0) {
        uint32_t VAR_8;
        int VAR_9;
        unsigned VAR_10 = FUNC_0(VAR_3);

        if (VAR_10) {
            switch (VAR_2->bits_per_coded_sample) {
            case 8:
                VAR_8 = FUNC_0(VAR_3);
                break;
            case 16:
                VAR_8 = FUNC_2(VAR_3);
                break;
            case 24:
                VAR_8 = FUNC_3(VAR_3);
                break;
            case 32:
                VAR_8 = FUNC_4(VAR_3);
                break;
            }

            for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
                switch (VAR_2->bits_per_coded_sample) {
                case 8:
                    FUNC_5(VAR_4, VAR_8);
                    break;
                case 16:
                    FUNC_6(VAR_4, VAR_8);
                    break;
                case 24:
                    FUNC_7(VAR_4, VAR_8);
                    break;
                case 32:
                    FUNC_8(VAR_4, VAR_8);
                    break;
                }
            }
            VAR_6 += VAR_10;
        } else {
            unsigned VAR_11 = FUNC_0(VAR_3);

            if (VAR_11 == 0) {
                VAR_6 = 0;
                VAR_7++;
                FUNC_9(VAR_4, VAR_7 * VAR_2->width * VAR_5->bpp, VAR_1);
            } else if (VAR_11 == 1) {
                return 0;
            } else if (VAR_11 == 2) {

                VAR_6 += FUNC_0(VAR_3);
                VAR_7 += FUNC_0(VAR_3);

                FUNC_9(VAR_4, VAR_7 * VAR_2->width * VAR_5->bpp + VAR_6 * VAR_5->bpp, VAR_1);
            } else {
                for (VAR_9 = 0; VAR_9 < VAR_11; VAR_9++) {
                    switch (VAR_2->bits_per_coded_sample) {
                    case 8:
                        FUNC_5(VAR_4, FUNC_0(VAR_3));
                        break;
                    case 16:
                        FUNC_6(VAR_4, FUNC_2(VAR_3));
                        break;
                    case 24:
                        FUNC_7(VAR_4, FUNC_3(VAR_3));
                        break;
                    case 32:
                        FUNC_8(VAR_4, FUNC_4(VAR_3));
                        break;
                    }
                }

                if (VAR_5->bpp == 1 && (VAR_11 & 1))
                    FUNC_10(VAR_3, 1);
                VAR_6 += VAR_11;
            }
        }
    }

    return VAR_0;
}
