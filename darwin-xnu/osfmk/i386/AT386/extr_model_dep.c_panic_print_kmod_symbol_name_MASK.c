
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ vm_address_t ;
typedef scalar_t__ u_int ;
typedef int kernel_mach_header_t ;
struct TYPE_4__ {scalar_t__ numSummaries; TYPE_1__* summaries; } ;
struct TYPE_3__ {scalar_t__ address; scalar_t__ size; int name; } ;
typedef TYPE_1__ OSKextLoadedKextSummary ;


 TYPE_2__* VAR_0 ;
 scalar_t__ FUNC_0 (int *,scalar_t__,int ) ;
 int FUNC_1 (char*,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(vm_address_t VAR_1)
{
    u_int VAR_2;

    if (VAR_0 == ((void*)0))
     return;
    for (VAR_2 = 0; VAR_2 < VAR_0->numSummaries; ++VAR_2) {
        OSKextLoadedKextSummary *VAR_3 = VAR_0->summaries + VAR_2;

        if ((VAR_1 >= VAR_3->address) &&
            (VAR_1 < (VAR_3->address + VAR_3->size)))
        {
            kernel_mach_header_t *VAR_4 = (kernel_mach_header_t *)(uintptr_t) VAR_3->address;
            if (FUNC_0(VAR_4, VAR_1, VAR_3->name) == 0) {
                FUNC_1("%s + %llu", VAR_3->name, (unsigned long)VAR_1 - VAR_3->address);
            }
            break;
        }
    }
}
