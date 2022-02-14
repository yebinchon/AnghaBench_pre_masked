
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* vlan_parent_ref ;
struct TYPE_3__ {scalar_t__ vlp_signature; scalar_t__ vlp_retain_count; } ;


 int FUNC_0 (scalar_t__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void
FUNC_2(vlan_parent_ref VAR_1)
{
    if (VAR_1->vlp_signature != VAR_0) {
 FUNC_1("vlan_parent_retain: signature is bad\n");
    }
    if (VAR_1->vlp_retain_count == 0) {
 FUNC_1("vlan_parent_retain: retain count is 0\n");
    }
    FUNC_0(&VAR_1->vlp_retain_count);
}
