
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {scalar_t__ subsample_count; int auxiliary_info_size; int auxiliary_info_subsample_start; int use_subsamples; int aes_ctr; } ;
typedef TYPE_1__ MOVMuxCencContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *,int) ;
 int * FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(MOVMuxCencContext* VAR_1)
{
    int VAR_2;


    VAR_2 = FUNC_0(VAR_1, FUNC_1(VAR_1->aes_ctr), VAR_0);
    if (VAR_2) {
        return VAR_2;
    }

    if (!VAR_1->use_subsamples) {
        return 0;
    }


    VAR_1->auxiliary_info_subsample_start = VAR_1->auxiliary_info_size;
    VAR_1->subsample_count = 0;
    VAR_2 = FUNC_0(VAR_1, (uint8_t*)&VAR_1->subsample_count, sizeof(VAR_1->subsample_count));
    if (VAR_2) {
        return VAR_2;
    }

    return 0;
}
