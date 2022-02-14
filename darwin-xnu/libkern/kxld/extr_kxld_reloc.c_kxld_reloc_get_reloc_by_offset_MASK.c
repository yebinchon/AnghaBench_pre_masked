
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int kxld_addr_t ;
typedef scalar_t__ kern_return_t ;
typedef int KXLDReloc ;
typedef int KXLDArray ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (int const*,int ) ;
 scalar_t__ FUNC_1 (int const*,int ,int *) ;

KXLDReloc *
FUNC_2(const KXLDArray *VAR_1, kxld_addr_t VAR_2)
{
    kern_return_t VAR_3 = VAR_0;
    KXLDReloc *VAR_4 = ((void*)0);
    u_int VAR_5 = 0;

    VAR_3 = FUNC_1(VAR_1, VAR_2, &VAR_5);
    if (VAR_3) goto finish;

    VAR_4 = FUNC_0(VAR_1, VAR_5);

finish:
    return VAR_4;
}
