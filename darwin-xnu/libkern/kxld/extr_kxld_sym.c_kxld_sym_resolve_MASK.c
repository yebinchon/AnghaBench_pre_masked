
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int kxld_addr_t ;
typedef int kern_return_t ;
struct TYPE_6__ {int type; void* is_indirect; void* is_undefined; void* is_resolved; void* is_absolute; void* is_external; int sectnum; int link_addr; } ;
typedef TYPE_1__ KXLDSym ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int,int ,int ) ;

kern_return_t
FUNC_4(KXLDSym *VAR_8, kxld_addr_t VAR_9)
{
    kern_return_t VAR_10 = VAR_1;

    FUNC_0(VAR_8);

    FUNC_3(FUNC_2(VAR_8) || FUNC_1(VAR_8),
        VAR_7, VAR_10=VAR_1);



    VAR_8->link_addr = VAR_9;
    VAR_8->type = VAR_4 | VAR_5;
    VAR_8->sectnum = VAR_3;



    VAR_8->is_external = VAR_6;
    VAR_8->is_absolute = VAR_6;
    VAR_8->is_resolved = VAR_6;



    VAR_8->is_undefined = VAR_0;
    VAR_8->is_indirect = VAR_0;

    VAR_10 = VAR_2;

finish:

    return VAR_10;
}
