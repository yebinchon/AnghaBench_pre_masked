
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int int32_t ;
struct TYPE_3__ {scalar_t__ m68k_address; int native_offset; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static int32_t FUNC_1(uint32_t VAR_2)
{



    const int VAR_3 = (VAR_1 + (FUNC_0(VAR_0)-1)) % FUNC_0(VAR_0);
    int VAR_4 = VAR_3;
    do {
        if (VAR_0[VAR_4].m68k_address == VAR_2) {
            return VAR_0[VAR_4].native_offset;
        }
        VAR_4 = (VAR_4 + (FUNC_0(VAR_0)-1)) % FUNC_0(VAR_0);
    } while (VAR_4 != VAR_3);
    return -1;
}
