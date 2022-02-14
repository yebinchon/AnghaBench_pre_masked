
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* vlan_globals_ref ;
struct TYPE_5__ {scalar_t__ verbose; int parent_list; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_2 (int,int ,int ) ;
 TYPE_1__* VAR_3 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static int
FUNC_6(void)
{
    vlan_globals_ref VAR_4;

    FUNC_3();

    if (VAR_3 != ((void*)0)) {
 return (0);
    }
    VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_1, VAR_2);
    if (VAR_4 != ((void*)0)) {
 FUNC_0(&VAR_4->parent_list);
 VAR_4->verbose = 0;
    }
    FUNC_4();
    if (VAR_3 != ((void*)0)) {
 FUNC_5();
 if (VAR_4 != ((void*)0)) {
     FUNC_1(VAR_4, VAR_1);
 }
 return (0);
    }
    VAR_3 = VAR_4;
    FUNC_5();
    if (VAR_4 == ((void*)0)) {
 return (VAR_0);
    }
    return (0);
}
