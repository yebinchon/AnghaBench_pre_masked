
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct key {int dummy; } ;
struct TYPE_10__ {int i_mode; } ;
struct TYPE_9__ {int anon_access; int caller_access; } ;
struct TYPE_6__ {int vnode; int vid; } ;
struct afs_vnode {TYPE_5__ vfs_inode; TYPE_4__ status; int flags; int permits; TYPE_3__* volume; TYPE_1__ fid; } ;
struct afs_permits {int count; struct afs_permit* permits; } ;
struct afs_permit {int access_mask; struct key* key; } ;
typedef int afs_access_t ;
struct TYPE_8__ {TYPE_2__* cell; } ;
struct TYPE_7__ {struct key* anonymous_key; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct afs_vnode*) ;
 int FUNC_2 (struct afs_vnode*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int ,int ,int ) ;
 int FUNC_6 (char*,int) ;
 struct afs_vnode* FUNC_7 (struct afs_vnode*,struct key*) ;
 int FUNC_8 (struct afs_vnode*,struct afs_vnode*,struct key*) ;
 int FUNC_9 (TYPE_5__*) ;
 int FUNC_10 (struct key*) ;
 struct afs_permits* FUNC_11 (int ) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 (int ,int *) ;

__attribute__((used)) static int FUNC_15(struct afs_vnode *VAR_1, struct key *VAR_2,
       afs_access_t *VAR_3)
{
 struct afs_permits *VAR_4;
 struct afs_permit *VAR_5;
 struct afs_vnode *VAR_6;
 bool VAR_7;
 int VAR_8, VAR_9;

 FUNC_5("{%x:%u},%x",
        VAR_1->fid.vid, VAR_1->fid.vnode, FUNC_10(VAR_2));

 VAR_6 = FUNC_7(VAR_1, VAR_2);
 if (FUNC_1(VAR_6)) {
  *VAR_3 = 0;
  FUNC_6(" = %ld", FUNC_2(VAR_6));
  return FUNC_2(VAR_6);
 }

 FUNC_0(FUNC_3(VAR_6->vfs_inode.i_mode));


 if (VAR_2 == VAR_6->volume->cell->anonymous_key) {
  FUNC_4("anon");
  *VAR_3 = VAR_6->status.anon_access;
  VAR_7 = 1;
 } else {
  VAR_7 = 0;
  FUNC_12();
  VAR_4 = FUNC_11(VAR_6->permits);
  if (VAR_4) {
   VAR_5 = VAR_4->permits;
   for (VAR_8 = VAR_4->count; VAR_8 > 0; VAR_8--) {
    if (VAR_5->key == VAR_2) {
     FUNC_4("found in cache");
     *VAR_3 = VAR_5->access_mask;
     VAR_7 = 1;
     break;
    }
    VAR_5++;
   }
  }
  FUNC_13();
 }

 if (!VAR_7) {


  FUNC_4("no valid permit");

  FUNC_14(VAR_0, &VAR_1->flags);
  VAR_9 = FUNC_8(VAR_1, VAR_6, VAR_2);
  if (VAR_9 < 0) {
   FUNC_9(&VAR_6->vfs_inode);
   *VAR_3 = 0;
   FUNC_6(" = %d", VAR_9);
   return VAR_9;
  }
  *VAR_3 = VAR_1->status.caller_access;
 }

 FUNC_9(&VAR_6->vfs_inode);
 FUNC_6(" = 0 [access %x]", *VAR_3);
 return 0;
}
