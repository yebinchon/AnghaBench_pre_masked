
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef void* uid_t ;
struct stat {int st_size; int st_blocks; void* st_gid; void* st_uid; int st_blksize; int st_mode; int st_rdev; int st_atime; int st_ctime; int st_mtime; int st_nlink; } ;
struct TYPE_15__ {int guid; int uid; int mtime; int mode; } ;
struct TYPE_12__ {int minor; int major; } ;
struct TYPE_11__ {int file_size; } ;
struct TYPE_13__ {int symlink_size; TYPE_2__ dev; TYPE_1__ reg; } ;
struct TYPE_16__ {TYPE_5__ base; TYPE_3__ xtra; int nlink; } ;
typedef TYPE_6__ sqfs_inode ;
typedef scalar_t__ sqfs_err ;
struct TYPE_14__ {int block_size; } ;
struct TYPE_17__ {TYPE_4__ sb; } ;
typedef TYPE_7__ sqfs ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct stat*,int ,int) ;
 scalar_t__ FUNC_5 (TYPE_7__*,int ,void**) ;
 int FUNC_6 (int ,int ) ;

sqfs_err FUNC_7(sqfs *VAR_1, sqfs_inode *VAR_2, struct stat *VAR_3) {
        sqfs_err VAR_4 = VAR_0;
        uid_t VAR_5;

        FUNC_4(VAR_3, 0, sizeof(*VAR_3));
        VAR_3->st_mode = VAR_2->base.mode;
        VAR_3->st_nlink = VAR_2->nlink;
        VAR_3->st_mtime = VAR_3->st_ctime = VAR_3->st_atime = VAR_2->base.mtime;

        if (FUNC_3(VAR_3->st_mode)) {

                VAR_3->st_size = VAR_2->xtra.reg.file_size;
                VAR_3->st_blocks = VAR_3->st_size / 512;
        } else if (FUNC_0(VAR_3->st_mode) || FUNC_1(VAR_3->st_mode)) {
                VAR_3->st_rdev = FUNC_6(VAR_2->xtra.dev.major,
                        VAR_2->xtra.dev.minor);
        } else if (FUNC_2(VAR_3->st_mode)) {
                VAR_3->st_size = VAR_2->xtra.symlink_size;
        }

        VAR_3->st_blksize = VAR_1->sb.block_size;

        VAR_4 = FUNC_5(VAR_1, VAR_2->base.uid, &VAR_5);
        if (VAR_4)
                return VAR_4;
        VAR_3->st_uid = VAR_5;
        VAR_4 = FUNC_5(VAR_1, VAR_2->base.guid, &VAR_5);
        VAR_3->st_gid = VAR_5;
        if (VAR_4)
                return VAR_4;

        return VAR_0;
}
