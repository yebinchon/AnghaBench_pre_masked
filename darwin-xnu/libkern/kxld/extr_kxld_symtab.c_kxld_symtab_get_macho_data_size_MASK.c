
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
typedef int u_int ;
struct nlist_64 {int dummy; } ;
struct nlist {int dummy; } ;
typedef scalar_t__ boolean_t ;
struct TYPE_3__ {int name; } ;
typedef int KXLDSymtabIterator ;
typedef int KXLDSymtab ;
typedef TYPE_1__ KXLDSym ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int *,int const*,int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;

u_long
FUNC_4(const KXLDSymtab *VAR_2, boolean_t VAR_3)
{
    KXLDSymtabIterator VAR_4;
    KXLDSym *VAR_5 = ((void*)0);
    u_long VAR_6 = 1;
    u_int VAR_7 = 0;

    FUNC_0(VAR_2);

    FUNC_2(&VAR_4, VAR_2,
        VAR_1, VAR_0);

    while ((VAR_5 = FUNC_1(&VAR_4))) {
        VAR_6 += FUNC_3(VAR_5->name) + 1;
        ++VAR_7;
    }

    if (VAR_3) {
        VAR_6 += VAR_7 * sizeof(struct nlist);
    } else {
        VAR_6 += VAR_7 * sizeof(struct nlist_64);
    }

    VAR_6 = (VAR_6 + 7) & ~7;

    return VAR_6;
}
