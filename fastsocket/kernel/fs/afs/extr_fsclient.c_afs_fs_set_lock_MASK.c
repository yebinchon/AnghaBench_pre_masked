
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct key {int dummy; } ;
struct afs_wait_mode {int dummy; } ;
struct TYPE_2__ {int unique; int vnode; int vid; } ;
struct afs_vnode {TYPE_1__ fid; } ;
struct afs_server {int addr; } ;
struct afs_call {int * request; int port; int service_id; struct afs_vnode* reply; struct key* key; } ;
typedef int afs_lock_type_t ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int VAR_5 ;
 struct afs_call* FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *,struct afs_call*,int ,struct afs_wait_mode const*) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

int FUNC_5(struct afs_server *VAR_6,
      struct key *VAR_7,
      struct afs_vnode *VAR_8,
      afs_lock_type_t VAR_9,
      const struct afs_wait_mode *VAR_10)
{
 struct afs_call *VAR_11;
 __be32 *VAR_12;

 FUNC_0("");

 VAR_11 = FUNC_1(&VAR_5, 5 * 4, 6 * 4);
 if (!VAR_11)
  return -VAR_1;

 VAR_11->key = VAR_7;
 VAR_11->reply = VAR_8;
 VAR_11->service_id = VAR_3;
 VAR_11->port = FUNC_4(VAR_0);


 VAR_12 = VAR_11->request;
 *VAR_12++ = FUNC_3(VAR_2);
 *VAR_12++ = FUNC_3(VAR_8->fid.vid);
 *VAR_12++ = FUNC_3(VAR_8->fid.vnode);
 *VAR_12++ = FUNC_3(VAR_8->fid.unique);
 *VAR_12++ = FUNC_3(VAR_9);

 return FUNC_2(&VAR_6->addr, VAR_11, VAR_4, VAR_10);
}
