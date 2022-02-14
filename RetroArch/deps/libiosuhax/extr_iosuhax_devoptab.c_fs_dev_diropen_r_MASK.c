
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct _reent {int _errno; } ;
struct TYPE_8__ {int pMutex; int fsaFd; } ;
typedef TYPE_1__ fs_dev_private_t ;
struct TYPE_9__ {int dirHandle; TYPE_1__* dev; } ;
typedef TYPE_2__ fs_dev_dir_entry_t ;
struct TYPE_10__ {scalar_t__ dirStruct; } ;
typedef TYPE_3__ DIR_ITER ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 TYPE_1__* FUNC_4 (char const*) ;
 char* FUNC_5 (char const*,TYPE_1__*) ;

__attribute__((used)) static DIR_ITER *FUNC_6 (struct _reent *VAR_3, DIR_ITER *VAR_4, const char *VAR_5)
{
    fs_dev_private_t *VAR_6 = FUNC_4(VAR_5);

    if(!VAR_3)
        return ((void*)0);

    if(!VAR_6) {
        VAR_3->_errno = VAR_1;
        return ((void*)0);
    }

    if(!VAR_4) {
       VAR_3->_errno = VAR_0;
       return ((void*)0);
    }

    fs_dev_dir_entry_t *VAR_7 = (fs_dev_dir_entry_t *)VAR_4->dirStruct;

    FUNC_1(VAR_6->pMutex);

    char *VAR_8 = FUNC_5(VAR_5, VAR_6);
    if(!VAR_8) {
        VAR_3->_errno = VAR_2;
        FUNC_2(VAR_6->pMutex);
        return ((void*)0);
    }

    int VAR_9;

    int VAR_10 = FUNC_0(VAR_6->fsaFd, VAR_8, &VAR_9);

    FUNC_3(VAR_8);

    FUNC_2(VAR_6->pMutex);

    if(VAR_10 < 0)
    {
        VAR_3->_errno = VAR_10;
        return ((void*)0);
    }

    VAR_7->dev = VAR_6;
    VAR_7->dirHandle = VAR_9;

    return VAR_4;
}
