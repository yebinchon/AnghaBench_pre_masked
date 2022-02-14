
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct log_c {int luid; int uuid; scalar_t__ in_sync_hint; } ;
struct dm_dirty_log {struct log_c* context; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int *,int ,int *,int *) ;

__attribute__((used)) static int FUNC_1(struct dm_dirty_log *VAR_1)
{
 int VAR_2;
 struct log_c *VAR_3 = VAR_1->context;

 VAR_3->in_sync_hint = 0;
 VAR_2 = FUNC_0(VAR_3->uuid, VAR_3->luid, VAR_0,
     ((void*)0), 0,
     ((void*)0), ((void*)0));

 return VAR_2;
}
