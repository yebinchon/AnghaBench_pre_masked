
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
    const char *VAR_9,
    struct afs_vnode *VAR_10,
    const char *VAR_11,
    const struct afs_wait_mode *VAR_12)
{
 struct afs_call *VAR_13;
 size_t VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
 __be32 *VAR_19;

 FUNC_0("");

 VAR_15 = FUNC_7(VAR_9);
 VAR_16 = (4 - (VAR_15 & 3)) & 3;

 VAR_17 = FUNC_7(VAR_11);
 VAR_18 = (4 - (VAR_17 & 3)) & 3;

 VAR_14 = (4 * 4) +
  4 + VAR_15 + VAR_16 +
  (3 * 4) +
  4 + VAR_17 + VAR_18;

 VAR_13 = FUNC_1(&VAR_5, VAR_14, (21 + 21 + 6) * 4);
 if (!VAR_13)
  return -VAR_1;

 VAR_13->key = VAR_7;
 VAR_13->reply = VAR_8;
 VAR_13->reply2 = VAR_10;
 VAR_13->service_id = VAR_3;
 VAR_13->port = FUNC_4(VAR_0);


 VAR_19 = VAR_13->request;
 *VAR_19++ = FUNC_3(VAR_2);
 *VAR_19++ = FUNC_3(VAR_8->fid.vid);
 *VAR_19++ = FUNC_3(VAR_8->fid.vnode);
 *VAR_19++ = FUNC_3(VAR_8->fid.unique);
 *VAR_19++ = FUNC_3(VAR_15);
 FUNC_5(VAR_19, VAR_9, VAR_15);
 VAR_19 = (void *) VAR_19 + VAR_15;
 if (VAR_16 > 0) {
  FUNC_6(VAR_19, 0, VAR_16);
  VAR_19 = (void *) VAR_19 + VAR_16;
 }

 *VAR_19++ = FUNC_3(VAR_10->fid.vid);
 *VAR_19++ = FUNC_3(VAR_10->fid.vnode);
 *VAR_19++ = FUNC_3(VAR_10->fid.unique);
 *VAR_19++ = FUNC_3(VAR_17);
 FUNC_5(VAR_19, VAR_11, VAR_17);
 VAR_19 = (void *) VAR_19 + VAR_17;
 if (VAR_18 > 0) {
  FUNC_6(VAR_19, 0, VAR_18);
  VAR_19 = (void *) VAR_19 + VAR_18;
 }

 return FUNC_2(&VAR_6->addr, VAR_13, VAR_4, VAR_12);
}
