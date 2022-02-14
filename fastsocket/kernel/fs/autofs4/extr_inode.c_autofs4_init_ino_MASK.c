
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct autofs_sb_info {int dummy; } ;
struct autofs_info {int (* free ) (struct autofs_info*) ;int u; struct autofs_sb_info* sbi; int last_used; int mode; scalar_t__ gid; scalar_t__ uid; int count; int expiring; scalar_t__ active_count; int active; scalar_t__ size; int * dentry; scalar_t__ flags; } ;
typedef int mode_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct autofs_info*) ;
 int VAR_1 ;
 struct autofs_info* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (struct autofs_info*) ;

struct autofs_info *FUNC_7(struct autofs_info *VAR_2,
         struct autofs_sb_info *VAR_3, mode_t VAR_4)
{
 int VAR_5 = 1;

 if (VAR_2 == ((void*)0)) {
  VAR_5 = 0;
  VAR_2 = FUNC_4(sizeof(*VAR_2), VAR_0);
 }

 if (VAR_2 == ((void*)0))
  return ((void*)0);

 if (!VAR_5) {
  VAR_2->flags = 0;
  VAR_2->dentry = ((void*)0);
  VAR_2->size = 0;
  FUNC_0(&VAR_2->active);
  VAR_2->active_count = 0;
  FUNC_0(&VAR_2->expiring);
  FUNC_2(&VAR_2->count, 0);
 }

 VAR_2->uid = 0;
 VAR_2->gid = 0;
 VAR_2->mode = VAR_4;
 VAR_2->last_used = VAR_1;

 VAR_2->sbi = VAR_3;

 if (VAR_5 && VAR_2->free)
  (VAR_2->free)(VAR_2);

 FUNC_5(&VAR_2->u, 0, sizeof(VAR_2->u));

 VAR_2->free = ((void*)0);

 if (FUNC_1(VAR_4))
  VAR_2->free = FUNC_3;

 return VAR_2;
}
