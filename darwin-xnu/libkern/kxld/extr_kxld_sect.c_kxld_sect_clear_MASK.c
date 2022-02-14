
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_4__ {int relocs; scalar_t__ reserved2; scalar_t__ reserved1; scalar_t__ align; scalar_t__ flags; scalar_t__ size; scalar_t__ link_addr; scalar_t__ base_addr; int * data; int segname; int sectname; scalar_t__ allocated; } ;
typedef TYPE_1__ KXLDSect ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;

void
FUNC_4(KXLDSect *VAR_1)
{
    FUNC_1(VAR_1);

    if (VAR_1->allocated) {
        FUNC_3(VAR_1->data, (u_long) VAR_1->size);
        VAR_1->allocated = VAR_0;
    }

    FUNC_0(VAR_1->sectname, sizeof(VAR_1->sectname));
    FUNC_0(VAR_1->segname, sizeof(VAR_1->segname));
    VAR_1->data = ((void*)0);
    VAR_1->base_addr = 0;
    VAR_1->link_addr = 0;
    VAR_1->size = 0;
    VAR_1->flags = 0;
    VAR_1->align = 0;
    VAR_1->reserved1 = 0;
    VAR_1->reserved2 = 0;
    FUNC_2(&VAR_1->relocs);
}
