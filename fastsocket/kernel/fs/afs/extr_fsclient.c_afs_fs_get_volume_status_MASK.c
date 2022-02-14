
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct key {int dummy; } ;
struct afs_wait_mode {int dummy; } ;
struct afs_volume_status {int dummy; } ;
struct TYPE_2__ {int vid; } ;
struct afs_vnode {TYPE_1__ fid; } ;
struct afs_server {int addr; } ;
struct afs_call {int * request; int port; int service_id; void* reply3; struct afs_volume_status* reply2; struct afs_vnode* reply; struct key* key; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*) ;
 int VAR_7 ;
 struct afs_call* FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *,struct afs_call*,int ,struct afs_wait_mode const*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (void*) ;
 void* FUNC_6 (int ,int ) ;

int FUNC_7(struct afs_server *VAR_8,
        struct key *VAR_9,
        struct afs_vnode *VAR_10,
        struct afs_volume_status *VAR_11,
        const struct afs_wait_mode *VAR_12)
{
 struct afs_call *VAR_13;
 __be32 *VAR_14;
 void *VAR_15;

 FUNC_0("");

 VAR_15 = FUNC_6(VAR_0, VAR_5);
 if (!VAR_15)
  return -VAR_2;

 VAR_13 = FUNC_1(&VAR_7, 2 * 4, 12 * 4);
 if (!VAR_13) {
  FUNC_5(VAR_15);
  return -VAR_2;
 }

 VAR_13->key = VAR_9;
 VAR_13->reply = VAR_10;
 VAR_13->reply2 = VAR_11;
 VAR_13->reply3 = VAR_15;
 VAR_13->service_id = VAR_4;
 VAR_13->port = FUNC_4(VAR_1);


 VAR_14 = VAR_13->request;
 VAR_14[0] = FUNC_3(VAR_3);
 VAR_14[1] = FUNC_3(VAR_10->fid.vid);

 return FUNC_2(&VAR_8->addr, VAR_13, VAR_6, VAR_12);
}
