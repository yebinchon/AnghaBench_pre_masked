
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {unsigned int weight; int bps; int iops; } ;
struct blkio_policy_node {int plid; int fileid; TYPE_1__ val; } ;
struct blkio_group {int dummy; } ;
struct blkio_cgroup {unsigned int weight; } ;
 int FUNC_0 () ;
 int FUNC_1 (struct blkio_group*,int,int ) ;
 int FUNC_2 (struct blkio_group*,unsigned int,int ) ;
 int FUNC_3 (struct blkio_group*,unsigned int) ;

__attribute__((used)) static void FUNC_4(struct blkio_cgroup *VAR_0,
  struct blkio_group *VAR_1, struct blkio_policy_node *VAR_2)
{
 unsigned int VAR_3, VAR_4;
 u64 VAR_5;

 switch(VAR_2->plid) {
 case 133:
  VAR_3 = VAR_2->val.weight ? VAR_2->val.weight :
    VAR_0->weight;
  FUNC_3(VAR_1, VAR_3);
  break;
 case 132:
  switch(VAR_2->fileid) {
  case 131:
  case 129:
   VAR_5 = VAR_2->val.bps ? VAR_2->val.bps : (-1);
   FUNC_1(VAR_1, VAR_5, VAR_2->fileid);
   break;
  case 130:
  case 128:
   VAR_4 = VAR_2->val.iops ? VAR_2->val.iops : (-1);
   FUNC_2(VAR_1, VAR_4, VAR_2->fileid);
   break;
  }
  break;
 default:
  FUNC_0();
 }
}
