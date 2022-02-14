
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; } ;
struct qeth_card {TYPE_1__ info; } ;




__attribute__((used)) static inline int FUNC_0(struct qeth_card *VAR_0)
{
 switch (VAR_0->info.type) {
 case 128:
  return 2;
 default:
  return 0;
 }
}
