
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
typedef int kern_return_t ;
struct TYPE_3__ {int syms; } ;
typedef TYPE_1__ KXLDSymtab ;
typedef int KXLDSym ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int const*,int *) ;
 int FUNC_1 (int ,int ) ;

kern_return_t
FUNC_2(const KXLDSymtab *VAR_3, const KXLDSym *VAR_4,
    u_int *VAR_5)
{
    kern_return_t VAR_6 = VAR_0;

    VAR_6 = FUNC_0(&VAR_3->syms, VAR_4, VAR_5);
    FUNC_1(VAR_6, VAR_2);

    VAR_6 = VAR_1;

finish:
    return VAR_6;
}
