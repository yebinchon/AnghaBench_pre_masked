
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef enum AVColorPrimaries { ____Placeholder_AVColorPrimaries } AVColorPrimaries ;
struct TYPE_6__ {int * kCVImageBufferColorPrimaries_ITU_R_2020; } ;
struct TYPE_5__ {int color_primaries; } ;
typedef int * CFStringRef ;
typedef TYPE_1__ AVCodecContext ;





 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ,char*,int ) ;
 TYPE_3__ VAR_1 ;
 int * VAR_2 ;

__attribute__((used)) static int FUNC_2(AVCodecContext *VAR_3,
                                  CFStringRef *VAR_4)
{
    enum AVColorPrimaries VAR_5 = VAR_3->color_primaries;
    switch (VAR_5) {
        case 128:
            *VAR_4 = ((void*)0);
            break;

        case 129:
            *VAR_4 = VAR_2;
            break;

        case 130:
            *VAR_4 = VAR_1.kCVImageBufferColorPrimaries_ITU_R_2020;
            break;

        default:
            FUNC_1(VAR_3, VAR_0, "Color primaries %s is not supported.\n", FUNC_0(VAR_5));
            *VAR_4 = ((void*)0);
            return -1;
    }

    return 0;
}
