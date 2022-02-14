
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int auxiliary_info_entries; int auxiliary_info_sizes_alloc_size; int subsample_count; scalar_t__ auxiliary_info_subsample_start; scalar_t__ auxiliary_info; scalar_t__ auxiliary_info_size; scalar_t__* auxiliary_info_sizes; int use_subsamples; int aes_ctr; } ;
typedef TYPE_1__ MOVMuxCencContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (scalar_t__**,size_t) ;

__attribute__((used)) static int FUNC_4(MOVMuxCencContext* VAR_2)
{
    size_t VAR_3;

    FUNC_2(VAR_2->aes_ctr);

    if (!VAR_2->use_subsamples) {
        VAR_2->auxiliary_info_entries++;
        return 0;
    }


    if (VAR_2->auxiliary_info_entries >= VAR_2->auxiliary_info_sizes_alloc_size) {
        VAR_3 = VAR_2->auxiliary_info_entries * 2 + 1;
        if (FUNC_3(&VAR_2->auxiliary_info_sizes, VAR_3)) {
            return FUNC_0(VAR_1);
        }

        VAR_2->auxiliary_info_sizes_alloc_size = VAR_3;
    }
    VAR_2->auxiliary_info_sizes[VAR_2->auxiliary_info_entries] =
        VAR_0 + VAR_2->auxiliary_info_size - VAR_2->auxiliary_info_subsample_start;
    VAR_2->auxiliary_info_entries++;


    FUNC_1(VAR_2->auxiliary_info + VAR_2->auxiliary_info_subsample_start, VAR_2->subsample_count);

    return 0;
}
