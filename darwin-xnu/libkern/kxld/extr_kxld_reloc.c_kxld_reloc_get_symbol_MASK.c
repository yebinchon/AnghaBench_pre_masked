
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_char ;
typedef int kxld_addr_t ;
struct TYPE_8__ {int target_type; int address; int target; } ;
struct TYPE_7__ {int symtab; } ;
typedef int KXLDSym ;
typedef TYPE_1__ KXLDRelocator ;
typedef TYPE_2__ KXLDReloc ;




 int FUNC_0 (TYPE_2__ const*) ;
 int FUNC_1 (TYPE_1__ const*,int const*,int ) ;
 int * FUNC_2 (int ,int ) ;
 int * FUNC_3 (int ,int ) ;

KXLDSym *
FUNC_4(const KXLDRelocator *VAR_0, const KXLDReloc *VAR_1,
    const u_char *VAR_2)
{
    KXLDSym *VAR_3 = ((void*)0);
    kxld_addr_t VAR_4 = 0;

    FUNC_0(VAR_1);

    switch (VAR_1->target_type) {
    case 128:
        VAR_3 = FUNC_3(VAR_0->symtab, VAR_1->target);
        break;
    case 129:
       if (VAR_2) {
            VAR_4 = FUNC_1(VAR_0, VAR_2,
                                                       VAR_1->address);
            VAR_3 = FUNC_2(VAR_0->symtab, VAR_4);
       }
        break;
    default:
        VAR_3 = ((void*)0);
        break;
    }

    return VAR_3;
}
