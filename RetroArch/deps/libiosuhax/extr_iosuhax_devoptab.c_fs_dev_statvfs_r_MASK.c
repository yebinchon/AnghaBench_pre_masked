
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct statvfs {int f_bsize; int f_frsize; int f_blocks; int f_bfree; int f_bavail; int f_files; int f_ffree; int f_fsid; int f_namemax; scalar_t__ f_flag; } ;
struct _reent {int _errno; } ;
struct TYPE_4__ {int pMutex; int fsaFd; } ;
typedef TYPE_1__ fs_dev_private_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 TYPE_1__* FUNC_4 (char const*) ;
 char* FUNC_5 (char const*,TYPE_1__*) ;
 int FUNC_6 (struct statvfs*,int ,int) ;

__attribute__((used)) static int FUNC_7 (struct _reent *VAR_3, const char *VAR_4, struct statvfs *VAR_5)
{
    fs_dev_private_t *VAR_6 = FUNC_4(VAR_4);

    if(!VAR_3)
        return -1;

    if(!VAR_6) {
        VAR_3->_errno = VAR_1;
        return -1;
    }

    if(!VAR_5) {
        VAR_3->_errno = VAR_0;
        return -1;
    }

    FUNC_1(VAR_6->pMutex);


    FUNC_6(VAR_5, 0, sizeof(struct statvfs));

    char *VAR_7 = FUNC_5(VAR_4, VAR_6);
    if(!VAR_7) {
        VAR_3->_errno = VAR_2;
        FUNC_2(VAR_6->pMutex);
        return -1;
    }

    uint64_t VAR_8;

    int VAR_9 = FUNC_0(VAR_6->fsaFd, VAR_7, 0x00, (uint32_t*)&VAR_8);

    FUNC_3(VAR_7);

    if(VAR_9 < 0) {
        VAR_3->_errno = VAR_9;
        FUNC_2(VAR_6->pMutex);
        return -1;
    }


    VAR_5->f_bsize = 512;


    VAR_5->f_frsize = 512;


    VAR_5->f_blocks = VAR_8 >> 9;


    VAR_5->f_bfree = VAR_5->f_bavail = VAR_8 >> 9;


    VAR_5->f_files = 0xffffffff;


    VAR_5->f_ffree = 0xffffffff;


    VAR_5->f_fsid = (int)VAR_6;


    VAR_5->f_flag = 0;


    VAR_5->f_namemax = 255;

    FUNC_2(VAR_6->pMutex);

    return 0;
}
