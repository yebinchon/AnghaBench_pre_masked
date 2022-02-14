
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int auxiliary_info_size; int auxiliary_info_alloc_size; int auxiliary_info; } ;
typedef TYPE_1__ MOVMuxCencContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 size_t FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (int *,size_t) ;

__attribute__((used)) static int FUNC_3(MOVMuxCencContext* VAR_1, int VAR_2)
{
    size_t VAR_3;

    if (VAR_1->auxiliary_info_size + VAR_2 > VAR_1->auxiliary_info_alloc_size) {
        VAR_3 = FUNC_1(VAR_1->auxiliary_info_size + VAR_2, VAR_1->auxiliary_info_alloc_size * 2);
        if (FUNC_2(&VAR_1->auxiliary_info, VAR_3)) {
            return FUNC_0(VAR_0);
        }

        VAR_1->auxiliary_info_alloc_size = VAR_3;
    }

    return 0;
}
