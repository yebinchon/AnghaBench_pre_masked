
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ width; scalar_t__ height; int crop_left; int crop_right; scalar_t__ crop_top; scalar_t__ crop_bottom; scalar_t__* data; int format; } ;
struct TYPE_7__ {int flags; } ;
typedef TYPE_1__ AVPixFmtDescriptor ;
typedef TYPE_2__ AVFrame ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int,int) ;
 int VAR_6 ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (size_t*,TYPE_2__*,TYPE_1__ const*) ;
 int FUNC_4 (size_t) ;

int FUNC_5(AVFrame *VAR_7, int VAR_8)
{
    const AVPixFmtDescriptor *VAR_9;
    size_t VAR_10[4];
    int VAR_11;

    if (!(VAR_7->width > 0 && VAR_7->height > 0))
        return FUNC_0(VAR_4);

    if (VAR_7->crop_left >= VAR_6 - VAR_7->crop_right ||
        VAR_7->crop_top >= VAR_6 - VAR_7->crop_bottom ||
        (VAR_7->crop_left + VAR_7->crop_right) >= VAR_7->width ||
        (VAR_7->crop_top + VAR_7->crop_bottom) >= VAR_7->height)
        return FUNC_0(VAR_5);

    VAR_9 = FUNC_2(VAR_7->format);
    if (!VAR_9)
        return VAR_0;





    if (VAR_9->flags & (VAR_2 | VAR_3)) {
        VAR_7->width -= VAR_7->crop_right;
        VAR_7->height -= VAR_7->crop_bottom;
        VAR_7->crop_right = 0;
        VAR_7->crop_bottom = 0;
        return 0;
    }


    FUNC_3(VAR_10, VAR_7, VAR_9);


    if (!(VAR_8 & VAR_1)) {
        int VAR_12 = VAR_7->crop_left ? FUNC_4(VAR_7->crop_left) : VAR_6;
        int VAR_13 = VAR_6;

        for (VAR_11 = 0; VAR_7->data[VAR_11]; VAR_11++) {
            int VAR_14 = VAR_10[VAR_11] ? FUNC_4(VAR_10[VAR_11]) : VAR_6;
            VAR_13 = FUNC_1(VAR_14, VAR_13);
        }



        if (VAR_12 < VAR_13)
            return VAR_0;

        if (VAR_13 < 5) {
            VAR_7->crop_left &= ~((1 << (5 + VAR_12 - VAR_13)) - 1);
            FUNC_3(VAR_10, VAR_7, VAR_9);
        }
    }

    for (VAR_11 = 0; VAR_7->data[VAR_11]; VAR_11++)
        VAR_7->data[VAR_11] += VAR_10[VAR_11];

    VAR_7->width -= (VAR_7->crop_left + VAR_7->crop_right);
    VAR_7->height -= (VAR_7->crop_top + VAR_7->crop_bottom);
    VAR_7->crop_left = 0;
    VAR_7->crop_right = 0;
    VAR_7->crop_top = 0;
    VAR_7->crop_bottom = 0;

    return 0;
}
