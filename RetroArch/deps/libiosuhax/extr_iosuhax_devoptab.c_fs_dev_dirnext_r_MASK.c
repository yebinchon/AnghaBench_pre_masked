
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct stat {int st_nlink; int st_size; int st_blocks; int st_mtime; int st_ctime; int st_atime; int st_ino; int st_gid; int st_uid; int st_dev; int st_mode; } ;
struct _reent {int _errno; } ;
struct TYPE_12__ {TYPE_2__* dev; int dirHandle; } ;
typedef TYPE_3__ fs_dev_dir_entry_t ;
struct TYPE_10__ {int flag; int size; int mtime; int ctime; int id; int group_id; int owner_id; } ;
struct TYPE_13__ {TYPE_1__ stat; int name; } ;
typedef TYPE_4__ directoryEntry_s ;
struct TYPE_14__ {scalar_t__ dirStruct; } ;
struct TYPE_11__ {int pMutex; int fsaFd; } ;
typedef TYPE_5__ DIR_ITER ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,TYPE_4__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_4__*) ;
 TYPE_4__* FUNC_4 (int) ;
 int FUNC_5 (struct stat*,int ,int) ;
 int FUNC_6 (char*,int ) ;

__attribute__((used)) static int FUNC_7 (struct _reent *VAR_4, DIR_ITER *VAR_5, char *VAR_6, struct stat *VAR_7)
{
    fs_dev_dir_entry_t *VAR_8;

    if(!VAR_4)
        return -1;

    if(!VAR_5) {
        VAR_4->_errno = VAR_0;
        return -1;
    }

    VAR_8 = (fs_dev_dir_entry_t *)VAR_5->dirStruct;

    if(!VAR_8->dev) {
        VAR_4->_errno = VAR_1;
        return -1;
    }

    FUNC_1(VAR_8->dev->pMutex);

    directoryEntry_s * VAR_9 = FUNC_4(sizeof(directoryEntry_s));

    int VAR_10 = FUNC_0(VAR_8->dev->fsaFd, VAR_8->dirHandle, VAR_9);
    if(VAR_10 < 0)
    {
        FUNC_3(VAR_9);
        VAR_4->_errno = VAR_10;
        FUNC_2(VAR_8->dev->pMutex);
        return -1;
    }


    FUNC_6(VAR_6, VAR_9->name);

    if(VAR_7)
    {
        FUNC_5(VAR_7, 0, sizeof(struct stat));
        VAR_7->st_mode = (VAR_9->stat.flag & 0x80000000) ? VAR_2 : VAR_3;
        VAR_7->st_nlink = 1;
        VAR_7->st_size = VAR_9->stat.size;
        VAR_7->st_blocks = (VAR_9->stat.size + 511) >> 9;
        VAR_7->st_dev = VAR_9->stat.id;
        VAR_7->st_uid = VAR_9->stat.owner_id;
        VAR_7->st_gid = VAR_9->stat.group_id;
        VAR_7->st_ino = VAR_9->stat.id;
        VAR_7->st_atime = VAR_9->stat.mtime;
        VAR_7->st_ctime = VAR_9->stat.ctime;
        VAR_7->st_mtime = VAR_9->stat.mtime;
    }

    FUNC_3(VAR_9);
    FUNC_2(VAR_8->dev->pMutex);
    return 0;
}
