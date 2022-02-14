
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
typedef float int16_t ;
struct TYPE_4__ {int* cindex; int* lspv; } ;
struct TYPE_5__ {int bitrate; int first16bits; int rnd_fir_filter_mem; TYPE_1__ frame; } ;
typedef TYPE_2__ QCELPContext ;



 float const VAR_0 ;
 float const VAR_1 ;
 double VAR_2 ;





 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (float*,int ,int) ;
 float* VAR_3 ;
 float* VAR_4 ;
 float* VAR_5 ;

__attribute__((used)) static void FUNC_2(QCELPContext *VAR_6, const float *VAR_7,
                            float *VAR_8)
{
    int VAR_9, VAR_10, VAR_11;
    uint16_t VAR_12, VAR_13;
    float *VAR_14, VAR_15, VAR_16;

    switch (VAR_6->bitrate) {
    case 132:
        for (VAR_9 = 0; VAR_9 < 16; VAR_9++) {
            VAR_15 = VAR_7[VAR_9] * VAR_0;
            VAR_13 = -VAR_6->frame.cindex[VAR_9];
            for (VAR_10 = 0; VAR_10 < 10; VAR_10++)
                *VAR_8++ = VAR_15 *
                                VAR_3[VAR_13++ & 127];
        }
        break;
    case 131:
        for (VAR_9 = 0; VAR_9 < 4; VAR_9++) {
            VAR_15 = VAR_7[VAR_9] * VAR_1;
            VAR_13 = -VAR_6->frame.cindex[VAR_9];
            for (VAR_10 = 0; VAR_10 < 40; VAR_10++)
                *VAR_8++ = VAR_15 *
                                VAR_4[VAR_13++ & 127];
        }
        break;
    case 129:
        VAR_12 = (0x0003 & VAR_6->frame.lspv[4]) << 14 |
                 (0x003F & VAR_6->frame.lspv[3]) << 8 |
                 (0x0060 & VAR_6->frame.lspv[2]) << 1 |
                 (0x0007 & VAR_6->frame.lspv[1]) << 3 |
                 (0x0038 & VAR_6->frame.lspv[0]) >> 3;
        VAR_14 = VAR_6->rnd_fir_filter_mem + 20;
        for (VAR_9 = 0; VAR_9 < 8; VAR_9++) {
            VAR_15 = VAR_7[VAR_9] * (VAR_2 / 32768.0);
            for (VAR_11 = 0; VAR_11 < 20; VAR_11++) {
                VAR_12 = 521 * VAR_12 + 259;
                *VAR_14 = (int16_t) VAR_12;


                VAR_16 = 0.0;
                for (VAR_10 = 0; VAR_10 < 10; VAR_10++)
                    VAR_16 += VAR_5[VAR_10] *
                                        (VAR_14[-VAR_10] + VAR_14[-20+VAR_10]);

                VAR_16 += VAR_5[10] * VAR_14[-10];
                *VAR_8++ = VAR_15 * VAR_16;
                VAR_14++;
            }
        }
        FUNC_0(VAR_6->rnd_fir_filter_mem, VAR_6->rnd_fir_filter_mem + 160,
               20 * sizeof(float));
        break;
    case 130:
        VAR_12 = VAR_6->first16bits;
        for (VAR_9 = 0; VAR_9 < 8; VAR_9++) {
            VAR_15 = VAR_7[VAR_9] * (VAR_2 / 32768.0);
            for (VAR_10 = 0; VAR_10 < 20; VAR_10++) {
                VAR_12 = 521 * VAR_12 + 259;
                *VAR_8++ = VAR_15 * (int16_t) VAR_12;
            }
        }
        break;
    case 133:
        VAR_12 = -44;
        for (VAR_9 = 0; VAR_9 < 4; VAR_9++) {
            VAR_15 = VAR_7[VAR_9] * VAR_0;
            for (VAR_10 = 0; VAR_10 < 40; VAR_10++)
                *VAR_8++ = VAR_15 *
                                VAR_3[VAR_12++ & 127];
        }
        break;
    case 128:
        FUNC_1(VAR_8, 0, 160 * sizeof(float));
        break;
    }
}
