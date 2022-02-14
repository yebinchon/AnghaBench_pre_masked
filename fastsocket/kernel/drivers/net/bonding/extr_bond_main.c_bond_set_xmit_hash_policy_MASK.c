
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int xmit_policy; } ;
struct bonding {int xmit_hash_policy; TYPE_1__ params; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct bonding *VAR_3)
{
 switch (VAR_3->params.xmit_policy) {
 case 129:
  VAR_3->xmit_hash_policy = VAR_1;
  break;
 case 128:
  VAR_3->xmit_hash_policy = VAR_2;
  break;
 case 130:
 default:
  VAR_3->xmit_hash_policy = VAR_0;
  break;
 }
}
