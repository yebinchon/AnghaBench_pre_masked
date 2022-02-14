
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct key {int dummy; } ;
struct iattr {int ia_valid; int ia_size; } ;
struct afs_wait_mode {int dummy; } ;
struct TYPE_4__ {int vid; int vnode; int unique; } ;
struct TYPE_3__ {scalar_t__ data_version; } ;
struct afs_vnode {TYPE_2__ fid; TYPE_1__ status; } ;
struct afs_server {int addr; } ;
struct afs_call {int * request; int operation_ID; scalar_t__ store_version; int port; int service_id; struct afs_vnode* reply; struct key* key; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*,int ,int,int) ;
 int VAR_7 ;
 struct afs_call* FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *,struct afs_call*,int ,struct afs_wait_mode const*) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct key*) ;
 int FUNC_7 (int **,struct iattr*) ;

__attribute__((used)) static int FUNC_8(struct afs_server *VAR_8, struct key *VAR_9,
     struct afs_vnode *VAR_10, struct iattr *VAR_11,
     const struct afs_wait_mode *VAR_12)
{
 struct afs_call *VAR_13;
 __be32 *VAR_14;

 FUNC_1(",%x,{%x:%u},,",
        FUNC_6(VAR_9), VAR_10->fid.vid, VAR_10->fid.vnode);

 FUNC_0(VAR_11->ia_valid & VAR_1);

 VAR_13 = FUNC_2(&VAR_7,
       (4 + 6 + 3 * 2) * 4,
       (21 + 6) * 4);
 if (!VAR_13)
  return -VAR_2;

 VAR_13->key = VAR_9;
 VAR_13->reply = VAR_10;
 VAR_13->service_id = VAR_5;
 VAR_13->port = FUNC_5(VAR_0);
 VAR_13->store_version = VAR_10->status.data_version + 1;
 VAR_13->operation_ID = VAR_3;


 VAR_14 = VAR_13->request;
 *VAR_14++ = FUNC_4(VAR_4);
 *VAR_14++ = FUNC_4(VAR_10->fid.vid);
 *VAR_14++ = FUNC_4(VAR_10->fid.vnode);
 *VAR_14++ = FUNC_4(VAR_10->fid.unique);

 FUNC_7(&VAR_14, VAR_11);

 *VAR_14++ = 0;
 *VAR_14++ = 0;
 *VAR_14++ = 0;
 *VAR_14++ = 0;
 *VAR_14++ = FUNC_4(VAR_11->ia_size >> 32);
 *VAR_14++ = FUNC_4((u32) VAR_11->ia_size);

 return FUNC_3(&VAR_8->addr, VAR_13, VAR_6, VAR_12);
}
