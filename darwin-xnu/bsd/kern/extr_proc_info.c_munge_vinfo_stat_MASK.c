
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vinfo_stat {int * vst_qspare; int vst_rdev; int vst_gen; int vst_flags; int vst_blksize; int vst_blocks; int vst_size; int vst_birthtimensec; int vst_birthtime; int vst_ctimensec; int vst_ctime; int vst_mtimensec; int vst_mtime; int vst_atimensec; int vst_atime; int vst_gid; int vst_uid; int vst_ino; int vst_nlink; int vst_mode; int vst_dev; } ;
struct TYPE_8__ {int tv_nsec; int tv_sec; } ;
struct TYPE_7__ {int tv_nsec; int tv_sec; } ;
struct TYPE_6__ {int tv_nsec; int tv_sec; } ;
struct TYPE_5__ {int tv_nsec; int tv_sec; } ;
struct stat64 {int * st_qspare; int st_rdev; int st_gen; int st_flags; int st_blksize; int st_blocks; int st_size; TYPE_4__ st_birthtimespec; TYPE_3__ st_ctimespec; TYPE_2__ st_mtimespec; TYPE_1__ st_atimespec; int st_gid; int st_uid; int st_ino; int st_nlink; int st_mode; int st_dev; } ;


 int FUNC_0 (struct vinfo_stat*,int) ;

__attribute__((used)) static void
FUNC_1(struct stat64 *VAR_0, struct vinfo_stat *VAR_1)
{
        FUNC_0(VAR_1, sizeof(struct vinfo_stat));

 VAR_1->vst_dev = VAR_0->st_dev;
 VAR_1->vst_mode = VAR_0->st_mode;
 VAR_1->vst_nlink = VAR_0->st_nlink;
 VAR_1->vst_ino = VAR_0->st_ino;
 VAR_1->vst_uid = VAR_0->st_uid;
 VAR_1->vst_gid = VAR_0->st_gid;
 VAR_1->vst_atime = VAR_0->st_atimespec.tv_sec;
 VAR_1->vst_atimensec = VAR_0->st_atimespec.tv_nsec;
 VAR_1->vst_mtime = VAR_0->st_mtimespec.tv_sec;
 VAR_1->vst_mtimensec = VAR_0->st_mtimespec.tv_nsec;
 VAR_1->vst_ctime = VAR_0->st_ctimespec.tv_sec;
 VAR_1->vst_ctimensec = VAR_0->st_ctimespec.tv_nsec;
 VAR_1->vst_birthtime = VAR_0->st_birthtimespec.tv_sec;
 VAR_1->vst_birthtimensec = VAR_0->st_birthtimespec.tv_nsec;
 VAR_1->vst_size = VAR_0->st_size;
 VAR_1->vst_blocks = VAR_0->st_blocks;
 VAR_1->vst_blksize = VAR_0->st_blksize;
 VAR_1->vst_flags = VAR_0->st_flags;
 VAR_1->vst_gen = VAR_0->st_gen;
 VAR_1->vst_rdev = VAR_0->st_rdev;
 VAR_1->vst_qspare[0] = VAR_0->st_qspare[0];
 VAR_1->vst_qspare[1] = VAR_0->st_qspare[1];
}
