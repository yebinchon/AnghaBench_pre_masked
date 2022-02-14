
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int dn_change; int dn_access; int dn_update; } ;
typedef TYPE_1__ devnode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void
FUNC_0(devnode_t *VAR_3, uint32_t VAR_4)
{
 if (VAR_4 & VAR_1) {
  VAR_3->dn_change = 1;
 }
 if (VAR_4 & VAR_0) {
  VAR_3->dn_access = 1;
 }
 if (VAR_4 & VAR_2) {
  VAR_3->dn_update = 1;
 }
}
