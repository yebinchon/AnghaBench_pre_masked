
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t umode_t ;
struct key {int dummy; } ;
struct afs_wait_mode {int dummy; } ;
struct TYPE_2__ {size_t vid; size_t vnode; size_t unique; } ;
struct afs_vnode {TYPE_1__ fid; } ;
struct afs_server {int addr; } ;
struct afs_file_status {int dummy; } ;
struct afs_fid {int dummy; } ;
struct afs_callback {int dummy; } ;
struct afs_call {int * request; int port; int service_id; struct afs_callback* reply4; struct afs_file_status* reply3; struct afs_fid* reply2; struct afs_vnode* reply; struct key* key; } ;
typedef int __be32 ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 scalar_t__ FUNC_0 (size_t) ;
 int FUNC_1 (char*) ;
 int VAR_8 ;
 struct afs_call* FUNC_2 (int *,size_t,int) ;
 int FUNC_3 (int *,struct afs_call*,int ,struct afs_wait_mode const*) ;
 void* FUNC_4 (size_t) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,char const*,size_t) ;
 int FUNC_7 (int *,int ,size_t) ;
 size_t FUNC_8 (char const*) ;

int FUNC_9(struct afs_server *VAR_9,
    struct key *VAR_10,
    struct afs_vnode *VAR_11,
    const char *VAR_12,
    umode_t VAR_13,
    struct afs_fid *VAR_14,
    struct afs_file_status *VAR_15,
    struct afs_callback *VAR_16,
    const struct afs_wait_mode *VAR_17)
{
 struct afs_call *VAR_18;
 size_t VAR_19, VAR_20, VAR_21;
 __be32 *VAR_22;

 FUNC_1("");

 VAR_19 = FUNC_8(VAR_12);
 VAR_21 = (4 - (VAR_19 & 3)) & 3;
 VAR_20 = (5 * 4) + VAR_19 + VAR_21 + (6 * 4);

 VAR_18 = FUNC_2(&VAR_8, VAR_20,
       (3 + 21 + 21 + 3 + 6) * 4);
 if (!VAR_18)
  return -VAR_2;

 VAR_18->key = VAR_10;
 VAR_18->reply = VAR_11;
 VAR_18->reply2 = VAR_14;
 VAR_18->reply3 = VAR_15;
 VAR_18->reply4 = VAR_16;
 VAR_18->service_id = VAR_5;
 VAR_18->port = FUNC_5(VAR_0);


 VAR_22 = VAR_18->request;
 *VAR_22++ = FUNC_4(FUNC_0(VAR_13) ? VAR_4 : VAR_3);
 *VAR_22++ = FUNC_4(VAR_11->fid.vid);
 *VAR_22++ = FUNC_4(VAR_11->fid.vnode);
 *VAR_22++ = FUNC_4(VAR_11->fid.unique);
 *VAR_22++ = FUNC_4(VAR_19);
 FUNC_6(VAR_22, VAR_12, VAR_19);
 VAR_22 = (void *) VAR_22 + VAR_19;
 if (VAR_21 > 0) {
  FUNC_7(VAR_22, 0, VAR_21);
  VAR_22 = (void *) VAR_22 + VAR_21;
 }
 *VAR_22++ = FUNC_4(VAR_1);
 *VAR_22++ = 0;
 *VAR_22++ = 0;
 *VAR_22++ = 0;
 *VAR_22++ = FUNC_4(VAR_13 & VAR_7);
 *VAR_22++ = 0;

 return FUNC_3(&VAR_9->addr, VAR_18, VAR_6, VAR_17);
}
