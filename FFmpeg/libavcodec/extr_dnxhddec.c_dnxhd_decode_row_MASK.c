
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_9__ {TYPE_2__* priv_data; } ;
struct TYPE_8__ {int bit_depth; int mb_width; scalar_t__ buf_size; scalar_t__ buf; TYPE_1__* rows; scalar_t__* mb_scan_index; } ;
struct TYPE_7__ {int* last_dc; int errors; int gb; } ;
typedef TYPE_1__ RowContext ;
typedef TYPE_2__ DNXHDContext ;
typedef TYPE_3__ AVCodecContext ;


 int FUNC_0 (TYPE_2__ const*,TYPE_1__*,void*,int,int) ;
 int FUNC_1 (int *,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_2(AVCodecContext *VAR_0, void *VAR_1,
                            int VAR_2, int VAR_3)
{
    const DNXHDContext *VAR_4 = VAR_0->priv_data;
    uint32_t VAR_5 = VAR_4->mb_scan_index[VAR_2];
    RowContext *VAR_6 = VAR_4->rows + VAR_3;
    int VAR_7, VAR_8;

    VAR_6->last_dc[0] =
    VAR_6->last_dc[1] =
    VAR_6->last_dc[2] = 1 << (VAR_4->bit_depth + 2);
    VAR_8 = FUNC_1(&VAR_6->gb, VAR_4->buf + VAR_5, VAR_4->buf_size - VAR_5);
    if (VAR_8 < 0) {
        VAR_6->errors++;
        return VAR_8;
    }
    for (VAR_7 = 0; VAR_7 < VAR_4->mb_width; VAR_7++) {

        int VAR_9 = FUNC_0(VAR_4, VAR_6, VAR_1, VAR_7, VAR_2);
        if (VAR_9 < 0) {
            VAR_6->errors++;
            return VAR_9;
        }

    }

    return 0;
}
