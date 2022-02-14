
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int d_sb; } ;
struct autofs_sb_info {int lookup_lock; } ;
struct autofs_info {int expiring; int active; } ;


 int FUNC_0 (char*,struct dentry*) ;
 struct autofs_info* FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct autofs_info*) ;
 struct autofs_sb_info* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct dentry *VAR_0)
{
 struct autofs_info *VAR_1;

 FUNC_0("releasing %p", VAR_0);

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1) {
  struct autofs_sb_info *VAR_2 = FUNC_3(VAR_0->d_sb);
  if (VAR_2) {
   FUNC_6(&VAR_2->lookup_lock);
   if (!FUNC_5(&VAR_1->active))
    FUNC_4(&VAR_1->active);
   if (!FUNC_5(&VAR_1->expiring))
    FUNC_4(&VAR_1->expiring);
   FUNC_7(&VAR_2->lookup_lock);
  }
  FUNC_2(VAR_1);
 }
}
