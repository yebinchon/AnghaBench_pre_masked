
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct _reent {int _errno; } ;
struct TYPE_6__ {TYPE_1__* dev; int dirHandle; } ;
typedef TYPE_2__ fs_dev_dir_entry_t ;
struct TYPE_7__ {scalar_t__ dirStruct; } ;
struct TYPE_5__ {int pMutex; int fsaFd; } ;
typedef TYPE_3__ DIR_ITER ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3 (struct _reent *VAR_2, DIR_ITER *VAR_3)
{
    fs_dev_dir_entry_t *VAR_4;

    if(!VAR_2)
        return -1;

    if(!VAR_3) {
        VAR_2->_errno = VAR_0;
        return -1;
    }

    VAR_4 = (fs_dev_dir_entry_t *)VAR_3->dirStruct;

    if(!VAR_4->dev) {
        VAR_2->_errno = VAR_1;
        return -1;
    }

    FUNC_1(VAR_4->dev->pMutex);

    int VAR_5 = FUNC_0(VAR_4->dev->fsaFd, VAR_4->dirHandle);

    FUNC_2(VAR_4->dev->pMutex);

    if(VAR_5 < 0)
    {
        VAR_2->_errno = VAR_5;
        return -1;
    }
    return 0;
}
