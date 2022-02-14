
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* ifvlan_ref ;
struct TYPE_3__ {scalar_t__ ifv_signature; scalar_t__ ifv_retain_count; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void
FUNC_2(ifvlan_ref VAR_1)
{
    if (VAR_1->ifv_signature != VAR_0) {
 FUNC_1("ifvlan_retain: bad signature\n");
    }
    if (VAR_1->ifv_retain_count == 0) {
 FUNC_1("ifvlan_retain: retain count is 0\n");
    }
    FUNC_0(&VAR_1->ifv_retain_count);
}
