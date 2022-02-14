
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {scalar_t__ auxiliary_info_size; scalar_t__ auxiliary_info; } ;
typedef TYPE_1__ MOVMuxCencContext ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (scalar_t__,int const*,int) ;

__attribute__((used)) static int FUNC_2(MOVMuxCencContext* VAR_0,
                                         const uint8_t *VAR_1, int VAR_2)
{
    int VAR_3;

    VAR_3 = FUNC_0(VAR_0, VAR_2);
    if (VAR_3) {
        return VAR_3;
    }
    FUNC_1(VAR_0->auxiliary_info + VAR_0->auxiliary_info_size, VAR_1, VAR_2);
    VAR_0->auxiliary_info_size += VAR_2;

    return 0;
}
