
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct inode {TYPE_1__* i_sb; } ;
struct TYPE_13__ {int error; } ;
struct TYPE_14__ {int numargs; TYPE_6__ h; TYPE_5__* args; } ;
struct TYPE_9__ {int nodeid; int opcode; } ;
struct TYPE_11__ {int numargs; TYPE_3__* args; TYPE_2__ h; } ;
struct fuse_req {TYPE_7__ out; TYPE_4__ in; } ;
struct fuse_conn {int no_bmap; } ;
struct fuse_bmap_out {int block; } ;
struct fuse_bmap_in {int blocksize; int block; } ;
struct address_space {struct inode* host; } ;
typedef int sector_t ;
typedef int outarg ;
typedef int inarg ;
struct TYPE_12__ {int size; struct fuse_bmap_out* value; } ;
struct TYPE_10__ {int size; struct fuse_bmap_in* value; } ;
struct TYPE_8__ {int s_blocksize; int s_bdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct fuse_req*) ;
 struct fuse_req* FUNC_1 (struct fuse_conn*) ;
 int FUNC_2 (struct fuse_conn*,struct fuse_req*) ;
 int FUNC_3 (struct fuse_conn*,struct fuse_req*) ;
 struct fuse_conn* FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct fuse_bmap_in*,int ,int) ;

__attribute__((used)) static sector_t FUNC_7(struct address_space *VAR_2, sector_t VAR_3)
{
 struct inode *VAR_4 = VAR_2->host;
 struct fuse_conn *VAR_5 = FUNC_4(VAR_4);
 struct fuse_req *VAR_6;
 struct fuse_bmap_in VAR_7;
 struct fuse_bmap_out VAR_8;
 int VAR_9;

 if (!VAR_4->i_sb->s_bdev || VAR_5->no_bmap)
  return 0;

 VAR_6 = FUNC_1(VAR_5);
 if (FUNC_0(VAR_6))
  return 0;

 FUNC_6(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.block = VAR_3;
 VAR_7.blocksize = VAR_4->i_sb->s_blocksize;
 VAR_6->in.h.opcode = VAR_1;
 VAR_6->in.h.nodeid = FUNC_5(VAR_4);
 VAR_6->in.numargs = 1;
 VAR_6->in.args[0].size = sizeof(VAR_7);
 VAR_6->in.args[0].value = &VAR_7;
 VAR_6->out.numargs = 1;
 VAR_6->out.args[0].size = sizeof(VAR_8);
 VAR_6->out.args[0].value = &VAR_8;
 FUNC_3(VAR_5, VAR_6);
 VAR_9 = VAR_6->out.h.error;
 FUNC_2(VAR_5, VAR_6);
 if (VAR_9 == -VAR_0)
  VAR_5->no_bmap = 1;

 return VAR_9 ? 0 : VAR_8.block;
}
