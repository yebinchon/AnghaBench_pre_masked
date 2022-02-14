
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef enum AVColorRange { ____Placeholder_AVColorRange } AVColorRange ;
struct TYPE_6__ {TYPE_1__* priv; } ;
struct TYPE_5__ {int did_warn_range; } ;
typedef TYPE_1__ ColorSpaceContext ;
typedef TYPE_2__ AVFilterContext ;





 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,int ,char*) ;

__attribute__((used)) static int FUNC_2(AVFilterContext *VAR_2, int *VAR_3,
                         int *VAR_4, int *VAR_5,
                         enum AVColorRange VAR_6, int VAR_7)
{
    switch (VAR_6) {
    case 128: {
        ColorSpaceContext *VAR_8 = VAR_2->priv;

        if (!VAR_8->did_warn_range) {
            FUNC_1(VAR_2, VAR_0, "Input range not set, assuming tv/mpeg\n");
            VAR_8->did_warn_range = 1;
        }
    }

    case 129:
        *VAR_3 = 16 << (VAR_7 - 8);
        *VAR_4 = 219 << (VAR_7 - 8);
        *VAR_5 = 224 << (VAR_7 - 8);
        break;
    case 130:
        *VAR_3 = 0;
        *VAR_4 = *VAR_5 = (256 << (VAR_7 - 8)) - 1;
        break;
    default:
        return FUNC_0(VAR_1);
    }

    return 0;
}
