
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* ifvlan_ref ;
struct TYPE_3__ {int ifv_flags; } ;


 int VAR_0 ;

__attribute__((used)) static __inline__ int
FUNC_0(ifvlan_ref VAR_1)
{
    return ((VAR_1->ifv_flags & VAR_0) != 0);
}
