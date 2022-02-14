
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_long ;
typedef int u_char ;
typedef int kxld_addr_t ;
struct TYPE_4__ {int is_32_bit; } ;
typedef TYPE_1__ KXLDRelocator ;


 int FUNC_0 (int ,int ,int ,int ,TYPE_1__ const*,int const*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

kxld_addr_t
FUNC_1(const KXLDRelocator *VAR_2,
    const u_char *VAR_3, u_long VAR_4)
{
    kxld_addr_t VAR_5;

    FUNC_0(VAR_2->is_32_bit, VAR_5,
        VAR_0, VAR_1,
        VAR_2, VAR_3, VAR_4);

    return VAR_5;
}
