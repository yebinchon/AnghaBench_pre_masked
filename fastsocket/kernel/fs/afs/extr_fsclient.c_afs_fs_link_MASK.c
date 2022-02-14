
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
struct afs_call {int * request; int port; int service_id; struct afs_vnode* reply2; struct afs_vnode* reply; struct key* key; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int VAR_5 ;
 struct afs_call* FUNC_1 (int *,size_t,int) ;
 int FUNC_2 (int *,struct afs_call*,int ,struct afs_wait_mode const*) ;
 void* FUNC_3 (size_t) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,char const*,size_t) ;
 int FUNC_6 (int *,int ,size_t) ;
 size_t FUNC_7 (char const*) ;

int FUNC_8(struct afs_server *VAR_6,
  struct key *VAR_7,
  struct afs_vnode *VAR_8,
  struct afs_vnode *VAR_9,
  const char *VAR_10,
  const struct afs_wait_mode *VAR_11)
{
 struct afs_call *VAR_12;
 size_t VAR_13, VAR_14, VAR_15;
 __be32 *VAR_16;

 FUNC_0("");

 VAR_13 = FUNC_7(VAR_10);
 VAR_15 = (4 - (VAR_13 & 3)) & 3;
 VAR_14 = (5 * 4) + VAR_13 + VAR_15 + (3 * 4);

 VAR_12 = FUNC_1(&VAR_5, VAR_14, (21 + 21 + 6) * 4);
 if (!VAR_12)
  return -VAR_1;

 VAR_12->key = VAR_7;
 VAR_12->reply = VAR_8;
 VAR_12->reply2 = VAR_9;
 VAR_12->service_id = VAR_3;
 VAR_12->port = FUNC_4(VAR_0);


 VAR_16 = VAR_12->request;
 *VAR_16++ = FUNC_3(VAR_2);
 *VAR_16++ = FUNC_3(VAR_8->fid.vid);
 *VAR_16++ = FUNC_3(VAR_8->fid.vnode);
 *VAR_16++ = FUNC_3(VAR_8->fid.unique);
 *VAR_16++ = FUNC_3(VAR_13);
 FUNC_5(VAR_16, VAR_10, VAR_13);
 VAR_16 = (void *) VAR_16 + VAR_13;
 if (VAR_15 > 0) {
  FUNC_6(VAR_16, 0, VAR_15);
  VAR_16 = (void *) VAR_16 + VAR_15;
 }
 *VAR_16++ = FUNC_3(VAR_9->fid.vid);
 *VAR_16++ = FUNC_3(VAR_9->fid.vnode);
 *VAR_16++ = FUNC_3(VAR_9->fid.unique);

 return FUNC_2(&VAR_6->addr, VAR_12, VAR_4, VAR_11);
}
