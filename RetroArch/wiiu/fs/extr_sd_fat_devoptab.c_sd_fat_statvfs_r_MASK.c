
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct statvfs {int f_bsize; int f_frsize; int f_blocks; int f_bfree; int f_bavail; int f_files; int f_ffree; int f_fsid; int f_namemax; scalar_t__ f_flag; } ;
struct _reent {int _errno; } ;
struct TYPE_4__ {int pMutex; int pCmd; int pClient; } ;
typedef TYPE_1__ sd_fat_private_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*,int*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct statvfs*,int ,int) ;
 TYPE_1__* FUNC_5 (char const*) ;
 char* FUNC_6 (char const*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_7 (struct _reent *VAR_2, const char *VAR_3, struct statvfs *VAR_4)
{
    sd_fat_private_t *VAR_5 = FUNC_5(VAR_3);
    if(!VAR_5) {
        VAR_2->_errno = VAR_0;
        return -1;
    }

    FUNC_1(VAR_5->pMutex);


    FUNC_4(VAR_4, 0, sizeof(struct statvfs));

    char *VAR_6 = FUNC_6(VAR_3, VAR_5);
    if(!VAR_6) {
        VAR_2->_errno = VAR_1;
        FUNC_2(VAR_5->pMutex);
        return -1;
    }

    u64 VAR_7;

    int VAR_8 = FUNC_0(VAR_5->pClient, VAR_5->pCmd, VAR_6, &VAR_7, -1);

    FUNC_3(VAR_6);

    if(VAR_8 < 0) {
        VAR_2->_errno = VAR_8;
        FUNC_2(VAR_5->pMutex);
        return -1;
    }


    VAR_4->f_bsize = 512;


    VAR_4->f_frsize = 512;


    VAR_4->f_blocks = VAR_7 >> 9;


    VAR_4->f_bfree = VAR_4->f_bavail = VAR_7 >> 9;


    VAR_4->f_files = 0xffffffff;


    VAR_4->f_ffree = 0xffffffff;


    VAR_4->f_fsid = (int)VAR_5;


    VAR_4->f_flag = 0;


    VAR_4->f_namemax = 255;

    FUNC_2(VAR_5->pMutex);

    return 0;
}
