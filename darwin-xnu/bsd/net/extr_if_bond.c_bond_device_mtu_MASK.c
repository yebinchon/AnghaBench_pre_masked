
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ifnet {int dummy; } ;
typedef TYPE_1__* ifbond_ref ;
struct TYPE_3__ {int ifb_altmtu; } ;


 scalar_t__ FUNC_0 (struct ifnet*) ;

__attribute__((used)) static __inline__ int
FUNC_1(struct ifnet * VAR_0, ifbond_ref VAR_1)
{
    return (((int)FUNC_0(VAR_0) > VAR_1->ifb_altmtu)
     ? (int)FUNC_0(VAR_0) : VAR_1->ifb_altmtu);
}
