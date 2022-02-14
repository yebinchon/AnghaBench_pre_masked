
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int tv_nsec; int tv_sec; } ;
struct TYPE_9__ {int tv_nsec; int tv_sec; } ;
struct TYPE_7__ {int tv_nsec; int tv_sec; } ;
struct user32_stat {int * st_qspare; int st_lspare; int st_gen; int st_flags; int st_blksize; int st_blocks; int st_size; int st_ctimensec; int st_ctime; int st_mtimensec; int st_mtime; int st_atimensec; int st_atime; TYPE_5__ st_ctimespec; TYPE_3__ st_mtimespec; TYPE_1__ st_atimespec; int st_rdev; int st_gid; int st_uid; int st_nlink; int st_mode; int st_ino; int st_dev; } ;
struct TYPE_12__ {int tv_nsec; int tv_sec; } ;
struct TYPE_10__ {int tv_nsec; int tv_sec; } ;
struct TYPE_8__ {int tv_nsec; int tv_sec; } ;
struct stat {int * st_qspare; int st_lspare; int st_gen; int st_flags; int st_blksize; int st_blocks; int st_size; int st_ctimensec; int st_ctime; int st_mtimensec; int st_mtime; int st_atimensec; int st_atime; TYPE_6__ st_ctimespec; TYPE_4__ st_mtimespec; TYPE_2__ st_atimespec; int st_rdev; int st_gid; int st_uid; int st_nlink; int st_mode; int st_ino; int st_dev; } ;


 int FUNC_0 (struct user32_stat*,int) ;

void FUNC_1(struct stat *VAR_0, struct user32_stat *VAR_1)
{
 FUNC_0(VAR_1, sizeof(*VAR_1));

 VAR_1->st_dev = VAR_0->st_dev;
 VAR_1->st_ino = VAR_0->st_ino;
 VAR_1->st_mode = VAR_0->st_mode;
 VAR_1->st_nlink = VAR_0->st_nlink;
 VAR_1->st_uid = VAR_0->st_uid;
 VAR_1->st_gid = VAR_0->st_gid;
 VAR_1->st_rdev = VAR_0->st_rdev;

 VAR_1->st_atimespec.tv_sec = VAR_0->st_atimespec.tv_sec;
 VAR_1->st_atimespec.tv_nsec = VAR_0->st_atimespec.tv_nsec;
 VAR_1->st_mtimespec.tv_sec = VAR_0->st_mtimespec.tv_sec;
 VAR_1->st_mtimespec.tv_nsec = VAR_0->st_mtimespec.tv_nsec;
 VAR_1->st_ctimespec.tv_sec = VAR_0->st_ctimespec.tv_sec;
 VAR_1->st_ctimespec.tv_nsec = VAR_0->st_ctimespec.tv_nsec;
 VAR_1->st_size = VAR_0->st_size;
 VAR_1->st_blocks = VAR_0->st_blocks;
 VAR_1->st_blksize = VAR_0->st_blksize;
 VAR_1->st_flags = VAR_0->st_flags;
 VAR_1->st_gen = VAR_0->st_gen;
 VAR_1->st_lspare = VAR_0->st_lspare;
 VAR_1->st_qspare[0] = VAR_0->st_qspare[0];
 VAR_1->st_qspare[1] = VAR_0->st_qspare[1];
}
