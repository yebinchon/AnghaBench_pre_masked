
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kxld_sym {int dummy; } ;
typedef int kern_return_t ;
typedef int KXLDSym ;
typedef int KXLDObject ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int *,struct kxld_sym const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ) ;

kern_return_t
FUNC_3(KXLDObject *VAR_3, const struct kxld_sym *VAR_4)
{
    kern_return_t VAR_5 = VAR_0;
    KXLDSym *VAR_6 = ((void*)0);

    VAR_6 = FUNC_0(VAR_3, VAR_4);
    FUNC_2(VAR_6, VAR_2, VAR_5=VAR_0);

    (void) FUNC_1(VAR_6);
    VAR_5 = VAR_1;
finish:
    return VAR_5;
}
