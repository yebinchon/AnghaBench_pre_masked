
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int weight; } ;
struct blkio_policy_node {TYPE_1__ val; } ;
struct blkio_cgroup {unsigned int weight; } ;
typedef int dev_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct blkio_policy_node* FUNC_0 (struct blkio_cgroup*,int ,int ,int ) ;

unsigned int FUNC_1(struct blkio_cgroup *VAR_2,
         dev_t VAR_3)
{
 struct blkio_policy_node *VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_3, VAR_0,
    VAR_1);
 if (VAR_4)
  return VAR_4->val.weight;
 else
  return VAR_2->weight;
}
