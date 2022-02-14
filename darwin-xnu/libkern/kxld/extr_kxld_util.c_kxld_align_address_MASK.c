
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int kxld_addr_t ;
typedef int address ;



kxld_addr_t
FUNC_0(kxld_addr_t VAR_0, u_int VAR_1)
{
    kxld_addr_t VAR_2 = (1 << VAR_1);
    kxld_addr_t VAR_3 = 0;

    if (!VAR_1) return VAR_0;

    VAR_3 = (VAR_0) & (VAR_2 - 1);
    if (VAR_3) {
        VAR_0 += (VAR_2 - VAR_3);
    }

    return VAR_0;
}
