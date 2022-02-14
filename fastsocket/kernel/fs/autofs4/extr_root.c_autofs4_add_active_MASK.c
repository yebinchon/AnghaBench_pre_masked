
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int d_sb; } ;
struct autofs_sb_info {int lookup_lock; int active_list; } ;
struct autofs_info {int active_count; int active; } ;


 struct autofs_info* FUNC_0 (struct dentry*) ;
 struct autofs_sb_info* FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct dentry *VAR_0)
{
 struct autofs_sb_info *VAR_1 = FUNC_1(VAR_0->d_sb);
 struct autofs_info *VAR_2 = FUNC_0(VAR_0);
 if (VAR_2) {
  FUNC_4(&VAR_1->lookup_lock);
  if (!VAR_2->active_count) {
   if (FUNC_3(&VAR_2->active))
    FUNC_2(&VAR_2->active, &VAR_1->active_list);
  }
  VAR_2->active_count++;
  FUNC_5(&VAR_1->lookup_lock);
 }
 return;
}
