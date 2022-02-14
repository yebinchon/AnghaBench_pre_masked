
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kstat {int blksize; int blocks; int size; int ctime; int mtime; int atime; int rdev; int gid; int uid; int nlink; int mode; int ino; int dev; } ;
struct inode {int i_blkbits; int i_blocks; int i_ctime; int i_mtime; int i_atime; int i_rdev; int i_gid; int i_uid; int i_nlink; int i_mode; int i_ino; TYPE_1__* i_sb; } ;
struct TYPE_2__ {int s_dev; } ;


 int FUNC_0 (struct inode*) ;

void FUNC_1(struct inode *VAR_0, struct kstat *VAR_1)
{
 VAR_1->dev = VAR_0->i_sb->s_dev;
 VAR_1->ino = VAR_0->i_ino;
 VAR_1->mode = VAR_0->i_mode;
 VAR_1->nlink = VAR_0->i_nlink;
 VAR_1->uid = VAR_0->i_uid;
 VAR_1->gid = VAR_0->i_gid;
 VAR_1->rdev = VAR_0->i_rdev;
 VAR_1->atime = VAR_0->i_atime;
 VAR_1->mtime = VAR_0->i_mtime;
 VAR_1->ctime = VAR_0->i_ctime;
 VAR_1->size = FUNC_0(VAR_0);
 VAR_1->blocks = VAR_0->i_blocks;
 VAR_1->blksize = (1 << VAR_0->i_blkbits);
}
