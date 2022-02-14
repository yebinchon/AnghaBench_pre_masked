
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * next_desc_ptr; scalar_t__ owned_by_idmac; } ;
typedef TYPE_1__ sdmmc_desc_t ;
struct TYPE_5__ {size_t next_desc; } ;


 size_t VAR_0 ;
 TYPE_3__ VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static size_t FUNC_0(void)
{
    const size_t VAR_3 = VAR_1.next_desc;
    size_t VAR_4 = 0;




    for (size_t VAR_5 = 0; VAR_5 < VAR_0; ++VAR_5) {
        sdmmc_desc_t* VAR_6 = &VAR_2[(VAR_3 + VAR_5) % VAR_0];
        if (VAR_6->owned_by_idmac) {
            break;
        }
        ++VAR_4;
        if (VAR_6->next_desc_ptr == ((void*)0)) {

            break;
        }
    }
    return VAR_4;
}
