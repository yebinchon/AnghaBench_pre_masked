
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {scalar_t__ dn_links; struct TYPE_3__* dn_nextsibling; } ;
typedef TYPE_1__ devnode_t ;


 int VAR_0 ;

__attribute__((used)) static uint32_t
FUNC_0(devnode_t *VAR_1)
{
 uint32_t VAR_2 = 0;
 devnode_t *VAR_3;





 VAR_2 = VAR_0;
 VAR_2 += VAR_1->dn_links;
 for (VAR_3 = VAR_1->dn_nextsibling; VAR_3 != VAR_1; VAR_3 = VAR_3->dn_nextsibling) {
  VAR_2 += VAR_3->dn_links;
 }

 return VAR_2;

}
