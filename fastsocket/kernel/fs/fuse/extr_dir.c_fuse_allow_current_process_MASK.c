
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuse_conn {int flags; scalar_t__ user_id; scalar_t__ group_id; } ;
struct cred {scalar_t__ euid; scalar_t__ suid; scalar_t__ uid; scalar_t__ egid; scalar_t__ sgid; scalar_t__ gid; } ;


 int VAR_0 ;
 struct cred* FUNC_0 () ;

int FUNC_1(struct fuse_conn *VAR_1)
{
 const struct cred *VAR_2;

 if (VAR_1->flags & VAR_0)
  return 1;

 VAR_2 = FUNC_0();
 if (VAR_2->euid == VAR_1->user_id &&
     VAR_2->suid == VAR_1->user_id &&
     VAR_2->uid == VAR_1->user_id &&
     VAR_2->egid == VAR_1->group_id &&
     VAR_2->sgid == VAR_1->group_id &&
     VAR_2->gid == VAR_1->group_id)
  return 1;

 return 0;
}
