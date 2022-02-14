
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; int max_mtu; int link_type; } ;
struct qeth_card {TYPE_1__ info; } ;
__attribute__((used)) static inline int FUNC_0(struct qeth_card *VAR_0)
{
 switch (VAR_0->info.type) {
 case 130:
  return 1500;
 case 134:
  return VAR_0->info.max_mtu;
 case 133:
  switch (VAR_0->info.link_type) {
  case 129:
  case 128:
   return 2000;
  default:
   return 1492;
  }
 case 132:
 case 131:
  return 1492;
 default:
  return 1500;
 }
}
