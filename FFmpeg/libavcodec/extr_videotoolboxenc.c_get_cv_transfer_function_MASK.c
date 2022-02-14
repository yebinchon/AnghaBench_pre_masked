
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef enum AVColorTransferCharacteristic { ____Placeholder_AVColorTransferCharacteristic } AVColorTransferCharacteristic ;
struct TYPE_6__ {int * kCVImageBufferTransferFunction_ITU_R_2020; } ;
struct TYPE_5__ {int color_trc; } ;
typedef double Float32 ;
typedef int * CFStringRef ;
typedef int * CFNumberRef ;
typedef TYPE_1__ AVCodecContext ;
 int VAR_0 ;
 int * FUNC_0 (int *,int ,double*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int ,char*,int ) ;
 TYPE_3__ VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;

__attribute__((used)) static int FUNC_3(AVCodecContext *VAR_9,
                                    CFStringRef *VAR_10,
                                    CFNumberRef *VAR_11)
{
    enum AVColorTransferCharacteristic VAR_12 = VAR_9->color_trc;
    Float32 VAR_13;
    *VAR_11 = ((void*)0);

    switch (VAR_12) {
        case 128:
            *VAR_10 = ((void*)0);
            break;

        case 134:
            *VAR_10 = VAR_4;
            break;

        case 129:
            *VAR_10 = VAR_6;
            break;
        case 133:
            VAR_13 = 2.2;
            *VAR_10 = VAR_8;
            *VAR_11 = FUNC_0(((void*)0), VAR_2, &VAR_13);
            break;

        case 132:
            VAR_13 = 2.8;
            *VAR_10 = VAR_8;
            *VAR_11 = FUNC_0(((void*)0), VAR_2, &VAR_13);
            break;

        case 136:
        case 135:
            *VAR_10 = VAR_1.kCVImageBufferTransferFunction_ITU_R_2020;
            break;

        default:
            *VAR_10 = ((void*)0);
            FUNC_2(VAR_9, VAR_0, "Transfer function %s is not supported.\n", FUNC_1(VAR_12));
            return -1;
    }

    return 0;
}
