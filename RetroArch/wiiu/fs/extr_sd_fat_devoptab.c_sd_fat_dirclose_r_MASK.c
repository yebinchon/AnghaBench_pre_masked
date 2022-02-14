
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct _reent {int _errno; } ;
struct TYPE_6__ {TYPE_1__* dev; int dirHandle; } ;
typedef TYPE_2__ sd_fat_dir_entry_t ;
struct TYPE_7__ {scalar_t__ dirStruct; } ;
struct TYPE_5__ {int pMutex; int pCmd; int pClient; } ;
typedef TYPE_3__ DIR_ITER ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3 (struct _reent *VAR_1, DIR_ITER *VAR_2)
{
    sd_fat_dir_entry_t *VAR_3 = (sd_fat_dir_entry_t *)VAR_2->dirStruct;
    if(!VAR_3->dev) {
        VAR_1->_errno = VAR_0;
        return -1;
    }

    FUNC_1(VAR_3->dev->pMutex);

    int VAR_4 = FUNC_0(VAR_3->dev->pClient, VAR_3->dev->pCmd, VAR_3->dirHandle, -1);

    FUNC_2(VAR_3->dev->pMutex);

    if(VAR_4 < 0)
    {
        VAR_1->_errno = VAR_4;
        return -1;
    }
    return 0;
}
