
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int den; int num; } ;
struct TYPE_5__ {int field_order; TYPE_1__ sample_aspect_ratio; } ;
typedef int GetByteContext ;
typedef TYPE_2__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,int,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int const*,size_t) ;
 int FUNC_3 (int *,int) ;

int FUNC_4(AVCodecContext *VAR_3,
                              const uint8_t *VAR_4, size_t VAR_5)
{
    GetByteContext VAR_6;
    int VAR_7, VAR_8, VAR_9;

    FUNC_2(&VAR_6, VAR_4, VAR_5);


    FUNC_3(&VAR_6, 8);
    VAR_7 = FUNC_1(&VAR_6);
    VAR_8 = FUNC_1(&VAR_6);
    if (VAR_7 && VAR_8)
        FUNC_0(&VAR_3->sample_aspect_ratio.num,
                  &VAR_3->sample_aspect_ratio.den,
                  VAR_7, VAR_8, 255);


    if (VAR_5 == 0x18)
        return 0;

    FUNC_3(&VAR_6, 16);


    FUNC_3(&VAR_6, 8);
    VAR_9 = FUNC_1(&VAR_6);
    switch (VAR_9) {
    case 0: VAR_3->field_order = VAR_2; break;
    case 1: VAR_3->field_order = VAR_0; break;
    case 2: VAR_3->field_order = VAR_1; break;
    }

    return 0;
}
