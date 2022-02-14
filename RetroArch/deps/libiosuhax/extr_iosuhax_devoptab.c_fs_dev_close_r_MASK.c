
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct _reent {int _errno; } ;
struct TYPE_4__ {TYPE_1__* dev; int fd; } ;
typedef TYPE_2__ fs_dev_file_state_t ;
struct TYPE_3__ {int pMutex; int fsaFd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3 (struct _reent *VAR_2, void *VAR_3)
{
    fs_dev_file_state_t *VAR_4 = (fs_dev_file_state_t *)VAR_3;

    if(!VAR_2)
        return -1;

    if(!VAR_4) {
        VAR_2->_errno = VAR_0;
        return -1;
    }

    if(!VAR_4->dev) {
        VAR_2->_errno = VAR_1;
        return -1;
    }

    FUNC_1(VAR_4->dev->pMutex);

    int VAR_5 = FUNC_0(VAR_4->dev->fsaFd, VAR_4->fd);

    FUNC_2(VAR_4->dev->pMutex);

    if(VAR_5 < 0)
    {
        VAR_2->_errno = VAR_5;
        return -1;
    }
    return 0;
}
