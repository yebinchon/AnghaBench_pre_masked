
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct key {int dummy; } ;
struct afs_wait_mode {int dummy; } ;
struct TYPE_2__ {size_t vid; size_t vnode; size_t unique; } ;
struct afs_vnode {TYPE_1__ fid; } ;
struct afs_server {int addr; } ;
struct afs_file_status {int dummy; } ;
struct afs_fid {int dummy; } ;
struct afs_call {int * request; int port; int service_id; struct afs_file_status* reply3; struct afs_fid* reply2; struct afs_vnode* reply; struct key* key; } ;
typedef int __be32 ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (char*) ;
 int VAR_7 ;
 struct afs_call* FUNC_1 (int *,size_t,int) ;
 int FUNC_2 (int *,struct afs_call*,int ,struct afs_wait_mode const*) ;
 void* FUNC_3 (size_t) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,char const*,size_t) ;
 int FUNC_6 (int *,int ,size_t) ;
 size_t FUNC_7 (char const*) ;

int FUNC_8(struct afs_server *VAR_8,
     struct key *VAR_9,
     struct afs_vnode *VAR_10,
     const char *VAR_11,
     const char *VAR_12,
     struct afs_fid *VAR_13,
     struct afs_file_status *VAR_14,
     const struct afs_wait_mode *VAR_15)
{
 struct afs_call *VAR_16;
 size_t VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;
 __be32 *VAR_22;

 FUNC_0("");

 VAR_17 = FUNC_7(VAR_11);
 VAR_19 = (4 - (VAR_17 & 3)) & 3;

 VAR_20 = FUNC_7(VAR_12);
 VAR_21 = (4 - (VAR_20 & 3)) & 3;

 VAR_18 = (6 * 4) + VAR_17 + VAR_19 + VAR_20 + VAR_21 + (6 * 4);

 VAR_16 = FUNC_1(&VAR_7, VAR_18,
       (3 + 21 + 21 + 6) * 4);
 if (!VAR_16)
  return -VAR_2;

 VAR_16->key = VAR_9;
 VAR_16->reply = VAR_10;
 VAR_16->reply2 = VAR_13;
 VAR_16->reply3 = VAR_14;
 VAR_16->service_id = VAR_4;
 VAR_16->port = FUNC_4(VAR_0);


 VAR_22 = VAR_16->request;
 *VAR_22++ = FUNC_3(VAR_3);
 *VAR_22++ = FUNC_3(VAR_10->fid.vid);
 *VAR_22++ = FUNC_3(VAR_10->fid.vnode);
 *VAR_22++ = FUNC_3(VAR_10->fid.unique);
 *VAR_22++ = FUNC_3(VAR_17);
 FUNC_5(VAR_22, VAR_11, VAR_17);
 VAR_22 = (void *) VAR_22 + VAR_17;
 if (VAR_19 > 0) {
  FUNC_6(VAR_22, 0, VAR_19);
  VAR_22 = (void *) VAR_22 + VAR_19;
 }
 *VAR_22++ = FUNC_3(VAR_20);
 FUNC_5(VAR_22, VAR_12, VAR_20);
 VAR_22 = (void *) VAR_22 + VAR_20;
 if (VAR_21 > 0) {
  FUNC_6(VAR_22, 0, VAR_21);
  VAR_22 = (void *) VAR_22 + VAR_21;
 }
 *VAR_22++ = FUNC_3(VAR_1);
 *VAR_22++ = 0;
 *VAR_22++ = 0;
 *VAR_22++ = 0;
 *VAR_22++ = FUNC_3(VAR_6);
 *VAR_22++ = 0;

 return FUNC_2(&VAR_8->addr, VAR_16, VAR_5, VAR_15);
}
