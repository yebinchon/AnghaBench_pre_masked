
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dm_region_hash {TYPE_2__* log; int hash_lock; } ;
struct dm_region {int state; } ;
typedef int region_t ;
struct TYPE_4__ {TYPE_1__* type; } ;
struct TYPE_3__ {int (* in_sync ) (TYPE_2__*,int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct dm_region* FUNC_0 (struct dm_region_hash*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;

int FUNC_4(struct dm_region_hash *VAR_2, region_t VAR_3, int VAR_4)
{
 int VAR_5;
 struct dm_region *VAR_6;

 FUNC_1(&VAR_2->hash_lock);
 VAR_6 = FUNC_0(VAR_2, VAR_3);
 FUNC_2(&VAR_2->hash_lock);

 if (VAR_6)
  return VAR_6->state;





 VAR_5 = VAR_2->log->type->in_sync(VAR_2->log, VAR_3, VAR_4);





 return VAR_5 == 1 ? VAR_0 : VAR_1;
}
