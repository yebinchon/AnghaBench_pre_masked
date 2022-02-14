
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct afs_writeback {int key; struct afs_vnode* vnode; } ;
struct afs_wait_mode {int dummy; } ;
struct TYPE_5__ {int vid; int vnode; int unique; } ;
struct TYPE_4__ {scalar_t__ data_version; } ;
struct TYPE_6__ {int i_mapping; } ;
struct afs_vnode {TYPE_2__ fid; TYPE_1__ status; TYPE_3__ vfs_inode; } ;
struct afs_server {int addr; } ;
struct afs_call {unsigned int first_offset; unsigned int last_to; int send_pages; int * request; scalar_t__ store_version; scalar_t__ last; scalar_t__ first; int mapping; int port; int service_id; struct afs_vnode* reply; int key; struct afs_writeback* wb; } ;
typedef scalar_t__ pgoff_t ;
typedef int loff_t ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,unsigned long long,unsigned long long,unsigned long long) ;
 int FUNC_1 (char*,int ,int,int) ;
 int VAR_6 ;
 struct afs_call* FUNC_2 (int *,int,int) ;
 int FUNC_3 (struct afs_server*,struct afs_writeback*,scalar_t__,scalar_t__,unsigned int,unsigned int,int,int,int,struct afs_wait_mode const*) ;
 int FUNC_4 (int *,struct afs_call*,int ,struct afs_wait_mode const*) ;
 void* FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (int ) ;

int FUNC_9(struct afs_server *VAR_7, struct afs_writeback *VAR_8,
        pgoff_t VAR_9, pgoff_t VAR_10,
        unsigned VAR_11, unsigned VAR_12,
        const struct afs_wait_mode *VAR_13)
{
 struct afs_vnode *VAR_14 = VAR_8->vnode;
 struct afs_call *VAR_15;
 loff_t VAR_16, VAR_17, VAR_18;
 __be32 *VAR_19;

 FUNC_1(",%x,{%x:%u},,",
        FUNC_8(VAR_8->key), VAR_14->fid.vid, VAR_14->fid.vnode);

 VAR_16 = VAR_12 - VAR_11;
 if (VAR_9 != VAR_10)
  VAR_16 += (loff_t)(VAR_10 - VAR_9) << VAR_5;
 VAR_17 = (loff_t)VAR_9 << VAR_5;
 VAR_17 += VAR_11;

 VAR_18 = FUNC_7(&VAR_14->vfs_inode);
 if (VAR_17 + VAR_16 > VAR_18)
  VAR_18 = VAR_16 + VAR_17;

 FUNC_0("size %llx, at %llx, i_size %llx",
        (unsigned long long) VAR_16, (unsigned long long) VAR_17,
        (unsigned long long) VAR_18);

 if (VAR_17 >> 32 || VAR_18 >> 32 || VAR_16 >> 32 || (VAR_17 + VAR_16) >> 32)
  return FUNC_3(VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12,
        VAR_16, VAR_17, VAR_18, VAR_13);

 VAR_15 = FUNC_2(&VAR_6,
       (4 + 6 + 3) * 4,
       (21 + 6) * 4);
 if (!VAR_15)
  return -VAR_1;

 VAR_15->wb = VAR_8;
 VAR_15->key = VAR_8->key;
 VAR_15->reply = VAR_14;
 VAR_15->service_id = VAR_3;
 VAR_15->port = FUNC_6(VAR_0);
 VAR_15->mapping = VAR_14->vfs_inode.i_mapping;
 VAR_15->first = VAR_9;
 VAR_15->last = VAR_10;
 VAR_15->first_offset = VAR_11;
 VAR_15->last_to = VAR_12;
 VAR_15->send_pages = 1;
 VAR_15->store_version = VAR_14->status.data_version + 1;


 VAR_19 = VAR_15->request;
 *VAR_19++ = FUNC_5(VAR_2);
 *VAR_19++ = FUNC_5(VAR_14->fid.vid);
 *VAR_19++ = FUNC_5(VAR_14->fid.vnode);
 *VAR_19++ = FUNC_5(VAR_14->fid.unique);

 *VAR_19++ = 0;
 *VAR_19++ = 0;
 *VAR_19++ = 0;
 *VAR_19++ = 0;
 *VAR_19++ = 0;
 *VAR_19++ = 0;

 *VAR_19++ = FUNC_5(VAR_17);
 *VAR_19++ = FUNC_5(VAR_16);
 *VAR_19++ = FUNC_5(VAR_18);

 return FUNC_4(&VAR_7->addr, VAR_15, VAR_4, VAR_13);
}
