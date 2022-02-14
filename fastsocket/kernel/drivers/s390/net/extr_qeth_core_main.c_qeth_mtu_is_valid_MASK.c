
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; int max_mtu; } ;
struct qeth_card {TYPE_1__ info; } ;
__attribute__((used)) static inline int FUNC_0(struct qeth_card *VAR_0, int VAR_1)
{
 switch (VAR_0->info.type) {
 case 132:
 case 131:
 case 129:
  return ((VAR_1 >= 576) && (VAR_1 <= 61440));
 case 133:
  return ((VAR_1 >= 576) &&
   (VAR_1 <= VAR_0->info.max_mtu + 4096 - 32));
 case 130:
 case 128:
 default:
  return 1;
 }
}
