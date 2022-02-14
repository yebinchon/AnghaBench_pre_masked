
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct _reent {int _errno; } ;
struct TYPE_8__ {int pMutex; int pCmd; int pClient; } ;
typedef TYPE_1__ sd_fat_private_t ;
struct TYPE_9__ {int dirHandle; TYPE_1__* dev; } ;
typedef TYPE_2__ sd_fat_dir_entry_t ;
struct TYPE_10__ {scalar_t__ dirStruct; } ;
typedef int FSDirectoryHandle ;
typedef TYPE_3__ DIR_ITER ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*,int *,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 TYPE_1__* FUNC_4 (char const*) ;
 char* FUNC_5 (char const*,TYPE_1__*) ;

__attribute__((used)) static DIR_ITER *FUNC_6 (struct _reent *VAR_2, DIR_ITER *VAR_3, const char *VAR_4)
{
    sd_fat_private_t *VAR_5 = FUNC_4(VAR_4);
    if(!VAR_5) {
        VAR_2->_errno = VAR_0;
        return ((void*)0);
    }

    sd_fat_dir_entry_t *VAR_6 = (sd_fat_dir_entry_t *)VAR_3->dirStruct;

    FUNC_1(VAR_5->pMutex);

    char *VAR_7 = FUNC_5(VAR_4, VAR_5);
    if(!VAR_7) {
        VAR_2->_errno = VAR_1;
        FUNC_2(VAR_5->pMutex);
        return ((void*)0);
    }

    int VAR_8;

    int VAR_9 = FUNC_0(VAR_5->pClient, VAR_5->pCmd, VAR_7, (FSDirectoryHandle*)&VAR_8, -1);

    FUNC_3(VAR_7);

    FUNC_2(VAR_5->pMutex);

    if(VAR_9 < 0)
    {
        VAR_2->_errno = VAR_9;
        return ((void*)0);
    }

    VAR_6->dev = VAR_5;
    VAR_6->dirHandle = VAR_8;

    return VAR_3;
}
