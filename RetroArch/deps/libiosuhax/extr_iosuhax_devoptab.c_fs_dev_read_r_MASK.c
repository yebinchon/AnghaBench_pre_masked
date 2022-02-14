
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct _reent {int _errno; } ;
typedef size_t ssize_t ;
struct TYPE_4__ {int pos; TYPE_1__* dev; int fd; int read; } ;
typedef TYPE_2__ fs_dev_file_state_t ;
struct TYPE_3__ {int pMutex; int fsaFd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int,size_t,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static ssize_t FUNC_3 (struct _reent *VAR_3, void *VAR_4, char *VAR_5, size_t VAR_6)
{
    if(!VAR_3)
        return 0;

    fs_dev_file_state_t *VAR_7 = (fs_dev_file_state_t *)VAR_4;

    if(!VAR_7) {
        VAR_3->_errno = VAR_1;
        return 0;
    }

    if(!VAR_7->dev) {
        VAR_3->_errno = VAR_2;
        return 0;
    }

    if(!VAR_7->read)
    {
        VAR_3->_errno = VAR_0;
        return 0;
    }

    FUNC_1(VAR_7->dev->pMutex);

    size_t VAR_8 = 0;

    while(VAR_8 < VAR_6)
    {
        size_t VAR_9 = VAR_6 - VAR_8;

        int VAR_10 = FUNC_0(VAR_7->dev->fsaFd, VAR_5 + VAR_8, 0x01, VAR_9, VAR_7->fd, 0);
        if(VAR_10 < 0)
        {
            VAR_3->_errno = VAR_10;
            VAR_8 = 0;
            break;
        }
        else if(VAR_10 == 0)
        {

            break;
        }
        else
        {
            VAR_8 += VAR_10;
            VAR_7->pos += VAR_10;
        }
    }

    FUNC_2(VAR_7->dev->pMutex);
    return VAR_8;
}
