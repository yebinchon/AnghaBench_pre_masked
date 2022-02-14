
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* ifbond_ref ;
typedef TYPE_2__* bondport_ref ;
struct TYPE_7__ {int po_ifp; } ;
struct TYPE_6__ {int ifb_port_list; } ;


 TYPE_2__* FUNC_0 (int *,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3(ifbond_ref VAR_1)
{
    bondport_ref VAR_2;

    FUNC_1();





    while ((VAR_2 = FUNC_0(&VAR_1->ifb_port_list, VAR_0)) != ((void*)0)) {
 FUNC_2(VAR_1, VAR_2->po_ifp);
    }
    return;
}
