
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct log_c {int flush_lock; int clear_list; } ;
struct flush_entry {int list; int region; int type; } ;
struct dm_dirty_log {struct log_c* context; } ;
typedef int region_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int *) ;
 struct flush_entry* FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct dm_dirty_log *VAR_3, region_t VAR_4)
{
 unsigned long VAR_5;
 struct log_c *VAR_6 = VAR_3->context;
 struct flush_entry *VAR_7;







 VAR_7 = FUNC_2(VAR_2, VAR_1);
 if (!VAR_7) {
  FUNC_0("Failed to allocate memory to clear region.");
  return;
 }

 FUNC_3(&VAR_6->flush_lock, VAR_5);
 VAR_7->type = VAR_0;
 VAR_7->region = VAR_4;
 FUNC_1(&VAR_7->list, &VAR_6->clear_list);
 FUNC_4(&VAR_6->flush_lock, VAR_5);

 return;
}
