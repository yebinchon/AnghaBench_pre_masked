
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int iops; int bps; int weight; } ;
struct blkio_policy_node {int plid; TYPE_1__ val; int fileid; } ;
 int FUNC_0 () ;

__attribute__((used)) static bool FUNC_1(struct blkio_policy_node *VAR_0)
{
 switch(VAR_0->plid) {
 case 133:
  if (VAR_0->val.weight == 0)
   return 1;
  break;
 case 132:
  switch(VAR_0->fileid) {
  case 131:
  case 129:
   if (VAR_0->val.bps == 0)
    return 1;
   break;
  case 130:
  case 128:
   if (VAR_0->val.iops == 0)
    return 1;
  }
  break;
 default:
  FUNC_0();
 }

 return 0;
}
