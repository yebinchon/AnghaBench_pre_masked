
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct stat {int st_size; int st_blocks; int st_nlink; int st_mtime; int st_ctime; int st_atime; int st_ino; int st_gid; int st_uid; int st_dev; int st_mode; } ;
struct _reent {int _errno; } ;
struct TYPE_6__ {TYPE_1__* dev; } ;
typedef TYPE_2__ fs_dev_file_state_t ;
struct TYPE_7__ {int size; int mtime; int ctime; int id; int group_id; int owner_id; } ;
typedef TYPE_3__ fileStat_s ;
struct TYPE_5__ {int pMutex; int fsaFd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,TYPE_3__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (struct stat*,int ,int) ;

__attribute__((used)) static int FUNC_4 (struct _reent *VAR_3, void *VAR_4, struct stat *VAR_5)
{
    fs_dev_file_state_t *VAR_6 = (fs_dev_file_state_t *)VAR_4;

    if(!VAR_3)
        return -1;

    if(!VAR_6) {
        VAR_3->_errno = VAR_0;
        return -1;
    }

    if(!VAR_6->dev) {
        VAR_3->_errno = VAR_1;
        return -1;
    }

    FUNC_1(VAR_6->dev->pMutex);


    FUNC_3(VAR_5, 0, sizeof(struct stat));

    fileStat_s VAR_7;
    int VAR_8 = FUNC_0(VAR_6->dev->fsaFd, (int)VAR_4, &VAR_7);
    if(VAR_8 != 0) {
        VAR_3->_errno = VAR_8;
        FUNC_2(VAR_6->dev->pMutex);
        return -1;
    }

    VAR_5->st_mode = VAR_2;
    VAR_5->st_size = VAR_7.size;
    VAR_5->st_blocks = (VAR_7.size + 511) >> 9;
    VAR_5->st_nlink = 1;


    VAR_5->st_dev = VAR_7.id;
    VAR_5->st_uid = VAR_7.owner_id;
    VAR_5->st_gid = VAR_7.group_id;
    VAR_5->st_ino = VAR_7.id;
    VAR_5->st_atime = VAR_7.mtime;
    VAR_5->st_ctime = VAR_7.ctime;
    VAR_5->st_mtime = VAR_7.mtime;
    FUNC_2(VAR_6->dev->pMutex);
    return 0;
}
