
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct stat {int st_nlink; int st_size; int st_blocks; int st_mtime; int st_ctime; int st_atime; int st_ino; int st_gid; int st_uid; int st_dev; int st_mode; } ;
struct _reent {int _errno; } ;
struct TYPE_11__ {TYPE_2__* dev; int dirHandle; } ;
typedef TYPE_3__ sd_fat_dir_entry_t ;
struct TYPE_13__ {scalar_t__ dirStruct; } ;
struct TYPE_9__ {int flag; int size; int mtime; int ctime; int ent_id; int group_id; int owner_id; } ;
struct TYPE_12__ {TYPE_1__ stat; int name; } ;
struct TYPE_10__ {int pMutex; int pCmd; int pClient; } ;
typedef int FSDirectoryEntry ;
typedef TYPE_4__ FSDirEntry ;
typedef TYPE_5__ DIR_ITER ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int *,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_4__*) ;
 TYPE_4__* FUNC_4 (int) ;
 int FUNC_5 (struct stat*,int ,int) ;
 int FUNC_6 (char*,int ) ;

__attribute__((used)) static int FUNC_7 (struct _reent *VAR_3, DIR_ITER *VAR_4, char *VAR_5, struct stat *VAR_6)
{
    sd_fat_dir_entry_t *VAR_7 = (sd_fat_dir_entry_t *)VAR_4->dirStruct;
    if(!VAR_7->dev) {
        VAR_3->_errno = VAR_0;
        return -1;
    }

    FUNC_1(VAR_7->dev->pMutex);

    FSDirEntry * VAR_8 = FUNC_4(sizeof(FSDirEntry));

    int VAR_9 = FUNC_0(VAR_7->dev->pClient, VAR_7->dev->pCmd, VAR_7->dirHandle, (FSDirectoryEntry*)VAR_8, -1);
    if(VAR_9 < 0)
    {
        FUNC_3(VAR_8);
        VAR_3->_errno = VAR_9;
        FUNC_2(VAR_7->dev->pMutex);
        return -1;
    }


    FUNC_6(VAR_5, VAR_8->name);

    if(VAR_6)
    {
        FUNC_5(VAR_6, 0, sizeof(struct stat));
        VAR_6->st_mode = (VAR_8->stat.flag & 0x80000000) ? VAR_1 : VAR_2;
        VAR_6->st_nlink = 1;
        VAR_6->st_size = VAR_8->stat.size;
        VAR_6->st_blocks = (VAR_8->stat.size + 511) >> 9;
        VAR_6->st_dev = VAR_8->stat.ent_id;
        VAR_6->st_uid = VAR_8->stat.owner_id;
        VAR_6->st_gid = VAR_8->stat.group_id;
        VAR_6->st_ino = VAR_8->stat.ent_id;
        VAR_6->st_atime = VAR_8->stat.mtime;
        VAR_6->st_ctime = VAR_8->stat.ctime;
        VAR_6->st_mtime = VAR_8->stat.mtime;
    }

    FUNC_3(VAR_8);
    FUNC_2(VAR_7->dev->pMutex);
    return 0;
}
