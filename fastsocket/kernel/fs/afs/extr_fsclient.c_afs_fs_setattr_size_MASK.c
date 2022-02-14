
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct key {int dummy; } ;
struct iattr {int ia_valid; int ia_size; } ;
struct afs_wait_mode {int dummy; } ;
struct TYPE_4__ {int vid; int vnode; int unique; } ;
struct TYPE_3__ {scalar_t__ data_version; } ;
struct afs_vnode {TYPE_2__ fid; TYPE_1__ status; } ;
struct afs_server {int addr; } ;
struct afs_call {int operation_ID; int * request; scalar_t__ store_version; int port; int service_id; struct afs_vnode* reply; struct key* key; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*,int ,int,int) ;
 int VAR_6 ;
 struct afs_call* FUNC_2 (int *,int,int) ;
 int FUNC_3 (struct afs_server*,struct key*,struct afs_vnode*,struct iattr*,struct afs_wait_mode const*) ;
 int FUNC_4 (int *,struct afs_call*,int ,struct afs_wait_mode const*) ;
 void* FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct key*) ;
 int FUNC_8 (int **,struct iattr*) ;

__attribute__((used)) static int FUNC_9(struct afs_server *VAR_7, struct key *VAR_8,
          struct afs_vnode *VAR_9, struct iattr *VAR_10,
          const struct afs_wait_mode *VAR_11)
{
 struct afs_call *VAR_12;
 __be32 *VAR_13;

 FUNC_1(",%x,{%x:%u},,",
        FUNC_7(VAR_8), VAR_9->fid.vid, VAR_9->fid.vnode);

 FUNC_0(VAR_10->ia_valid & VAR_1);
 if (VAR_10->ia_size >> 32)
  return FUNC_3(VAR_7, VAR_8, VAR_9, VAR_10,
          VAR_11);

 VAR_12 = FUNC_2(&VAR_6,
       (4 + 6 + 3) * 4,
       (21 + 6) * 4);
 if (!VAR_12)
  return -VAR_2;

 VAR_12->key = VAR_8;
 VAR_12->reply = VAR_9;
 VAR_12->service_id = VAR_4;
 VAR_12->port = FUNC_6(VAR_0);
 VAR_12->store_version = VAR_9->status.data_version + 1;
 VAR_12->operation_ID = VAR_3;


 VAR_13 = VAR_12->request;
 *VAR_13++ = FUNC_5(VAR_3);
 *VAR_13++ = FUNC_5(VAR_9->fid.vid);
 *VAR_13++ = FUNC_5(VAR_9->fid.vnode);
 *VAR_13++ = FUNC_5(VAR_9->fid.unique);

 FUNC_8(&VAR_13, VAR_10);

 *VAR_13++ = 0;
 *VAR_13++ = 0;
 *VAR_13++ = FUNC_5(VAR_10->ia_size);

 return FUNC_4(&VAR_7->addr, VAR_12, VAR_5, VAR_11);
}
