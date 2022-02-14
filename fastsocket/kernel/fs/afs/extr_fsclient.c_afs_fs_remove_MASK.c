
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
struct afs_call {int * request; int port; int service_id; struct afs_vnode* reply; struct key* key; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int VAR_6 ;
 struct afs_call* FUNC_1 (int *,size_t,int) ;
 int FUNC_2 (int *,struct afs_call*,int ,struct afs_wait_mode const*) ;
 void* FUNC_3 (size_t) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,char const*,size_t) ;
 int FUNC_6 (int *,int ,size_t) ;
 size_t FUNC_7 (char const*) ;

int FUNC_8(struct afs_server *VAR_7,
    struct key *VAR_8,
    struct afs_vnode *VAR_9,
    const char *VAR_10,
    bool VAR_11,
    const struct afs_wait_mode *VAR_12)
{
 struct afs_call *VAR_13;
 size_t VAR_14, VAR_15, VAR_16;
 __be32 *VAR_17;

 FUNC_0("");

 VAR_14 = FUNC_7(VAR_10);
 VAR_16 = (4 - (VAR_14 & 3)) & 3;
 VAR_15 = (5 * 4) + VAR_14 + VAR_16;

 VAR_13 = FUNC_1(&VAR_6, VAR_15, (21 + 6) * 4);
 if (!VAR_13)
  return -VAR_1;

 VAR_13->key = VAR_8;
 VAR_13->reply = VAR_9;
 VAR_13->service_id = VAR_4;
 VAR_13->port = FUNC_4(VAR_0);


 VAR_17 = VAR_13->request;
 *VAR_17++ = FUNC_3(VAR_11 ? VAR_2 : VAR_3);
 *VAR_17++ = FUNC_3(VAR_9->fid.vid);
 *VAR_17++ = FUNC_3(VAR_9->fid.vnode);
 *VAR_17++ = FUNC_3(VAR_9->fid.unique);
 *VAR_17++ = FUNC_3(VAR_14);
 FUNC_5(VAR_17, VAR_10, VAR_14);
 VAR_17 = (void *) VAR_17 + VAR_14;
 if (VAR_16 > 0) {
  FUNC_6(VAR_17, 0, VAR_16);
  VAR_17 = (void *) VAR_17 + VAR_16;
 }

 return FUNC_2(&VAR_7->addr, VAR_13, VAR_5, VAR_12);
}
