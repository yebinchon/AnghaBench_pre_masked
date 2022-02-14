
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int kxld_addr_t ;
typedef int kern_return_t ;
typedef int KXLDSym ;
typedef int KXLDObject ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int *,int const*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int ,int ) ;

kern_return_t
FUNC_4(KXLDObject *VAR_3,
    const KXLDSym *VAR_4, kxld_addr_t VAR_5)
{
    kern_return_t VAR_6 = VAR_0;
    KXLDSym *VAR_7 = ((void*)0);

    VAR_7 = FUNC_0(VAR_3, VAR_4);
    FUNC_2(VAR_7, VAR_2, VAR_6=VAR_0);

    VAR_6 = FUNC_1(VAR_7, VAR_5);
    FUNC_3(VAR_6, VAR_2);

    VAR_6 = VAR_1;
finish:
    return VAR_6;
}
