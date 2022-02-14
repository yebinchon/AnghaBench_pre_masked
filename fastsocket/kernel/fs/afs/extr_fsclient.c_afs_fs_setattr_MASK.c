
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct key {int dummy; } ;
struct iattr {int ia_valid; } ;
struct afs_wait_mode {int dummy; } ;
struct TYPE_2__ {int unique; int vnode; int vid; } ;
struct afs_vnode {TYPE_1__ fid; } ;
struct afs_server {int addr; } ;
struct afs_call {int * request; int operation_ID; int port; int service_id; struct afs_vnode* reply; struct key* key; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int ,int ,int ) ;
 int VAR_6 ;
 struct afs_call* FUNC_1 (int *,int,int) ;
 int FUNC_2 (struct afs_server*,struct key*,struct afs_vnode*,struct iattr*,struct afs_wait_mode const*) ;
 int FUNC_3 (int *,struct afs_call*,int ,struct afs_wait_mode const*) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct key*) ;
 int FUNC_7 (int **,struct iattr*) ;

int FUNC_8(struct afs_server *VAR_7, struct key *VAR_8,
     struct afs_vnode *VAR_9, struct iattr *VAR_10,
     const struct afs_wait_mode *VAR_11)
{
 struct afs_call *VAR_12;
 __be32 *VAR_13;

 if (VAR_10->ia_valid & VAR_1)
  return FUNC_2(VAR_7, VAR_8, VAR_9, VAR_10,
        VAR_11);

 FUNC_0(",%x,{%x:%u},,",
        FUNC_6(VAR_8), VAR_9->fid.vid, VAR_9->fid.vnode);

 VAR_12 = FUNC_1(&VAR_6,
       (4 + 6) * 4,
       (21 + 6) * 4);
 if (!VAR_12)
  return -VAR_2;

 VAR_12->key = VAR_8;
 VAR_12->reply = VAR_9;
 VAR_12->service_id = VAR_4;
 VAR_12->port = FUNC_5(VAR_0);
 VAR_12->operation_ID = VAR_3;


 VAR_13 = VAR_12->request;
 *VAR_13++ = FUNC_4(VAR_3);
 *VAR_13++ = FUNC_4(VAR_9->fid.vid);
 *VAR_13++ = FUNC_4(VAR_9->fid.vnode);
 *VAR_13++ = FUNC_4(VAR_9->fid.unique);

 FUNC_7(&VAR_13, VAR_10);

 return FUNC_3(&VAR_7->addr, VAR_12, VAR_5, VAR_11);
}
