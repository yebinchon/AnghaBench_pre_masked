
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct stat {int st_nlink; int st_size; int st_blocks; int st_mtime; int st_ctime; int st_atime; int st_ino; int st_gid; int st_uid; int st_dev; int st_mode; } ;
struct _reent {int _errno; } ;
struct TYPE_5__ {char* mount_path; int pMutex; int pCmd; int pClient; } ;
typedef TYPE_1__ sd_fat_private_t ;
struct TYPE_6__ {int flag; int size; int mtime; int ctime; int ent_id; int group_id; int owner_id; } ;
typedef TYPE_2__ FSStat__ ;
typedef int FSStat ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*,int *,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct stat*,int ,int) ;
 TYPE_1__* FUNC_5 (char const*) ;
 char* FUNC_6 (char const*,TYPE_1__*) ;
 scalar_t__ FUNC_7 (char*) ;

__attribute__((used)) static int FUNC_8 (struct _reent *VAR_4, const char *VAR_5, struct stat *VAR_6)
{
    sd_fat_private_t *VAR_7 = FUNC_5(VAR_5);
    if(!VAR_7) {
        VAR_4->_errno = VAR_0;
        return -1;
    }

    FUNC_1(VAR_7->pMutex);


    FUNC_4(VAR_6, 0, sizeof(struct stat));

    char *VAR_8 = FUNC_6(VAR_5, VAR_7);
    if(!VAR_8) {
        VAR_4->_errno = VAR_1;
        FUNC_2(VAR_7->pMutex);
        return -1;
    }

    FSStat__ VAR_9;

    int VAR_10 = FUNC_0(VAR_7->pClient, VAR_7->pCmd, VAR_8, (FSStat*)&VAR_9, -1);

    FUNC_3(VAR_8);

    if(VAR_10 < 0) {
        VAR_4->_errno = VAR_10;
        FUNC_2(VAR_7->pMutex);
        return -1;
    }


    VAR_6->st_mode = ((VAR_9.flag & 0x80000000) || (FUNC_7(VAR_7->mount_path) + 1 == FUNC_7(VAR_8)))? VAR_2 : VAR_3;
    VAR_6->st_nlink = 1;
    VAR_6->st_size = VAR_9.size;
    VAR_6->st_blocks = (VAR_9.size + 511) >> 9;

    VAR_6->st_dev = VAR_9.ent_id;
    VAR_6->st_uid = VAR_9.owner_id;
    VAR_6->st_gid = VAR_9.group_id;
    VAR_6->st_ino = VAR_9.ent_id;
    VAR_6->st_atime = VAR_9.mtime;
    VAR_6->st_ctime = VAR_9.ctime;
    VAR_6->st_mtime = VAR_9.mtime;

    FUNC_2(VAR_7->pMutex);

    return 0;
}
