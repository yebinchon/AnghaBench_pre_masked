
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
typedef int kern_return_t ;
struct TYPE_3__ {int symtab; } ;
typedef int const KXLDSym ;
typedef TYPE_1__ KXLDObject ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int const*,int *) ;
 int const* FUNC_1 (int ,int ) ;
 int FUNC_2 (int,int ,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static KXLDSym *
FUNC_4(const KXLDObject *VAR_2, const KXLDSym *VAR_3)
{
    KXLDSym *VAR_4 = ((void*)0);
    kern_return_t VAR_5 = VAR_0;
    u_int VAR_6 = 0;

    VAR_5 = FUNC_0(VAR_2->symtab, VAR_3, &VAR_6);
    FUNC_3(VAR_5, VAR_1);

    VAR_4 = FUNC_1(VAR_2->symtab, VAR_6);
    FUNC_2(VAR_4 == VAR_3, VAR_1, VAR_4=((void*)0));

finish:
    return VAR_4;
}
