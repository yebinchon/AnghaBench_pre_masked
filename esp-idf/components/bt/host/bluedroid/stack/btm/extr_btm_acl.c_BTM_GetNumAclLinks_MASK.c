
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint16_t ;
typedef size_t UINT16 ;
struct TYPE_4__ {TYPE_1__* acl_db; } ;
struct TYPE_3__ {scalar_t__ in_use; } ;


 size_t VAR_0 ;
 TYPE_2__ VAR_1 ;

UINT16 FUNC_0 (void)
{
    uint16_t VAR_2 = 0;

    for (uint16_t VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3) {
        if (VAR_1.acl_db[VAR_3].in_use) {
            ++VAR_2;
        }
    }

    return VAR_2;
}
