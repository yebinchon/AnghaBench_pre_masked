
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_15__ {int allow; int deny; } ;
struct TYPE_14__ {int allow; } ;
struct TYPE_16__ {int allow; int deny; } ;
struct TYPE_9__ {int allow; int deny; } ;
struct posix_acl_state {TYPE_7__ other; TYPE_6__ mask; TYPE_5__* groups; TYPE_8__ group; TYPE_3__* users; TYPE_1__ owner; scalar_t__ empty; } ;
struct posix_acl_entry {void* e_id; int e_perm; int e_tag; } ;
struct posix_acl {struct posix_acl_entry* a_entries; } ;
struct TYPE_13__ {int n; TYPE_4__* aces; } ;
struct TYPE_12__ {TYPE_8__ perms; void* uid; } ;
struct TYPE_11__ {int n; TYPE_2__* aces; } ;
struct TYPE_10__ {TYPE_8__ perms; void* uid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct posix_acl* FUNC_0 (int) ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 int FUNC_1 (struct posix_acl_state*,TYPE_8__*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int *,unsigned int) ;
 struct posix_acl* FUNC_4 (int,int ) ;
 int FUNC_5 (struct posix_acl*) ;

__attribute__((used)) static struct posix_acl *
FUNC_6(struct posix_acl_state *VAR_10, unsigned int VAR_11)
{
 struct posix_acl_entry *VAR_12;
 struct posix_acl *VAR_13;
 int VAR_14;
 int VAR_15, VAR_16 = 0;






 if (VAR_10->empty && (VAR_11 & VAR_9)) {
  VAR_13 = FUNC_4(0, VAR_8);
  return VAR_13 ? VAR_13 : FUNC_0(-VAR_7);
 }





 VAR_14 = 4 + VAR_10->users->n + VAR_10->groups->n;
 VAR_13 = FUNC_4(VAR_14, VAR_8);
 if (!VAR_13)
  return FUNC_0(-VAR_7);

 VAR_12 = VAR_13->a_entries;
 VAR_12->e_tag = VAR_6;
 VAR_16 = FUNC_2(VAR_10->owner.deny, 1);
 if (VAR_16)
  goto out_err;
 FUNC_3(VAR_10->owner.allow, &VAR_12->e_perm, VAR_11);
 VAR_12->e_id = VAR_4;

 for (VAR_15=0; VAR_15 < VAR_10->users->n; VAR_15++) {
  VAR_12++;
  VAR_12->e_tag = VAR_5;
  VAR_16 = FUNC_2(VAR_10->users->aces[VAR_15].perms.deny, 0);
  if (VAR_16)
   goto out_err;
  FUNC_3(VAR_10->users->aces[VAR_15].perms.allow,
     &VAR_12->e_perm, VAR_11);
  VAR_12->e_id = VAR_10->users->aces[VAR_15].uid;
  FUNC_1(VAR_10, &VAR_10->users->aces[VAR_15].perms);
 }

 VAR_12++;
 VAR_12->e_tag = VAR_1;
 VAR_16 = FUNC_2(VAR_10->group.deny, 0);
 if (VAR_16)
  goto out_err;
 FUNC_3(VAR_10->group.allow, &VAR_12->e_perm, VAR_11);
 VAR_12->e_id = VAR_4;
 FUNC_1(VAR_10, &VAR_10->group);

 for (VAR_15=0; VAR_15 < VAR_10->groups->n; VAR_15++) {
  VAR_12++;
  VAR_12->e_tag = VAR_0;
  VAR_16 = FUNC_2(VAR_10->groups->aces[VAR_15].perms.deny, 0);
  if (VAR_16)
   goto out_err;
  FUNC_3(VAR_10->groups->aces[VAR_15].perms.allow,
     &VAR_12->e_perm, VAR_11);
  VAR_12->e_id = VAR_10->groups->aces[VAR_15].uid;
  FUNC_1(VAR_10, &VAR_10->groups->aces[VAR_15].perms);
 }

 VAR_12++;
 VAR_12->e_tag = VAR_2;
 FUNC_3(VAR_10->mask.allow, &VAR_12->e_perm, VAR_11);
 VAR_12->e_id = VAR_4;

 VAR_12++;
 VAR_12->e_tag = VAR_3;
 VAR_16 = FUNC_2(VAR_10->other.deny, 0);
 if (VAR_16)
  goto out_err;
 FUNC_3(VAR_10->other.allow, &VAR_12->e_perm, VAR_11);
 VAR_12->e_id = VAR_4;

 return VAR_13;
out_err:
 FUNC_5(VAR_13);
 return FUNC_0(VAR_16);
}
