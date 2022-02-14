
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int int16_t ;
struct TYPE_3__ {int mb_stride; int mb_height; int mb_width; void* ref_index_pool; void* motion_val_pool; void* mb_type_pool; void* qscale_table_pool; } ;
typedef TYPE_1__ H264Context ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (int const,int ) ;
 int FUNC_2 (void**) ;

__attribute__((used)) static int FUNC_3(H264Context *VAR_2)
{
    const int VAR_3 = VAR_2->mb_stride * (VAR_2->mb_height + 1) + 1;
    const int VAR_4 = VAR_2->mb_stride * VAR_2->mb_height;
    const int VAR_5 = VAR_2->mb_width * 4 + 1;
    const int VAR_6 = VAR_5 * VAR_2->mb_height * 4;

    VAR_2->qscale_table_pool = FUNC_1(VAR_3 + VAR_2->mb_stride,
                                               VAR_1);
    VAR_2->mb_type_pool = FUNC_1((VAR_3 + VAR_2->mb_stride) *
                                               sizeof(uint32_t), VAR_1);
    VAR_2->motion_val_pool = FUNC_1(2 * (VAR_6 + 4) *
                                               sizeof(int16_t), VAR_1);
    VAR_2->ref_index_pool = FUNC_1(4 * VAR_4, VAR_1);

    if (!VAR_2->qscale_table_pool || !VAR_2->mb_type_pool || !VAR_2->motion_val_pool ||
        !VAR_2->ref_index_pool) {
        FUNC_2(&VAR_2->qscale_table_pool);
        FUNC_2(&VAR_2->mb_type_pool);
        FUNC_2(&VAR_2->motion_val_pool);
        FUNC_2(&VAR_2->ref_index_pool);
        return FUNC_0(VAR_0);
    }

    return 0;
}
