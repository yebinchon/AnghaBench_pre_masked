
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlan_parent {int vlp_flags; } ;


 int VAR_0 ;

__attribute__((used)) static __inline__ int
FUNC_0(struct vlan_parent * VAR_1)
{
    return ((VAR_1->vlp_flags & VAR_0) != 0);
}
