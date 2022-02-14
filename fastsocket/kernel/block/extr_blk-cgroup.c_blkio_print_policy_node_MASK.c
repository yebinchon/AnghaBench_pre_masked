
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct TYPE_2__ {int iops; int bps; int weight; } ;
struct blkio_policy_node {int plid; TYPE_1__ val; int dev; int fileid; } ;




 int VAR_0 ;




 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct seq_file*,char*,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct seq_file *VAR_1, struct blkio_policy_node *VAR_2)
{
 switch(VAR_2->plid) {
  case 133:
   if (VAR_2->fileid == VAR_0)
    FUNC_3(VAR_1, "%u:%u\t%u\n", FUNC_1(VAR_2->dev),
     FUNC_2(VAR_2->dev), VAR_2->val.weight);
   break;
  case 132:
   switch(VAR_2->fileid) {
   case 131:
   case 129:
    FUNC_3(VAR_1, "%u:%u\t%llu\n", FUNC_1(VAR_2->dev),
     FUNC_2(VAR_2->dev), VAR_2->val.bps);
    break;
   case 130:
   case 128:
    FUNC_3(VAR_1, "%u:%u\t%u\n", FUNC_1(VAR_2->dev),
     FUNC_2(VAR_2->dev), VAR_2->val.iops);
    break;
   }
   break;
  default:
   FUNC_0();
 }
}
