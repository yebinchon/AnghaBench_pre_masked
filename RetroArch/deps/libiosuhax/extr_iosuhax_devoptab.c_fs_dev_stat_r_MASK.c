
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct stat {int st_nlink; int st_size; int st_blocks; int st_mtime; int st_ctime; int st_atime; int st_ino; int st_gid; int st_uid; int st_dev; int st_mode; } ;
struct _reent {int _errno; } ;
struct TYPE_6__ {char* mount_path; int pMutex; int fsaFd; } ;
typedef TYPE_1__ fs_dev_private_t ;
struct TYPE_7__ {int flag; int size; int mtime; int ctime; int id; int group_id; int owner_id; } ;
typedef TYPE_2__ fileStat_s ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (char*) ;
 TYPE_1__* FUNC_4 (char const*) ;
 char* FUNC_5 (char const*,TYPE_1__*) ;
 int FUNC_6 (struct stat*,int ,int) ;
 scalar_t__ FUNC_7 (char*) ;

__attribute__((used)) static int FUNC_8 (struct _reent *VAR_4, const char *VAR_5, struct stat *VAR_6)
{
    fs_dev_private_t *VAR_7 = FUNC_4(VAR_5);

    if(!VAR_4)
        return -1;

    if(!VAR_7) {
        VAR_4->_errno = VAR_0;
        return -1;
    }

    FUNC_1(VAR_7->pMutex);


    FUNC_6(VAR_6, 0, sizeof(struct stat));

    char *VAR_8 = FUNC_5(VAR_5, VAR_7);
    if(!VAR_8) {
        VAR_4->_errno = VAR_1;
        FUNC_2(VAR_7->pMutex);
        return -1;
    }

    fileStat_s VAR_9;

    int VAR_10 = FUNC_0(VAR_7->fsaFd, VAR_8, &VAR_9);

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

    VAR_6->st_dev = VAR_9.id;
    VAR_6->st_uid = VAR_9.owner_id;
    VAR_6->st_gid = VAR_9.group_id;
    VAR_6->st_ino = VAR_9.id;
    VAR_6->st_atime = VAR_9.mtime;
    VAR_6->st_ctime = VAR_9.ctime;
    VAR_6->st_mtime = VAR_9.mtime;

    FUNC_2(VAR_7->pMutex);

    return 0;
}
