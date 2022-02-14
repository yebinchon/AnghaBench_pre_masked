
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct stat {int st_size; int st_blocks; int st_nlink; int st_mtime; int st_ctime; int st_atime; int st_ino; int st_gid; int st_uid; int st_dev; int st_mode; } ;
struct _reent {int _errno; } ;
struct TYPE_5__ {TYPE_1__* dev; int fd; } ;
typedef TYPE_2__ sd_fat_file_state_t ;
struct TYPE_6__ {int size; int mtime; int ctime; int ent_id; int group_id; int owner_id; } ;
struct TYPE_4__ {int pMutex; int pCmd; int pClient; } ;
typedef TYPE_3__ FSStat__ ;
typedef int FSStat ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int *,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (struct stat*,int ,int) ;

__attribute__((used)) static int FUNC_4 (struct _reent *VAR_2, void* VAR_3, struct stat *VAR_4)
{
    sd_fat_file_state_t *VAR_5 = (sd_fat_file_state_t *)VAR_3;
    if(!VAR_5->dev) {
        VAR_2->_errno = VAR_0;
        return -1;
    }

    FUNC_1(VAR_5->dev->pMutex);


    FUNC_3(VAR_4, 0, sizeof(struct stat));

    FSStat__ VAR_6;
    int VAR_7 = FUNC_0(VAR_5->dev->pClient, VAR_5->dev->pCmd, VAR_5->fd, (FSStat*)&VAR_6, -1);
    if(VAR_7 != 0) {
        VAR_2->_errno = VAR_7;
        FUNC_2(VAR_5->dev->pMutex);
        return -1;
    }

    VAR_4->st_mode = VAR_1;
    VAR_4->st_size = VAR_6.size;
    VAR_4->st_blocks = (VAR_6.size + 511) >> 9;
    VAR_4->st_nlink = 1;


    VAR_4->st_dev = VAR_6.ent_id;
    VAR_4->st_uid = VAR_6.owner_id;
    VAR_4->st_gid = VAR_6.group_id;
    VAR_4->st_ino = VAR_6.ent_id;
    VAR_4->st_atime = VAR_6.mtime;
    VAR_4->st_ctime = VAR_6.ctime;
    VAR_4->st_mtime = VAR_6.mtime;
    FUNC_2(VAR_5->dev->pMutex);
    return 0;
}
