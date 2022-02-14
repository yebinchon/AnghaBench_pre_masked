
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int chunk_size; int data_devs; } ;
struct raid_set {TYPE_1__ set; } ;
struct queue_limits {int dummy; } ;
struct dm_target {struct raid_set* private; } ;


 int FUNC_0 (struct queue_limits*,int) ;
 int FUNC_1 (struct queue_limits*,int) ;

__attribute__((used)) static void FUNC_2(struct dm_target *VAR_0, struct queue_limits *VAR_1)
{
 struct raid_set *VAR_2 = VAR_0->private;

 FUNC_0(VAR_1, VAR_2->set.chunk_size);
 FUNC_1(VAR_1, VAR_2->set.chunk_size * VAR_2->set.data_devs);
}
