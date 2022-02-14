
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int compat1; int compat2; int fmt; int x; } ;
union orb {TYPE_1__ eadm; } ;


 int FUNC_0 (union orb*,int ,int) ;

__attribute__((used)) static void FUNC_1(union orb *VAR_0)
{
 FUNC_0(VAR_0, 0, sizeof(union orb));
 VAR_0->eadm.compat1 = 1;
 VAR_0->eadm.compat2 = 1;
 VAR_0->eadm.fmt = 1;
 VAR_0->eadm.x = 1;
}
