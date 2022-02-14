
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_4__ {int auxiliary_info_size; int subsample_count; int * auxiliary_info; int use_subsamples; } ;
typedef TYPE_1__ MOVMuxCencContext ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_3(MOVMuxCencContext* VAR_0,
    uint16_t VAR_1, uint32_t VAR_2)
{
    uint8_t* VAR_3;
    int VAR_4;

    if (!VAR_0->use_subsamples) {
        return 0;
    }

    VAR_4 = FUNC_2(VAR_0, 6);
    if (VAR_4) {
        return VAR_4;
    }

    VAR_3 = VAR_0->auxiliary_info + VAR_0->auxiliary_info_size;

    FUNC_0(VAR_3, VAR_1);
    VAR_3 += sizeof(uint16_t);

    FUNC_1(VAR_3, VAR_2);

    VAR_0->auxiliary_info_size += 6;
    VAR_0->subsample_count++;

    return 0;
}
