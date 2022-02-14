
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct afs_writeback {int key; struct afs_vnode* vnode; } ;
struct afs_wait_mode {int dummy; } ;
struct TYPE_6__ {int vid; int vnode; int unique; } ;
struct TYPE_5__ {scalar_t__ data_version; } ;
struct TYPE_4__ {int i_mapping; } ;
struct afs_vnode {TYPE_3__ fid; TYPE_2__ status; TYPE_1__ vfs_inode; } ;
struct afs_server {int addr; } ;
struct afs_call {unsigned int first_offset; unsigned int last_to; int send_pages; int * request; scalar_t__ store_version; void* last; void* first; int mapping; int port; int service_id; struct afs_vnode* reply; int key; struct afs_writeback* wb; } ;
typedef void* pgoff_t ;
typedef int loff_t ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int ,int,int) ;
 int VAR_5 ;
 struct afs_call* FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *,struct afs_call*,int ,struct afs_wait_mode const*) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct afs_server *VAR_6,
          struct afs_writeback *VAR_7,
          pgoff_t VAR_8, pgoff_t VAR_9,
          unsigned VAR_10, unsigned VAR_11,
          loff_t VAR_12, loff_t VAR_13, loff_t VAR_14,
          const struct afs_wait_mode *VAR_15)
{
 struct afs_vnode *VAR_16 = VAR_7->vnode;
 struct afs_call *VAR_17;
 __be32 *VAR_18;

 FUNC_0(",%x,{%x:%u},,",
        FUNC_5(VAR_7->key), VAR_16->fid.vid, VAR_16->fid.vnode);

 VAR_17 = FUNC_1(&VAR_5,
       (4 + 6 + 3 * 2) * 4,
       (21 + 6) * 4);
 if (!VAR_17)
  return -VAR_1;

 VAR_17->wb = VAR_7;
 VAR_17->key = VAR_7->key;
 VAR_17->reply = VAR_16;
 VAR_17->service_id = VAR_3;
 VAR_17->port = FUNC_4(VAR_0);
 VAR_17->mapping = VAR_16->vfs_inode.i_mapping;
 VAR_17->first = VAR_8;
 VAR_17->last = VAR_9;
 VAR_17->first_offset = VAR_10;
 VAR_17->last_to = VAR_11;
 VAR_17->send_pages = 1;
 VAR_17->store_version = VAR_16->status.data_version + 1;


 VAR_18 = VAR_17->request;
 *VAR_18++ = FUNC_3(VAR_2);
 *VAR_18++ = FUNC_3(VAR_16->fid.vid);
 *VAR_18++ = FUNC_3(VAR_16->fid.vnode);
 *VAR_18++ = FUNC_3(VAR_16->fid.unique);

 *VAR_18++ = 0;
 *VAR_18++ = 0;
 *VAR_18++ = 0;
 *VAR_18++ = 0;
 *VAR_18++ = 0;
 *VAR_18++ = 0;

 *VAR_18++ = FUNC_3(VAR_13 >> 32);
 *VAR_18++ = FUNC_3((u32) VAR_13);
 *VAR_18++ = FUNC_3(VAR_12 >> 32);
 *VAR_18++ = FUNC_3((u32) VAR_12);
 *VAR_18++ = FUNC_3(VAR_14 >> 32);
 *VAR_18++ = FUNC_3((u32) VAR_14);

 return FUNC_2(&VAR_6->addr, VAR_17, VAR_4, VAR_15);
}
