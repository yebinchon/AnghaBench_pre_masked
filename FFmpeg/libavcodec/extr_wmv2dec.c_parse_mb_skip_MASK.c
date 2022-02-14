
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {int mb_height; int mb_width; int mb_stride; int gb; TYPE_1__* current_picture_ptr; } ;
struct TYPE_6__ {int skip_type; TYPE_3__ s; } ;
typedef TYPE_2__ Wmv2Context ;
struct TYPE_5__ {int* mb_type; } ;
typedef TYPE_3__ MpegEncContext ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(Wmv2Context *VAR_4)
{
    int VAR_5, VAR_6;
    int VAR_7 = 0;
    MpegEncContext *const VAR_8 = &VAR_4->s;
    uint32_t *const VAR_9 = VAR_8->current_picture_ptr->mb_type;

    VAR_4->skip_type = FUNC_1(&VAR_8->gb, 2);
    switch (VAR_4->skip_type) {
    case 129:
        for (VAR_6 = 0; VAR_6 < VAR_8->mb_height; VAR_6++)
            for (VAR_5 = 0; VAR_5 < VAR_8->mb_width; VAR_5++)
                VAR_9[VAR_6 * VAR_8->mb_stride + VAR_5] =
                    VAR_1 | VAR_2;
        break;
    case 130:
        if (FUNC_3(&VAR_8->gb) < VAR_8->mb_height * VAR_8->mb_width)
            return VAR_0;
        for (VAR_6 = 0; VAR_6 < VAR_8->mb_height; VAR_6++)
            for (VAR_5 = 0; VAR_5 < VAR_8->mb_width; VAR_5++)
                VAR_9[VAR_6 * VAR_8->mb_stride + VAR_5] =
                    (FUNC_2(&VAR_8->gb) ? VAR_3 : 0) | VAR_1 | VAR_2;
        break;
    case 128:
        for (VAR_6 = 0; VAR_6 < VAR_8->mb_height; VAR_6++) {
            if (FUNC_3(&VAR_8->gb) < 1)
                return VAR_0;
            if (FUNC_2(&VAR_8->gb)) {
                for (VAR_5 = 0; VAR_5 < VAR_8->mb_width; VAR_5++)
                    VAR_9[VAR_6 * VAR_8->mb_stride + VAR_5] =
                        VAR_3 | VAR_1 | VAR_2;
            } else {
                for (VAR_5 = 0; VAR_5 < VAR_8->mb_width; VAR_5++)
                    VAR_9[VAR_6 * VAR_8->mb_stride + VAR_5] =
                        (FUNC_2(&VAR_8->gb) ? VAR_3 : 0) | VAR_1 | VAR_2;
            }
        }
        break;
    case 131:
        for (VAR_5 = 0; VAR_5 < VAR_8->mb_width; VAR_5++) {
            if (FUNC_3(&VAR_8->gb) < 1)
                return VAR_0;
            if (FUNC_2(&VAR_8->gb)) {
                for (VAR_6 = 0; VAR_6 < VAR_8->mb_height; VAR_6++)
                    VAR_9[VAR_6 * VAR_8->mb_stride + VAR_5] =
                        VAR_3 | VAR_1 | VAR_2;
            } else {
                for (VAR_6 = 0; VAR_6 < VAR_8->mb_height; VAR_6++)
                    VAR_9[VAR_6 * VAR_8->mb_stride + VAR_5] =
                        (FUNC_2(&VAR_8->gb) ? VAR_3 : 0) | VAR_1 | VAR_2;
            }
        }
        break;
    }

    for (VAR_6 = 0; VAR_6 < VAR_8->mb_height; VAR_6++)
        for (VAR_5 = 0; VAR_5 < VAR_8->mb_width; VAR_5++)
            VAR_7 += !FUNC_0(VAR_9[VAR_6 * VAR_8->mb_stride + VAR_5]);

    if (VAR_7 > FUNC_3(&VAR_8->gb))
        return VAR_0;

    return 0;
}
