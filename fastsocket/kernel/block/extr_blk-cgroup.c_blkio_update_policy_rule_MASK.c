
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int iops; int bps; int weight; } ;
struct blkio_policy_node {int plid; TYPE_1__ val; int fileid; } ;
 int FUNC_0 () ;

__attribute__((used)) static void FUNC_1(struct blkio_policy_node *VAR_0,
     struct blkio_policy_node *VAR_1)
{
 switch(VAR_0->plid) {
 case 133:
  VAR_0->val.weight = VAR_1->val.weight;
  break;
 case 132:
  switch(VAR_1->fileid) {
  case 131:
  case 129:
   VAR_0->val.bps = VAR_1->val.bps;
   break;
  case 130:
  case 128:
   VAR_0->val.iops = VAR_1->val.iops;
  }
  break;
 default:
  FUNC_0();
 }
}
