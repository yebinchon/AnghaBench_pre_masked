
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mb_cache_entry {int e_lru_list; scalar_t__ e_queued; scalar_t__ e_used; struct mb_cache* e_cache; } ;
struct TYPE_2__ {scalar_t__ (* free ) (struct mb_cache_entry*,int ) ;} ;
struct mb_cache {int c_entry_count; int c_entry_cache; TYPE_1__ c_op; } ;
typedef int gfp_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct mb_cache_entry*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct mb_cache_entry*,int ) ;

__attribute__((used)) static void
FUNC_7(struct mb_cache_entry *VAR_2, gfp_t VAR_3)
{
 struct mb_cache *VAR_4 = VAR_2->e_cache;

 FUNC_3(!(VAR_2->e_used || VAR_2->e_queued));
 if (VAR_4->c_op.free && VAR_4->c_op.free(VAR_2, VAR_3)) {


  FUNC_4(&VAR_1);
  FUNC_2(&VAR_2->e_lru_list, &VAR_0);
  FUNC_5(&VAR_1);
 } else {
  FUNC_1(VAR_4->c_entry_cache, VAR_2);
  FUNC_0(&VAR_4->c_entry_count);
 }
}
