
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int color_space; } ;
typedef TYPE_1__ opj_image_t ;
typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;


 int VAR_0 ;
 int FUNC_0 (int*) ;



 int* VAR_1 ;
 int* VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_1__ const*,int const) ;
 int* VAR_3 ;
 int* VAR_4 ;

__attribute__((used)) static inline enum AVPixelFormat FUNC_2(const opj_image_t *VAR_5) {
    int VAR_6;
    const enum AVPixelFormat *VAR_7 = ((void*)0);
    int VAR_8 = 0;

    switch (VAR_5->color_space) {
    case 129:
        VAR_7 = VAR_3;
        VAR_8 = FUNC_0(VAR_3);
        break;
    case 130:
        VAR_7 = VAR_2;
        VAR_8 = FUNC_0(VAR_2);
        break;
    case 128:
        VAR_7 = VAR_4;
        VAR_8 = FUNC_0(VAR_4);
        break;
    default:
        VAR_7 = VAR_1;
        VAR_8 = FUNC_0(VAR_1);
        break;
    }

    for (VAR_6 = 0; VAR_6 < VAR_8; ++VAR_6)
        if (FUNC_1(VAR_5, VAR_7[VAR_6])) {
            return VAR_7[VAR_6];
        }

    return VAR_0;
}
