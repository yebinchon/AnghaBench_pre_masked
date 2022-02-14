
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long long kxld_addr_t ;
struct TYPE_3__ {int function_align; } ;
typedef TYPE_1__ KXLDRelocator ;



__attribute__((used)) static kxld_addr_t
FUNC_0(const KXLDRelocator *VAR_0, kxld_addr_t VAR_1)
{
    if (VAR_0->function_align) {
        VAR_1 &= ~((1ULL << VAR_0->function_align) - 1);
    }

    return VAR_1;
}
