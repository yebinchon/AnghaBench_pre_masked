
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int tv_nsec; int tv_sec; } ;
struct TYPE_7__ {int tv_nsec; int tv_sec; } ;
struct TYPE_6__ {int tv_nsec; int tv_sec; } ;
struct kstat {int mode; int blksize; int blocks; int size; TYPE_4__ ctime; TYPE_3__ mtime; TYPE_2__ atime; int rdev; int gid; int uid; int nlink; int ino; int dev; } ;
struct inode {int i_mode; int i_blkbits; int i_rdev; TYPE_1__* i_sb; } ;
struct fuse_attr {int mode; int blocks; int size; int ctimensec; int ctime; int mtimensec; int mtime; int atimensec; int atime; int gid; int uid; int nlink; int ino; } ;
struct TYPE_5__ {int s_dev; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct inode *VAR_1, struct fuse_attr *VAR_2,
     struct kstat *VAR_3)
{
 VAR_3->dev = VAR_1->i_sb->s_dev;
 VAR_3->ino = VAR_2->ino;
 VAR_3->mode = (VAR_1->i_mode & VAR_0) | (VAR_2->mode & 07777);
 VAR_3->nlink = VAR_2->nlink;
 VAR_3->uid = VAR_2->uid;
 VAR_3->gid = VAR_2->gid;
 VAR_3->rdev = VAR_1->i_rdev;
 VAR_3->atime.tv_sec = VAR_2->atime;
 VAR_3->atime.tv_nsec = VAR_2->atimensec;
 VAR_3->mtime.tv_sec = VAR_2->mtime;
 VAR_3->mtime.tv_nsec = VAR_2->mtimensec;
 VAR_3->ctime.tv_sec = VAR_2->ctime;
 VAR_3->ctime.tv_nsec = VAR_2->ctimensec;
 VAR_3->size = VAR_2->size;
 VAR_3->blocks = VAR_2->blocks;
 VAR_3->blksize = (1 << VAR_1->i_blkbits);
}
