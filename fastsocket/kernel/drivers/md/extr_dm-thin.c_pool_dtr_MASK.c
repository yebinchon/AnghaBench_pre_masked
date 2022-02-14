
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pool_c {int data_dev; int metadata_dev; int pool; } ;
struct dm_target {struct pool_c* private; } ;
struct TYPE_2__ {int mutex; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct dm_target*,int ) ;
 TYPE_1__ VAR_0 ;
 int FUNC_2 (struct pool_c*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,struct dm_target*) ;

__attribute__((used)) static void FUNC_6(struct dm_target *VAR_1)
{
 struct pool_c *VAR_2 = VAR_1->private;

 FUNC_3(&VAR_0.mutex);

 FUNC_5(VAR_2->pool, VAR_1);
 FUNC_0(VAR_2->pool);
 FUNC_1(VAR_1, VAR_2->metadata_dev);
 FUNC_1(VAR_1, VAR_2->data_dev);
 FUNC_2(VAR_2);

 FUNC_4(&VAR_0.mutex);
}
