
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int avctx; } ;
struct TYPE_5__ {int* non_zero_count_cache; } ;
typedef TYPE_1__ H264SliceContext ;
typedef TYPE_2__ H264Context ;


 int FUNC_0 (int ,char*,int const,int const,int,int,int) ;
 int* VAR_0 ;

__attribute__((used)) static inline int FUNC_1(const H264Context *VAR_1, H264SliceContext *VAR_2, int VAR_3)
{
    const int VAR_4= VAR_0[VAR_3];
    const int VAR_5 = VAR_2->non_zero_count_cache[VAR_4 - 1];
    const int VAR_6 = VAR_2->non_zero_count_cache[VAR_4 - 8];
    int VAR_7= VAR_5 + VAR_6;

    if(VAR_7<64) VAR_7= (VAR_7+1)>>1;

    FUNC_0(VAR_1->avctx, "pred_nnz L%X T%X n%d s%d P%X\n", VAR_5, VAR_6, VAR_3, VAR_0[VAR_3], VAR_7&31);

    return VAR_7&31;
}
