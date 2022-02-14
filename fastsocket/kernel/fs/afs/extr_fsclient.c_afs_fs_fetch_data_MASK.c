
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct key {int dummy; } ;
struct afs_wait_mode {int dummy; } ;
struct TYPE_2__ {size_t vid; size_t vnode; size_t unique; } ;
struct afs_vnode {TYPE_1__ fid; } ;
struct afs_server {int addr; } ;
struct afs_call {size_t operation_ID; int * request; int port; int service_id; struct page* reply3; int * reply2; struct afs_vnode* reply; struct key* key; } ;
typedef size_t off_t ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int VAR_5 ;
 struct afs_call* FUNC_1 (int *,int,int) ;
 int FUNC_2 (struct afs_server*,struct key*,struct afs_vnode*,size_t,size_t,struct page*,struct afs_wait_mode const*) ;
 int FUNC_3 (int *,struct afs_call*,int ,struct afs_wait_mode const*) ;
 int FUNC_4 (size_t) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (size_t) ;

int FUNC_7(struct afs_server *VAR_6,
        struct key *VAR_7,
        struct afs_vnode *VAR_8,
        off_t VAR_9, size_t VAR_10,
        struct page *VAR_11,
        const struct afs_wait_mode *VAR_12)
{
 struct afs_call *VAR_13;
 __be32 *VAR_14;

 if (FUNC_6(VAR_9) || FUNC_6(VAR_9 + VAR_10))
  return FUNC_2(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10,
        VAR_11, VAR_12);

 FUNC_0("");

 VAR_13 = FUNC_1(&VAR_5, 24, (21 + 3 + 6) * 4);
 if (!VAR_13)
  return -VAR_1;

 VAR_13->key = VAR_7;
 VAR_13->reply = VAR_8;
 VAR_13->reply2 = ((void*)0);
 VAR_13->reply3 = VAR_11;
 VAR_13->service_id = VAR_3;
 VAR_13->port = FUNC_5(VAR_0);
 VAR_13->operation_ID = VAR_2;


 VAR_14 = VAR_13->request;
 VAR_14[0] = FUNC_4(VAR_2);
 VAR_14[1] = FUNC_4(VAR_8->fid.vid);
 VAR_14[2] = FUNC_4(VAR_8->fid.vnode);
 VAR_14[3] = FUNC_4(VAR_8->fid.unique);
 VAR_14[4] = FUNC_4(VAR_9);
 VAR_14[5] = FUNC_4(VAR_10);

 return FUNC_3(&VAR_6->addr, VAR_13, VAR_4, VAR_12);
}
