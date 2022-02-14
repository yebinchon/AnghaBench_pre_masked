
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int ;
typedef int kxld_addr_t ;
struct TYPE_4__ {int nitems; } ;
struct TYPE_5__ {TYPE_1__ buckets; } ;
typedef TYPE_2__ KXLDDict ;


 int FUNC_0 (void const*) ;

u_int
FUNC_1(const KXLDDict *VAR_0, const void *VAR_1)
{
    kxld_addr_t VAR_2 = *(const kxld_addr_t *) VAR_1;

    FUNC_0(VAR_1);

    return (u_int) (VAR_2 % VAR_0->buckets.nitems);
}
