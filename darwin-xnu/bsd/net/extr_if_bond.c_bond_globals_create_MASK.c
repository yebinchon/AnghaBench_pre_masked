
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int * lacp_system_ref ;
typedef int lacp_system_priority ;
typedef TYPE_1__* bond_globals_ref ;
struct TYPE_4__ {int system_priority; int system; int ifbond_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int,int ,int) ;

__attribute__((used)) static bond_globals_ref
FUNC_2(lacp_system_priority VAR_3,
      lacp_system_ref VAR_4)
{
    bond_globals_ref VAR_5;

    VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_0, VAR_1 | VAR_2);
    if (VAR_5 == ((void*)0)) {
 return (((void*)0));
    }
    FUNC_0(&VAR_5->ifbond_list);
    VAR_5->system = *VAR_4;
    VAR_5->system_priority = VAR_3;
    return (VAR_5);
}
