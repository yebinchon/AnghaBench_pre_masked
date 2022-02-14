
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ u_int ;
typedef int kxld_addr_t ;
typedef int kern_return_t ;
struct TYPE_12__ {scalar_t__ nitems; } ;
struct TYPE_11__ {int name; } ;
struct TYPE_10__ {int name_index; TYPE_7__ syms; } ;
typedef TYPE_1__ KXLDSymtab ;
typedef TYPE_2__ KXLDSym ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (TYPE_7__*,scalar_t__) ;
 int FUNC_1 (TYPE_7__*,scalar_t__) ;
 int FUNC_2 (int *,int ,TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,char*,int ) ;
 int FUNC_4 (int ,int ) ;

kern_return_t
FUNC_5(KXLDSymtab *VAR_3, char *VAR_4, kxld_addr_t VAR_5,
    KXLDSym **VAR_6)
{
    kern_return_t VAR_7 = VAR_0;
    KXLDSym *VAR_8 = ((void*)0);
    u_int VAR_9 = VAR_3->syms.nitems;

    VAR_7 = FUNC_1(&VAR_3->syms, VAR_9 + 1);
    FUNC_4(VAR_7, VAR_2);

    VAR_8 = FUNC_0(&VAR_3->syms, VAR_9);
    FUNC_3(VAR_8, VAR_4, VAR_5);

    VAR_7 = FUNC_2(&VAR_3->name_index, VAR_8->name, VAR_8);
    FUNC_4(VAR_7, VAR_2);

    VAR_7 = VAR_1;
    *VAR_6 = VAR_8;

finish:
    return VAR_7;
}
