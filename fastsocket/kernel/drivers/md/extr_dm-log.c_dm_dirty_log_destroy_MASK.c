
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_dirty_log {TYPE_1__* type; } ;
struct TYPE_2__ {int (* dtr ) (struct dm_dirty_log*) ;} ;


 int FUNC_0 (struct dm_dirty_log*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct dm_dirty_log*) ;

void FUNC_3(struct dm_dirty_log *VAR_0)
{
 VAR_0->type->dtr(VAR_0);
 FUNC_1(VAR_0->type);
 FUNC_0(VAR_0);
}
