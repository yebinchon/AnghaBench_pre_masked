
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int kxld_addr_t ;
typedef int kern_return_t ;
struct TYPE_3__ {int symtab; } ;
typedef int KXLDSym ;
typedef TYPE_1__ KXLDObject ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ,int **) ;
 int FUNC_1 (int ,int ) ;

kern_return_t
FUNC_2(KXLDObject *VAR_3, char *VAR_4, kxld_addr_t VAR_5,
    const KXLDSym **VAR_6)
{
    kern_return_t VAR_7 = VAR_0;
    KXLDSym *VAR_8 = ((void*)0);

    VAR_7 = FUNC_0(VAR_3->symtab, VAR_4, VAR_5, &VAR_8);
    FUNC_1(VAR_7, VAR_2);

    *VAR_6 = VAR_8;
    VAR_7 = VAR_1;
finish:
    return VAR_7;
}
