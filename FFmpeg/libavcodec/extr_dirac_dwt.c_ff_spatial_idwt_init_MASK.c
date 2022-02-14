
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef enum dwt_type { ____Placeholder_dwt_type } dwt_type ;
struct TYPE_10__ {int decomposition_count; int temp; int stride; int height; int width; int buffer; } ;
struct TYPE_9__ {int tmp; int stride; int height; int width; int buf; } ;
typedef TYPE_1__ DWTPlane ;
typedef TYPE_2__ DWTContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,char*,int) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*,int) ;

int FUNC_5(DWTContext *VAR_4, DWTPlane *VAR_5, enum dwt_type VAR_6,
                         int VAR_7, int VAR_8)
{
    int VAR_9 = 0;

    VAR_4->buffer = VAR_5->buf;
    VAR_4->width = VAR_5->width;
    VAR_4->height = VAR_5->height;
    VAR_4->stride = VAR_5->stride;
    VAR_4->temp = VAR_5->tmp;
    VAR_4->decomposition_count = VAR_7;

    if (VAR_8 == 8)
        VAR_9 = FUNC_3(VAR_4, VAR_6);
    else if (VAR_8 == 10)
        VAR_9 = FUNC_1(VAR_4, VAR_6);
    else if (VAR_8 == 12)
        VAR_9 = FUNC_2(VAR_4, VAR_6);
    else
        FUNC_0(((void*)0), VAR_3, "Unsupported bit depth = %i\n", VAR_8);

    if (VAR_9) {
        FUNC_0(((void*)0), VAR_2, "Unknown wavelet type %d\n", VAR_6);
        return VAR_1;
    }

    if (VAR_0 && VAR_8 == 8)
        FUNC_4(VAR_4, VAR_6);
    return 0;
}
