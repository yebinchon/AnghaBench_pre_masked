
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_7__ {int tv_nsec; int tv_sec; } ;
struct TYPE_6__ {int tv_nsec; int tv_sec; } ;
struct TYPE_5__ {int tv_nsec; int tv_sec; } ;
struct inode {int i_mode; TYPE_4__* i_sb; int i_blkbits; TYPE_3__ i_ctime; TYPE_2__ i_mtime; TYPE_1__ i_atime; int i_blocks; int i_gid; int i_uid; int i_nlink; int i_ino; } ;
struct fuse_inode {int orig_i_mode; int orig_ino; int i_time; scalar_t__ attr_version; } ;
struct fuse_conn {int flags; scalar_t__ attr_version; } ;
struct fuse_attr {int mode; scalar_t__ blksize; int ino; int ctimensec; int ctime; int mtimensec; int mtime; int atimensec; int atime; int blocks; int gid; int uid; int nlink; } ;
struct TYPE_8__ {int s_blocksize_bits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 struct fuse_conn* FUNC_1 (struct inode*) ;
 struct fuse_inode* FUNC_2 (struct inode*) ;
 int FUNC_3 (scalar_t__) ;

void FUNC_4(struct inode *VAR_3, struct fuse_attr *VAR_4,
       u64 VAR_5)
{
 struct fuse_conn *VAR_6 = FUNC_1(VAR_3);
 struct fuse_inode *VAR_7 = FUNC_2(VAR_3);

 VAR_7->attr_version = ++VAR_6->attr_version;
 VAR_7->i_time = VAR_5;

 VAR_3->i_ino = FUNC_0(VAR_4->ino);
 VAR_3->i_mode = (VAR_3->i_mode & VAR_1) | (VAR_4->mode & 07777);
 VAR_3->i_nlink = VAR_4->nlink;
 VAR_3->i_uid = VAR_4->uid;
 VAR_3->i_gid = VAR_4->gid;
 VAR_3->i_blocks = VAR_4->blocks;
 VAR_3->i_atime.tv_sec = VAR_4->atime;
 VAR_3->i_atime.tv_nsec = VAR_4->atimensec;
 VAR_3->i_mtime.tv_sec = VAR_4->mtime;
 VAR_3->i_mtime.tv_nsec = VAR_4->mtimensec;
 VAR_3->i_ctime.tv_sec = VAR_4->ctime;
 VAR_3->i_ctime.tv_nsec = VAR_4->ctimensec;

 if (VAR_4->blksize != 0)
  VAR_3->i_blkbits = FUNC_3(VAR_4->blksize);
 else
  VAR_3->i_blkbits = VAR_3->i_sb->s_blocksize_bits;






 VAR_7->orig_i_mode = VAR_3->i_mode;
 if (!(VAR_6->flags & VAR_0))
  VAR_3->i_mode &= ~VAR_2;

 VAR_7->orig_ino = VAR_4->ino;
}
