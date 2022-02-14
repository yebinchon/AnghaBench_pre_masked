
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * kCVImageBufferYCbCrMatrix_ITU_R_2020; } ;
struct TYPE_5__ {int colorspace; } ;
typedef int * CFStringRef ;
typedef TYPE_1__ AVCodecContext ;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ,char*,int ) ;
 TYPE_3__ VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;

__attribute__((used)) static int FUNC_2(AVCodecContext *VAR_5, CFStringRef *VAR_6) {
    switch(VAR_5->colorspace) {
        case 131:
            *VAR_6 = VAR_3;
            break;

        case 128:
            *VAR_6 = ((void*)0);
            break;

        case 132:
        case 130:
            *VAR_6 = VAR_2;
            break;

        case 129:
            *VAR_6 = VAR_4;
            break;

        case 133:
            *VAR_6 = VAR_1.kCVImageBufferYCbCrMatrix_ITU_R_2020;
            break;

        default:
            FUNC_1(VAR_5, VAR_0, "Color space %s is not supported.\n", FUNC_0(VAR_5->colorspace));
            return -1;
    }

    return 0;
}
